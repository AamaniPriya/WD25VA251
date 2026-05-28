import React, { useState } from 'react'

function StudentReg()
{
    const[data,setData]=useState({name:"",tel:"",email:""});
    const handleChange=(e)=>{
        setData({...data,[e.target.name]:e.target.value})
    }
    const handleSubmit=(e)=>{
        e.preventDefault();
        if(data.name==""||data.tel==""||data.email=="")
        {
            alert("Please fill all the fields");
        }
        else
        {
            alert("Data submitted successfully");
        }
        setData({name:"",tel:"",email:""});
    };
    return(
        <>
        <div>
            <h1>Student Registration</h1>
            <form>
                <label htmlFor="name">Name :</label>
                <input type="text" id="name" name="name" required value={data.name}/>

                <label htmlFor="tel">Mobile :</label>
                <input type="text" id="tel" name="tel" required vale={data.tel}/>

                <label htmlFor="email">Email :</label>
                <input type="email" id="email" name="email" required value={data.email}/>
                <button type='submit'>Register Here</button>
            </form>
        </div>
        </>
    )
}

export default StudentReg;