 //program to print the fibonaaci series upto n terms using recursion
//Harsh Bamotra AC-1216

#include <iostream>
using namespace std;

int fibo(int n)                                     //defining function fibo
    {
	
	if(n==0 || n==1)                       
		{
			return n;
		}
	else
		{
			return fibo(n-1)+fibo(n-2);         //recalling the function again
		}
	}

int main()
    {
	int n;
	cout << "Enter the number of terms::";
	cin >> n;
	if(n<0)
		{                                                                       //checking for exeption
			cout << "Wrong Input !! Please enter a positive number !!";
		}
	else
		{
			cout << "The fibonacci series upto " << n << "::";
			for(int i=0 ; i<n ; i++)
				{
					cout << endl << fibo(i);                 //printing the final result
				} 
		}
	return 0;
    }