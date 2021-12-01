<?php

$fname=$_POST['fname'];
$lname=$_POST['lname'];
$roll=$_POST['roll'];
$age=$_POST['age'];
$email=$_POST['email'];
$course=$_POST['Course'];
$gender=$_POST['Gender'];
$societies=implode("," , $_POST["society"]);
$address=$_POST['Address'];

$folder = "E:\photos\h";
$file = $folder.basename($_FILES["photo"]["name"]);
move_uploaded_file($_FILES["photo"]["tmp_name"], $file);

$connection=mysqli_connect("localhost","root","harsh","db");
$query="insert into Students values('$fname' , '$lname' , '$roll' , '$age' , '$email' , 
'$course' , '$gender' , '$societies' , '$address' , '$file');";

$result=mysqli_query($connection,$query);
	if($result)
	    header('location:WDD_Practical-5.php?msg=Your response has been recorded !!');
	else
	    header('location:WDD_Practical-5.php?msg=Something went wrong !!');

?>