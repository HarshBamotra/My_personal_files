//program to check if a number is palindrome 
#include <iostream>
using namespace std;

int main()

{

	int n , n1 , mod , rev=0;		//defining variables
	cout << "Enter the number::";
	cin >> n;				//taking input form the user
	n1=n;                       
	while(n>0)
		{
			mod=n%10;
			n=n/10;
			rev=rev*10+mod;     //reversing the number
		}
	cout << "The number after reveresing::" << rev << endl;
							
	if(rev==n1)
		{
			cout << "The number is a palindrome !!";
		}
	else									//checking if the inputted number
		{							       //is same as the reversed 
			cout << "The number is not a palindrome !!";	      //and printing the final result
		}

	return 0;

}
			
			