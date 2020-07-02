let getItem = _theList =>
  if (false) {
    3;
  } else {
    raise(Not_found);
  };

let result =
  try(getItem([1, 2, 3])) {
  | Not_found => 0 /* Default value if getItem throws */
  };
