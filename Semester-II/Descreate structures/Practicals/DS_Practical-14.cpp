 //Harsh Bamotra AC-1216
//Program to calculate the value of recurrence relations

#include <iostream>
using namespace std;

int Ta(int n)
	{
		if(n==0)
			return 1;
		else
			return (n+Ta(n-1));
	}

int Tb(int n)
	{
		if(n==0)
			return 1;
		else
			return (n*n + Tb(n-1));
	}

int Tc(int n)
	{
		if(n==1)
			return 1;
		else
			return (n+2*Tc(n/2));
	}

int main()
    {
	int n , c;
	
	cout << "Enter the value of n ::";
	cin >> n;

	cout<<"VALUES OF RECURRENCE RELATIONS :"<<endl<<endl;
    	cout<<"\t 1. T(n)= T(n-1)+n       ,T(0)=1 "<<endl;
    	cout<<"\t 2. T(n)= T(n-1)+n^2     ,T(0)=1 "<<endl;
    	cout<<"\t 3. T(n)= 2*T(n/2)+n     ,T(1)=1 "<<endl;

	cout<<"\nEnter your choice(between 1,2,3) :	";
	cin>>c;
    	if(c==1)
    		{
        		int r=Ta(n);
        		cout<<"\nResult : "<<r<<endl;
    		}

    	else if(c==2)
    		{
        		int r=Tb(n);
        		cout<<"\nResult : "<<r<<endl;
    		}

    	else if(c==3)
    		{
        		int r=Tc(n);
        		cout<<"\nResult : "<<r<<endl;
    		}
	else
		cout << "Wrong input !!";

	return 0;
    }