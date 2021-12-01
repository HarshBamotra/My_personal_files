<?php
$colors=array("green" , "red" , "blue" , "black" , "pink" , "yellow" , "white" , "orange" , "purple" , "golden");
$n=rand(0 , 9);
?>


<html>
    <head>
        <title> Color Changing page</title>
        <style>
            #division{
                background-color: <?php echo $colors[$n]?>;
                padding: 30px;
            }
        </style>
    </head>
    <body>
        <div id="division">
            <h1>This is a division !!</h1>
        </div>
    </body>
</html>

