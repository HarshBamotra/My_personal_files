var insert = document.getElementById("insert");
insert.addEventListener("click", displayDetails);

var row = 2;

function displayDetails()
{
    var name = document.getElementById("name").value;
    var rollno = document.getElementById("rollno").value;
    var course = document.getElementById("course").value;
    var marks1 = document.getElementById("marks1").value;
    var marks2 = document.getElementById("marks2").value;
    var marks3 = document.getElementById("marks3").value;
    var marks4 = document.getElementById("marks4").value;
    var marks5 = document.getElementById("marks5").value;
    
    let x= document.getElementsByClassName("Error")

    for(var i = 0; i < x.length; i++) {
        var elm = x[i];
        if(elm.innerHTML){
            alert("Please enter a valid input !!");
            return false;
        }
    }
    if( name==""||rollno==""||course==""||marks1==""||marks2==""||marks3==""||marks4==""||marks5==""){
        alert("All fields are mandatory to fill !!");
        return false;
    }
    /*if(!name || !rollno || !course || !marks)
    {
        alert("Please fill all the details.");
        return;
    }*/
    var showData = document.getElementById("showdata");
    var newRow = showData.insertRow(row);

    var cell1 = newRow.insertCell(0);
    var cell2 = newRow.insertCell(1);
    var cell3 = newRow.insertCell(2);
    var cell4 = newRow.insertCell(3);
    var cell5 = newRow.insertCell(3);
    var cell6 = newRow.insertCell(3);
    var cell7 = newRow.insertCell(3);
    var cell8 = newRow.insertCell(3);
    var cell9 = newRow.insertCell(-1);

    cell1.innerHTML = name;
    cell2.innerHTML = rollno;
    cell3.innerHTML = course;
    cell4.innerHTML = marks1;
    cell5.innerHTML = marks2;
    cell6.innerHTML = marks3;
    cell7.innerHTML = marks4;
    cell8.innerHTML = marks5;

    var total = parseInt(marks1) + parseInt(marks2) + parseInt(marks3) + parseInt(marks4) + parseInt(marks5);
    var percentage = (total/250)*100;
    if (percentage >= 90)
    {
        cell9.innerHTML = 'A';
    }
    else if (percentage >= 75 && percentage < 90)
    {
        cell9.innerHTML = 'B';
    }
    else if (percentage >= 60 && percentage < 75)
    {
        cell9.innerHTML = 'C';
    }
    else if (percentage >= 45  && percentage < 60)
    {
        cell9.innerHTML = 'D';
    }
    else{
        cell9.innerHTML = 'E';
    }

    row++;
}

/*function calculateGrades()
{
    var grade;
    var total = marks1 + marks2 + marks3 + marks4 + marks5;
    var percentage = (total/250)*100;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 75 && percentage < 90)
    {
        grade = 'B';
    }
    else if (percentage >= 60 && percentage < 75)
    {
        grade = 'C';
    }
    else if (percentage >= 45  && percentage < 60)
    {
        grade = 'D';
    }
    else{
        grade = 'E';
    }
}*/


// here i start ..pankaj..

// function valid(marks){
//     if (marks.value > 50 || marks.value<0) {
//         document.getElementById(`"${marks.id}error"`).innerHTML= "please enter Marks between 0-50";
//     }
//     return false;
// }
// function validateForm(){
//     var marks1 = document.getElementById("marks1");
//     var marks2 = document.getElementById("marks2");
//     var marks3 = document.getElementById("marks3");
//     var marks4 = document.getElementById("marks4");
//     var marks5 = document.getElementById("marks5");
//     // valid(marks1);
//     // valid(marks2);
//     // valid(marks3);
//     // valid(marks4);
//     // valid(marks5);
//     valid(marks1)||valid(marks2)||valid(marks3)||valid(marks4)||valid(marks5)?null:false;
// }
function showerror(x){
    let error = x.id+"error"
    if(x.value<0 || x.value>50 || x.value.length()==0){
        document.getElementById(error).innerHTML= "Please enter marks between 0-50 !!";
    }else{
        document.getElementById(error).innerHTML= "";
    }
}
function charerr(x){
    if(x.id=="name"){
        const error = "user"+x.id;
        if(x.value==""){
            document.getElementById(error).innerHTML ="Name field is mandatory !!";
        }else{
            document.getElementById(error).innerHTML ="";
        }
    }
    if(x.id=="rollno"){
        const error = "user"+x.id ;
        if(x.value<0 ||x.value.length==0){
            document.getElementById(error).innerHTML ="Please enter a valid roll no !!";
        }else{
            document.getElementById(error).innerHTML ="";
        }
    }
    if(x.id=="course"){
        const error = "user"+x.id ;
        if(x.value.length<=3){
            document.getElementById(error).innerHTML ="Please enter a valid course !!";
        }else{
            document.getElementById(error).innerHTML ="";
        }
    }
    }
