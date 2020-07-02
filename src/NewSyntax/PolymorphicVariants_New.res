type status = [
 | #suspended
 | #active(option<bool>)
 | #pending
]

let status = #suspended

switch status {
  | #suspended => "suspended"->Js.log
  | #active(true)=> "active, true"->Js.log
  | #active(false)=> "active, false"->Js.log
  | #pending=> "pending"->Js.log
}