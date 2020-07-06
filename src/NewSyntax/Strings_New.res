
let multiline = `
  This is a
  string that goes
  multiple lines that also
  supports unicode
  Cuidémonos
  你好
`

let multilineWithUnicode = j`
  This is a
  string that goes
  multiple lines that also
  supports unicode
  Cuidémonos
  你好
`

let singleLine = "single line only with double quotes";

let name = "Running from JavaScript";

j`Welcome to ${name}`->Js.log;

type user = {
  id: int,
  name: string,
};

let user = {id: 0, name: "Running From JavaScript"};


j`I can interpolate nested values ${user.name}`->Js.log


