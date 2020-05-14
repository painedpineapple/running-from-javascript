[@bs.deriving abstract]
type options = {
  [@bs.optional]
  dismissTime: int,
};

[@react.component] [@bs.module "./Alert"]
external make:
  (
    ~type_: [@bs.string] [ | `success | `info | `warning | `error],
    ~children: React.element,
    ~isActive: bool,
    ~className: string=?,
    ~options: options=?
  ) =>
  React.element =
  "Alert";