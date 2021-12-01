<?php
if(isset($_GET["msg"]))
    {
	    echo "<script>alert('".$_GET["msg"]."')</script>";
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
    <script src="WDD_Practical-5_JS.js"></script>
</head>
<body style="background-color: rgb(224, 176, 243);">
    <h1 style="text-align: center;">Form</h1>
    <p>Please enter your details carefully.</p>

    <form action="WDD_Practical-5_report.php" method="post" enctype="multipart/form-data">
        <fieldset><legend>Enrollment Form</legend>
        <br>First &nbsp Name  
        &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        Last Name
        <br><input type="text" name="fname">&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<input type="text" name="lname"><br>

        <br>Roll No.
        &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        Age
        <br><input type="text" name="roll">&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<input type="number" name="age"><br>

        <br>E-Mail
        &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        &nbsp&nbsp Course
        <br><input type="text" name="email">&nbsp&nbsp&nbsp&nbsp&nbsp
        <select name="Course">
            <option value="Bsc. Hons. Computer Science">Bsc. Hons. Computer Science</option>
            <option value="Bsc. Hons. Physics">Bsc. Hons. Physics</option>
            <option value="Bsc. Hons. Chemistry">Bsc. Hons. Chemistry</option>
            <option value="Bsc. Hons. Mathematics">Bsc. Hons. Mathematics</option>
            <option value="BCom.">BCom.</option>
            <option value="BA">BA</option>
        </select><br>

        <br>Gender
        <br><input type="radio" name="Gender" value="Male">Male
        <br><input type="radio" name="Gender" value="Female">Female
        <br><input type="radio" name="Gender" value="Others">Others<br>

        <br>Please select the societies you want to join ::
        <br><input type="checkbox" name="society[]" value="Dwani">Dwani
        <br><input type="checkbox" name="society[]" value="Dhun">Dhun
        <br><input type="checkbox" name="society[]" value="Picfie">Picfie
        <br><input type="checkbox" name="society[]" value="Entrepreneurship Lab">Entrepreneurship Lab
        <br><input type="checkbox" name="society[]" value="NSS">NSS<br>

        <br>Address
        <br><textarea name="Address" cols="30" rows="10"></textarea><br>

        <br>Photograph
        <br><input type="file" name="photo"><br>

        <br><input type="reset" value="Reset">&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp
        <input type="submit" value="Submit" onclick="return validate(this.form)">
    </fieldset>    
    </form>
</body>
</html>