//program to reverse a two digit number
//Harsh Bamotra

#include <iostream>
using namespace std;

int rev(int x)
	{
		int y , z;
		y=x%10;
		z=x/10;
		return y*10+z;
	}

int main()
	{
		int num;
		cout << "Enter a two digit number::";
		cin >> num;
		if(num>99)
			{
				cout << "Wrong Input !! Ek bari mai samajh ni ata kya ??";
			}
		else
			{
				cout << "Number after reversing::" << rev(num);
			}
		return 0;
	}