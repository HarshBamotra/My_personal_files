<?php

$connection=mysqli_connect("localhost","root","password","database");
$query="select * from Students;";
$result=mysqli_query($connection,$query);
$row = mysqli_fetch_assoc($result);            //if we only need one entry 

while($row = mysqli_fetch_assoc($result))    //if there are more than one entry
    {
        echo $row["Fname"];
    }

?>