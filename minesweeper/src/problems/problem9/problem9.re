let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem9 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem9";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem9;

let createElement = wrapProps ();
