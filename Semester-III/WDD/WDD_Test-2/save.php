<?php
$name=$_POST['name'];
$email=$_POST['email'];
$contact=$_POST['contact'];

$connection=mysqli_connect("localhost" , "root" , "rock" , "WDD_Test");
$c1="insert into Details values('$name' , '$email' , '$contact')";
$result= mysqli_query($connection,$c1);
if ($result) 
    echo "New record created successfully !!";
else
    echo "Error in creating new record !!";

    if($result==TRUE){
       
        $query= "select * from Details ";
        $row= mysqli_query($connection,$query);
        
        if(mysqli_num_rows($row)>0){ ?>
         <CAPTION > <H2>Details Table</H2> </CAPTION>
                <TABLE class="table">
                
                    <TR class ="row">
                        <TH>NAME</TH>
                        <TH>EMAIL</TH>
                        <TH>CONTACT</TH>
                    </TR>
            <?php  while($i=mysqli_fetch_assoc($row)){ ?>
            <TR class ="row">
               
                <TD class="td"> <?PHP echo $i["Name"] ?> </td>
                <TD class="td"> <?PHP echo $i["Email"] ?> </td>
                <TD class="td"> <?PHP echo $i["Contact"] ?> </td>
            </TR>
           
           <?php } ?>
               </TABLE>
       <?php } 
      }     
} ?>
