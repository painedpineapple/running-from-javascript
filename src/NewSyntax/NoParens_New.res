let logIt = false;

if logIt {
  "Logging it"->Js.log;
}

type status =
  | Stop
  | Go
  | SlowDown;

let status = SlowDown;

switch (status) {
| Stop => "Stop"->Js.log
| Go => "Go"->Js.log
| SlowDown => "SlowDown"->Js.log
};