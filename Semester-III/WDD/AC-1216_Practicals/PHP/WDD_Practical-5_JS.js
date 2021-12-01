
         //Harsh Bamotra AC-1216
        //Program to validate a form using JavaScript
        function validate(form)
            {
                var flag=true;
                var a = form.age.value;
                if(a<18 || a>22)                   //checking age 
                    {
                        alert("Age should be between 18 to 22 !!");
                        flag=false;
                    }

                for(var i=0 ; i<5 ; i++)
                    {
                        if(form.elements[i].value=="")
                            {
                                alert("Text box and fields can not be blank !!");
                                flag=false;
                                break;
                            }  
                    }                                   //checking text boxes and areas

                if(form.Address.value=="")
                    {
                        alert("Address is mandatory !!");
                        flag=false;
                    }

                //checking images extensions 
                var array = form.photo.value.split(".");
                var ext = array[1];
                if(ext!="jpg" & ext!="png")
                    {
                        alert("Please select a valid image file !!");
                        flag=false;
                    }
                    
                //checking email format 
                var e=/^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
                if (!e.test(form.email.value))
                    {
                        alert("You have entered an invalid email address!")
                        flag=false;
                    }

                //checking roll no. 
                var roll = form.roll.value.length;
                if(roll!=7)
                    {
                        alert("Please enter a valid roll no !!");
                        flag=false;
                    }

                return flag;
            }
