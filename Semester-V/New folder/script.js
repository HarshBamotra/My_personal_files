// function validate(){
//     var name = document.getElementById('name').value;
//     var pass = document.getElementById('password').value;   
//     if(name == "Harsh" && pass == "admin"){
//         console.log("Login Sucessfull !!");
//         document.write("Login Sucessfull !!");
//     }
//     else{
//         console.log("Please enter correct password !! You bartard !");
//         document.write("Please enter correct password !! You bartard !")
//     }
// }

var form = document.querySelector('#form');
var btn = document.querySelector("#submit");
console.log(form)
function consoleData() {
    let data = new FormData(form)
    let values = [...data.entries()]
    document.write(values)
}

btn.addEventListener('click', consoleData())
