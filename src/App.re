[%raw {|require("./App.css")|}];

[@genType]
[@genType.as "App"]
[@react.component]
let make = () => {
  let (alertIsActive, setAlertIsActive) = React.useState(() => false);

  <div className="App">
    <header className="App-header">
      <button onClick={_ => setAlertIsActive(_ => true)}>
        "Activate Alert"->React.string
      </button>
      <Alert
        type_=`success
        isActive=alertIsActive
        options={Alert.options(~dismissTime=1000, ())}>
        <div> "Success!"->React.string </div>
      </Alert>
    </header>
  </div>;
};