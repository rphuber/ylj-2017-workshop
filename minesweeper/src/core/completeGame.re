module CompleteGame = {
  include ReactRe.Component;
  type props = unit;
  let name = "CompleteGame";
  let render _ => <div> (ReactRe.stringToElement "hello") </div>;
};

include ReactRe.CreateComponent CompleteGame;

let createElement = wrapProps ();
