import React, { ReactElement } from "react"

type options = {
  dismissTime?: number
};

type props = {
  type: "success" | "info" | "warning" | "error"
  children: ReactElement
  isActive: boolean
  className?: string
  options?: options
}

export function Alert({ className = "", ...props }: props) {
  let [isActive, setIsActive] = React.useState(() => props.isActive)

  React.useEffect(() => {
    setIsActive(_ => props.isActive)
  }, [props.isActive])

  React.useEffect(() => {
    if (props.options?.dismissTime && isActive) {
      setTimeout(() =>
        setIsActive(_ => false), props.options.dismissTime
      )
    }
  }, [isActive, props.options])

  return isActive ? (
    <div className={`${className} alert alert-type--${props.type}`}>
      {props.children}
    </div>
  ) : null

}

export default Alert