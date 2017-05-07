module Routes = {
  include ReactRe.Component;
  type props = unit;
  let name = "Routes";
  let render _ => <div />
};

include ReactRe.CreateComponent Routes;

let createElement = wrapProps ();
