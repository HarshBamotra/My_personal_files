<html>
<head>
    <title>WDD_Practical-1</title>
</head>
<body>
    <h1>Program to print pattern using nested loop</h1>
    <?php 
        function pattern($n){
        for($i=0 ; $i<(2*$n-1) ; $i++)
            echo "*";
        echo "</br>";
        for($i=0 ; $i<$n+1 ; $i++){
            if($i>$n-2)
                {
                    $p=$i-1;
                    $s=$n-$p+($n%$i);
                }   
            else
                {
                    $p=$n-$i-1;
                    $s=$n-$p+$i;
                }  
            for($j=0 ; $j<$p ; $j++)
                echo "*";
            for($k=0 ; $k<$s ; $k++)
                echo "&nbsp;&nbsp;";
            for($j=0 ; $j<$p ; $j++)
                echo "*";
            echo "</br>";
        }
        for($i=0 ; $i<(2*$n-1) ; $i++)
            echo "*";
        echo "</br>";
    }
    pattern(4);
    ?>
</body>
</html>
