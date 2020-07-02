let myArray = [|2, 3, 43, 4|];
let myList = ["app", "users", "running-from-js"];

switch (myList) {
| ["app", "users", "running-from-js"] => "go to the user homepage"->Js.log
| ["app", "users", _] => "go to list of users"->Js.log
| ["app", _, _] => "go to app dashboard"->Js.log
| _ => "go to 404"->Js.log
};
