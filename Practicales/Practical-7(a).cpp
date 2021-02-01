 //Harsh Bamotra AC-1216
//Program to calculate GCD of two numbers using recursion

#include <iostream>
using namespace std;

//defining fuction to calculate GCD
int recur_GCD(int n1 , int n2)
    {
	if(n1==0 || n2==0)         //checking if one of the number is 0
		{
			return 0;
		}
	else if(n1==n2)            //if n1 is equal to n2 exit case 
		{
			return n1;
		}
	else if(n1>n2)               //checking if n1 is greater than n2
		{
			return recur_GCD(n1-n2 , n2);
		}
	else                          //if n2 is greater than n1
		{
			return recur_GCD(n1 , n2-n1);
		}
    }

int main()
    {
	cout << "***** Calculate GCD of two numbers *****" << endl;
	int n1 , n2;                              //defining variables
	cout << "Enter the first number::";
	cin >> n1;                              //taking first number
	cout << "Enter the second number::";
	cin >> n2;                             //taking second number

	cout << "The GCD of the two number::" << recur_GCD(n1 , n2);   //printing the final result
	return 0;
    }