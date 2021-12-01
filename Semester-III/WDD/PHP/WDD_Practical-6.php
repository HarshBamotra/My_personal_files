<?php

$connection=mysqli_connect("localhost","root","harsh","db");
$query="select * from Students;";
$result=mysqli_query($connection,$query);

?>

<html>
<head>
    <title>Students table </title>
    <style>
        table , th , td{
            border: 2px solid black;
            border-collapse: collapse;
            background: lightpink;
        }

        th , td{
            padding : 10px;
        }

        h1{
            color : purple;
            padding-left : 40%;
        }
    </style>
</head>
<body>
<h1>Students details</h1><br>
<table>
    <tr>
        <th>First Name</th>
        <th>Last Name</th>
        <th>Roll No.</th>
        <th>Age</th>
        <th>Email</th>
        <th>Course</th>
        <th>Gender</th>
        <th>Societies</th>
        <th>Address</th>
    </tr>

    <?php
    while($row = mysqli_fetch_assoc($result))
        { ?>
                <tr>
                    <td><?php echo $row["Fname"] ?></td>
                    <td><?php echo $row["Lname"] ?></td>
                    <td><?php echo $row["RollNo"] ?></td>
                    <td><?php echo $row["Age"] ?></td>
                    <td><?php echo $row["Email"] ?></td>
                    <td><?php echo $row["Course"] ?></td>
                    <td><?php echo $row["Gender"] ?></td>
                    <td><?php echo $row["Societies"] ?></td>
                    <td><?php echo $row["Filename"] ?></td>
                </tr>
    <?php } ?>
</table>
</body>
</html>