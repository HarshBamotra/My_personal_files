 //Harsh Bamotra AC-1216
//Program to find the P and C using recursion

#include <iostream>
using namespace std;

int fact(int n)
	{
		if(n==0 || n==1)
			return 1;
		else
			return n*fact(n-1);
	}

int main()
    {
	int n , r , c , nCr , nPr;
	cout << "Enter the value of n ::";	
	cin >> n;
	cout << "Enter the value of r ::";
	cin >> r;
	while(r>n)
		{
			cout << "Error : r cannot be greater then n" << endl;
			cout << "Please enter a valid value of r ::";	
			cin >> r;
		}

	nCr=(fact(n))/(fact(r)*fact(n-r));
	nPr=(fact(n))/(fact(n-r));

	cout << "******** Menu ********" << endl;
	cout << "1. nCr" << endl;
	cout << "2. nPr" << endl;
	cout << "**********************" << endl;
	cout << "Enter your choice ::";
	cin >> c;

	if(c==1)
		cout << n << "C" << r << " =" << nCr << endl;
	else 
		cout << n << "P" << r << " =" << nPr << endl;	
	
	return 0;
    }