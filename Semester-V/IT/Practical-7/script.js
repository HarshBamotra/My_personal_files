         //Harsh Bamotra AC-1216
        //Program to validate a form using JavaScript
        function validate(form)
            {
                console.log("Function called")
                var flag=true;
                var a = document.getElementById("age").value;
                var albl = document.getElementById("agelbl")
                if(a<18)                   //checking age 
                    {
                        albl.innerText = ("Mininmum age required is 18.");
                        flag=false;
                    }
                else{
                    albl.innerText = "";
                }

                //checking images extensions 
                var array = document.getElementById("resume").value.split(".");
                var ext = array[array.length-1];
                var rlbl = document.getElementById("resumelbl");
                if(ext!="pdf")
                    {
                        rlbl.innerText = ("Please select a valid file.");
                        flag=false;
                    }
                else{
                        rlbl.innerText = "";
                    }
                    
                //checking email format
                var elbl = document.getElementById("emaillbl"); 
                var e=/^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
                if (!e.test(document.getElementById("email").value))
                    {
                        elbl.innerText = ("Please enter a valid email address.")
                        flag=false;
                    }
                else{
                    elbl.innerText = "";
                }

                //checking roll no.
                var conlbl = document.getElementById("contactlbl"); 
                var roll = document.getElementById("contact").value.length;
                if(roll!=10)
                    {
                        conlbl.innerText = "Please enter a valid contact number.";
                        flag=false;
                    }
                else{
                    conlbl.innerText = "";
                }

                return flag;
            }
