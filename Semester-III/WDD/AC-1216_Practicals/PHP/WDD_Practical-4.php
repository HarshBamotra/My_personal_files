<?php
    $userid=$_POST['userid'];
    $password=$_POST['passw'];
    $connection=mysqli_connect("localhost" , "root" , "harsh" , "db");
    $c1="select *from Users where UserID='$userid' and password='$password'";
    $result=mysqli_query($connection , $c1);
    $row = mysqli_fetch_assoc($result);
    if($row)
        echo "Welcome again !!";
    else
        echo "Incorrect password or user do not exists !!"; 
?>