module Problem7 = {
  include ReactRe.Component.Stateful;
  type props = unit;
  type state = unit;
  let name = "Problem7";
  let getInitialState (_:props) => {
    ();
  };
  let render _ => <div />;
};

include ReactRe.CreateComponent Problem7;

let createElement = wrapProps ();
