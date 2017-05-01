let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem14 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem14";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem14;

let createElement = wrapProps ();
