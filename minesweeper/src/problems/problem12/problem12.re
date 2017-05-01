let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem12 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem12";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem12;

let createElement = wrapProps ();
