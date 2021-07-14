 //Harsh Bamotra AC-1216
//Program to store a  function and then evaluate the polynomial

#include <iostream>
#include <math.h>
using namespace std;

int Poly(int l , int n , int arr[])
	{					//function to evaluate result
		int val=0;
		for(int i=0 ; i<l ; i++)
			{
				val+=arr[i]*pow(n , i);
			}
		return val;
	}

void display(int d , int arr[])
	{	
		cout << "f(x)=";				//function to display the polynomial
		for(int i=2 ; i<d ; i++)
			{
				cout << arr[d-i+1] << "x^" << (d-i+1);
				if(arr[d-i]>=0)
					cout << "+";
			}
		cout << arr[1] << "x+"; 
		cout << arr[0];
	}

int main()
    {
	int d , n;
	cout << "Enter the highest degree of the function ::";
	cin >> d;
	d++;

	int arr[d];
	for(int i=0 ; i<d ; i++)
		{
			cout << "Enter the cofficeint of x^" << i << " ::";
			cin >> arr[i];
		}

	cout << "The function you entered ::";
	display(d , arr);

	cout << endl << "Enter the value of x ::";
	cin >> n;

	cout << endl << "************ Final Result ************" << endl;
	cout << "f(" << n << ")=";
	for(int i=2 ; i<d ; i++)
			{
				cout << arr[d-i+1] << "(" << n << ")^" << (d-i+1);
				if(arr[d-i]>=0)
					cout << "+";
			}
		cout << arr[1] << "(" << n << ")^" << "+"; 
		cout << arr[0] << "=" << Poly(d , n , arr);
	return 0;
    }