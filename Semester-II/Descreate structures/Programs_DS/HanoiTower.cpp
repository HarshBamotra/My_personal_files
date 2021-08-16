// Harsh Bamotra AC-1216 
// Program to solve tower of hanoi using recursion
#include <iostream>
using namespace std;
 
void Hanoi(int n, char s, char d, char a)
     { 
          if (n == 1) 
                   { 
                       cout << "Move disk 1 from rod " << s                        <<  " to rod " << d <<endl; 
                       return; 
                   } 
          Hanoi(n - 1, s , a , d); 
          cout << "Move disk " << n << " from rod "              << s << " to rod " << d << endl; 

         Hanoi(n - 1, a , d , s); 
} 
 
int main() 
{ 
    int n;
    cout << "Enter the number of disks ::";
    cin >>n;
    cout << "Instructions to solve Hanoi tower::" << endl;
    Hanoi(n, 'S' , 'D', 'A');
    return 0; 
} 