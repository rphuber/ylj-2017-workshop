module Problem8Inner = {
  let style =
    ReactDOMRe.Style.make
      /* place the appropriate styles here */
      ();
  module Component = {
    include ReactRe.Component;
    type props = unit;
    let name = "Problem8";
    let render _ => <div style />;
  };
  include ReactRe.CreateComponent Component;
  let createElement = wrapProps ();
};

module Problem8 = {
  include ReactRe.Component.Stateful;
  type props = unit;
  type state = {clicked: bool, hovered: bool};
  let name = "Problem8";
  let getInitialState _ => {clicked: false, hovered: false};
  let render _ => <div> <Problem8Inner /> </div>;
};

include ReactRe.CreateComponent Problem8;

let createElement = wrapProps ();
