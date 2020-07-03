let name = "Running from JavaScript";

{j|Welcome to $name|j}->Js.log;

type user = {
  id: int,
  name: string,
};

let user = {id: 0, name: "Running From JavaScript"};

/**  {j|I cannot interpolate nested values ${user.name}|j}->Js.log; */;
