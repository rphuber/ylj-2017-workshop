open Helpers;

open Containers;

let koans _ =>
  Mocha.describe "Option" @@ (
    fun _ => {
      Mocha.it "maybe represents a value that may be nothing" @@ (
        fun _ => __ () |> (==) None |> Mocha.ok
      );
      Mocha.it "or the value could be something" @@ (
        fun _ => Some (__ ()) |> (==) (Some 5) |> Mocha.ok
      );
      Mocha.it "withDefault can be used to get the value from a maybe" @@ (
        fun _ => __ () |> (==) (Option.getOr default::3 (Some 5)) |> Mocha.ok
      );
      Mocha.it "but will give the default value if there is nothing" @@ (
        fun _ => __ () |> (==) (Option.getOr default::3 None) |> Mocha.ok
      );
      Mocha.it "map will transform the value in a maybe" @@ (
        fun _ => Some (__ ()) |> (==) (Option.map (fun n => n / 2) (Some 4)) |> Mocha.ok
      );
      Mocha.it "but will not transform a nothing" @@ (
        fun _ => __ () |> (==) (Option.map (fun n => n / 2) None) |> Mocha.ok
      )
    }
  );
