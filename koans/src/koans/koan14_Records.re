open Helpers;

type point = {x: int, y: int};

let makePoint x y => {x, y};

let point = makePoint 1 2;

let koans _ =>
  Mocha.describe "Records" @@ (
    fun _ => {
      Mocha.it "a record is a set of named fields" @@ (
        fun _ => {x: __ (), y: __ ()} |> Mocha.eq {x: 1, y: 2}
      );
      Mocha.it "you can access a field with dot notation" @@ (fun _ => __ () |> Mocha.eq point.x);
      Mocha.it "you can extract data with destructuring too" @@ (
        fun _ => {
          let _ = point;
          __ () |> Mocha.eq 1
        }
      )
    }
  );
