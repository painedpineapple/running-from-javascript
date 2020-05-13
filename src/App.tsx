import React from 'react';
import './App.css';
import Alert from './ep3_component_bindings/Alert';

function App() {
  let [alertIsActive, setAlertIsActive] = React.useState(() => false)
  return (
    <div className="App">
      <header className="App-header">
        <button onClick={_ => setAlertIsActive(_ => true)}>Activate Alert</button>
        <Alert type="success" isActive={alertIsActive} options={{ dismissTime: 1000 }}>
          <div>
            Success!
          </div>
        </Alert>
      </header>
    </div>
  );
}

export default App;
