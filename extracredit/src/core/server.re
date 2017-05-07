open Express;

type middlewareFn = Request.t => Response.t => Next.t => done_;

type method =
  | HEAD
  | GET
  | POST
  | PUT
  | DELETE;

type route =
  | Route (method, string, middlewareFn)
  | Use middlewareFn
  | UseWithPath (string, middlewareFn)
  | Static (string, string);

let applyRoute server route =>
  switch route {
  | Route (HEAD, _, _) => Js_exn.raiseError "not implemented yet"
  | Route (GET, path, handler) => App.get server ::path (Middleware.from handler)
  | Route (POST, path, handler) => App.post server ::path (Middleware.from handler)
  | Route (PUT, _, _) => Js_exn.raiseError "not implemented yet"
  | Route (DELETE, _, _) => Js_exn.raiseError "not implemented yet"
  | Use handler => App.use server (Middleware.from handler)
  | UseWithPath (path, handler) => App.useOnPath server ::path (Middleware.from handler)
  | Static (path, folder) =>
    App.useOnPath
      server
      ::path
      (
        Express.Static.make folder (Express.Static.defaultOptions ()) |> Express.Static.asMiddleware
      )
  };

let makeServer routes => {
  let app = express ();
  List.iter (applyRoute app) routes;
  app
};
