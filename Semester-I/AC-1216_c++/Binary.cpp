 //Harsh Bamotra 
//Program to convert a binary number into decimal

#include <iostream>
#include <math.h>
using namespace std;

int lenth(long long s)
    {
	int len=0;
	while(s>0)
		{
			s=s/10;
			len++;
		}
	return len;
    }

bool if_binary(long long s)
    {
	bool flag=true;
	long long n=s;
	for(int i=0 ; i<lenth(s) ; i++)
		{
			if(n%10!=1 && n%10!=0)
				{
					flag=false;
					break;
				}
			n=n/10;
		}
	return flag;
    }
	
int bi_dec(long long s)
    {
	int dec=0;
	long long n=s;
	for(int i=0 ; i<lenth(s) ; i++)
		{
			dec+=(n%10)*pow(2 , i);
			n=n/10;
		}
	return dec;
    }
			
int main()
    {
	long long s;
	cout << "Enter the binary number::";
	cin >> s;
	if(if_binary(s))
		{
			cout << "The binary number after conversion::" << bi_dec(s);
		}
	else
		{
			cout << "Wrong Input !! You entered a non-binary number";
		}
	return 0;
    }

	