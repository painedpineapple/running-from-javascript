type user =
  Js.t({
    .
    "name": string,
    "id": string,
    [@bs.set] "age": int,
  });

let user: user = {
  "name": "Running From JavaScript",
  "id": "0",
  "age": 0,
  "age#=": age => (),
};

user##name->Js.log;

user##age #= 101;
