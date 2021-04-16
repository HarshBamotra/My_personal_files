//program to calculate GCD of two numbers

#include <iostream>
using namespace std;

int gcd(int n1 , int n2)         //defining function
    {
	int gc;
	for(int i=1 ; i<=n1 && i<=n2 ; i++)     
		{
			if(n1%i==0 && n2%i==0)   //checking for the comman factors
				{
					gc=i;       //storing the comman factors in gc
				}
		}
	return gc;       //returning gcd of the numbers
    }

int main()

    {
	int n1 , n2 ;
	cout << "Enter the first number::";
	cin >> n1;                                
	cout << "Enter the second number::";                                  //taking the numbers from the user
	cin >> n2;                               
	cout << "The GCD of the numbers you entered::" << gcd(n1 , n2);       //printing the final result
	return 0;
    }