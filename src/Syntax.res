let string = j`Some string`

@genType
type status = [
 | #suspended
 | #active(option<bool>)
 | #pending
]

@genType
type some = 
| Hello
| World
| Cheese

let active = #active(true)
let suspended = #suspended

let array = [3, 4, 43]
let list = list[21, 3,2,4]

