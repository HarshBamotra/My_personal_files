<?php
    $n=$_GET['val'];
    function isPrime($n)
        {
            if($n<=0)
                return -1;
            else if($n==2 || $n==3)
                return true;
            else
                for($i=3 ; $i<(floor($n/2)+1) ; $i++)
                    {
                        if($n%$i==0)
                            {
                                return false;
                                break;
                            }
                        else   
                            return true;
                    }
        }

    function fibo($n)                                    
        {
        
            if($n==0 || $n==1)                       
                return $n;
            else
                return fibo($n-1)+fibo($n-2);       
        }
    
    function fact($n)
        {
            if($n==0 || $n==1)
                return $n;
            else
                return $n*fact($n-1);
        }
    
    if(isPrime($n))
        {
            echo "Fibonacci series ::";
            for($i=0 ; $i<$n ; $i++)
                {
                    echo fibo($i);
                    echo " ";
                }   
        }
    else 
        {
            echo "Factorial ::";
            echo fact($n);
        }    
    
?>