//program to reverse a number
#include <iostream>
using namespace std;

int main()

{

	int n , mod , rev=0;		//defining variables
	cout << "Enter the number::";
	cin >> n;                       //taking input form the user
	while(n>0)
		{
			mod=n%10;
			n=n/10;
			rev=rev*10+mod;     //reversing the number
		}
							
	cout << "The number after reverse::" << rev; //printing the result

}
			
			