function result(){
let inputValue=document.getElementById('inputData').value;

console.log(inputValue);

let displayHeading=document.getElementById('text');

displayHeading.innerHTML=inputValue;


displayHeading.style.color="red";
//change color of body element

document.getElementsByTagName('body')[0].style.backgroundColor="seagreen";}
    

//addEventListener

let paraBkg=document.getElementById('para');
function colorchange(){
    paraBkg.style.background="#"+(Math.random()*0xFFFFFF<<0).toString(16);
}
paraBkg.addEventListener('mouseout',colorChange);
