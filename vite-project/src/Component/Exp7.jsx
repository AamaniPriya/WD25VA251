import React from 'react'

function Exp7({students}) {

    const studentList= [];

    for (let x in students) {
        studentList.push(
            <div key={x} style={{backgroundColor: '#9c3b3b' , padding: '20 px'}}>
                <h3>{students[x].name}</h3>
                <h3>{students[x].rollno}</h3>
                <h3>{students[x].course}</h3>
            </div>
        );
    }

    return (
        <div style={{backgroundColor: '#816d6d' , color: 'white', display: 'flex' , gap: '10px' , margin: '0 auto'}}>
            {studentList}
        </div>
    )
}

export default Exp7