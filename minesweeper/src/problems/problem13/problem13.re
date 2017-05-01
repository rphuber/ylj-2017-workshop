let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem13 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem13";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem13;

let createElement = wrapProps ();
