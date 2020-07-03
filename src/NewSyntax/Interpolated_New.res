let name = "Running from JavaScript";

j`Welcome to ${name}`->Js.log;

type user = {
  id: int,
  name: string,
};

let user = {id: 0, name: "Running From JavaScript"};


j`I can interpolate nested values ${user.name}`->Js.log

