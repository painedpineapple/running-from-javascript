let myArray = [2, 3, 43, 4];
let myList = list["app", "users", "running-from-js"];

switch (myList) {
| list["app", "users", "running-from-js"] => "go to the user homepage"->Js.log
| list["app", "users", _] => "go to list of users"->Js.log
| list["app", _, _] => "go to app dashboard"->Js.log
| _ => "go to 404"->Js.log
};
