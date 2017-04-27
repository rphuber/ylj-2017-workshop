open Helpers;
open Containers;

module IMap = Map.Make({ type t = int; let compare = compare; });

let koans _ => Mocha.describe "Mapionaries" @@ fun _ => {
  Mocha.it "Map.Make is a module functor that takes a module" @@
    fun _ => {
      module StringMap = Map.Make(String);
      Mocha.ok true;
    };

  Mocha.it "Map.Make takes any module with { type: t, compare: t => t => int }" @@
    fun _ => {
      module FloatMap = Map.Make(Float);
      Mocha.ok true;
    };

  Mocha.it "Map.Make can take an arbitrary module to wrap types without a predefined OrderedType interface" @@
    fun _ => {
      module IntMap = Map.Make({ type t = int; let compare = compare });
      Mocha.ok true;
    };

  Mocha.it "Maps can be created empty" @@
    fun _ => {
      (__())
        |> Mocha.eq IMap.empty;
    };

  Mocha.it "Maps can be initialised with a single key value pair" @@
    fun _ => {
      (__())
        |> Mocha.eq @@ IMap.singleton 1 "value";
    };

  Mocha.it "or from a list of key-value pairs" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.size @@ IMap.fromList [ ( 1, "a" ), ( 2, "b" ) ]);
  Mocha.it "they can also be converted back to a list" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.toList @@ IMap.fromList [ ( 1, "a" ), ( 2, "b" ) ]);
  Mocha.it "checking for an empty dictionary is easy" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.isEmpty IMap.empty);
  Mocha.it "you can also check if a key is present in the dictionary" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.mem 1 @@ IMap.singleton 1 "a");
  Mocha.it "or get the value associated with the key" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 1 @@ IMap.singleton 1 "a");
  Mocha.it "a key-value pair can be added to the dictionary" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 2 @@ IMap.add 2 "b" @@ IMap.singleton 1 "a");
  Mocha.it "inserting can also overwrite the value associated with a key" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 1 @@ IMap.add 1 "b" @@ IMap.singleton 1 "a");
  Mocha.it "updating a value works similarly" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 1 @@ IMap.update 1 (fun _ => Some "b") @@ IMap.singleton 1 "a");
  Mocha.it "but knows about the current value" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 1 @@ IMap.update 1 (fun v => Some ((Option.get "" v) ^ "b")) @@ IMap.singleton 1 "a");
  Mocha.it "updating can add a new value" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 2 @@ IMap.update 2 (fun _ => Some "b") @@ IMap.singleton 1 "a");
  Mocha.it "or even remove a value" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 1 @@ IMap.update 1 (fun _ => None) @@ IMap.singleton 1 "a");
  Mocha.it "of course there is a more direct way to remove a value too" @@
    fun _ =>
        (Some (__()))
            |> Mocha.eq (IMap.get 1 @@ IMap.remove 1 @@ IMap.singleton 1 "a");
  Mocha.it "you can get the list of keys" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.keysList @@ IMap.singleton 1 "a");
  Mocha.it "or the list of values" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.valuesList @@ IMap.singleton 1 "a");
  Mocha.it "mapping works similarly as with lists" @@
    fun _ =>
        (__())
            |> Mocha.eq (IMap.valuesList @@ IMap.map (fun _ v => v ^ "c") (IMap.fromList [ ( 1, "a" ), ( 2, "b" ) ]));
};
