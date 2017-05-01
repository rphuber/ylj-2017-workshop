let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem11 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem11";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem11;

let createElement = wrapProps ();
