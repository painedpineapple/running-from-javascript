[@genType]
type user = {
  id: string,
  name: string,
};

let user = {id: "1", name: "Running from JS"};

[@genType]
[@genType.as "File"]
[@react.component]
let make = (~children) => <div> children </div>;