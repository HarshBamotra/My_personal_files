#include <iostream>
using namespace std;

int main()

{
    int arr[5] , num , min ,max;
	for(int i=0 ; i<5 ; i++)
		{	
			cout << "Enter the number::";
			cin >> num;
			arr[i]=num;
		}
	cout << "The inputed array::";
	for(int i=0 ; i<5 ; i++)
		{
			cout << arr[i] << " ";
		}
	cout << endl;
	max=arr[0];
	min=arr[0];
	for(int i=0 ; i<5 ; i++)
		{
			if(max<arr[i])
				{
					max=arr[i];
				}
			if(min>arr[i])
				{
					min=arr[i];
				}
		}
	cout << "The largest element is::" << max << endl;
	cout << "The smallest element is::" << min;
	return 0;

}
