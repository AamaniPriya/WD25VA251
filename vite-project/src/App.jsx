import Props from "./Component/Props/Props";
import UseState from "./Component/Hooks/UseState";
import UseEffect from "./Component/Hooks/UseEffect";
import StudentReg from "./Component/Form/StudentReg";
import StundentForm from "./Component/Form/StundentForm";


import StudentCard from "./Lab/Exp7/StudentCard";
import Count from "./Lab/Exp8/Count";

import RegistrationForm from "./Lab/Exp9/RegistrationForm";

function App() {
  /*   const students = [
    { name: "Abhay", rollno: "250B1034", course: "B.Tech" },
    { name: "Vikas", rollno: "250B1035", course: "MCA" },
    { name: "Rahul", rollno: "250B1036", course: "BCA" }
  ]; */

  return (
    <>
      {/* <Props name="Abhay" rollno="250B1034" course="B.Tech"/> */}
      {/* for multiple data */}
      {/* <Props students={students} /> */}
      {/* <UseState/> */}
      {/* <UseEffect/> */}
      <StudentReg/>
      {/* <StundentForm/> */}

      {/* //Experiment 07 */}
      {/*  <h1>Student Information System</h1>
      <div className="student-container">
        <StudentCard name="Monika" course="B.Tech Data Science" marks="95" />
        <StudentCard name="Rahul" course="B.Tech CS" marks="88" />
        <StudentCard name="Sneha" course="B.Tech IT" marks="92" />
      </div> */}

      {/* Experiment 08 */}
      {/* <Count/> */}

      {/* Experiment 09 */}
      {/* <RegistrationForm/> */}
    </>
  );
}

export default App;
/*import './App.css'
import Demo from './component/Demo'
import Props from './component/Props'
import Exp7 from './component/Exp7'
import UseStateHook from './component/Hooks/UseStateHook'


function App() {
  const name="ABES College";

  const students=[
    {name:"Apurva", rollno:"250b98", course:"B-Tech"},
    {name:"Rohit", rollno:"250b97", course:"B-Tech"},
    {name:"Vishal", rollno:"250b96", course:"B-Tech"},
  ]

  return (
    <>
      <h1>Welcome to React</h1>
      <h2> Hello {name}</h2>
      <Demo/>
      <Props name="Vikas" rollno="250b98" course="B-Tech"/>
      <Exp7 students={students}/>
    </>
  )
}

export default App*/