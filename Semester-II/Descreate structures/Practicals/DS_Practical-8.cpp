 //Harsh Bamotra AC-1216
//Program for bubble sort

#include <iostream>
using namespace std;

int main()
    {
	int n , temp;
	cout << "Enter the number of elements ::";
	cin >> n;
	int arr[n];
	cout << "Enter the array elements ::" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cin >> arr[i];
		}
	cout << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	for(int i=0 ; i<n-1 ; i++)
		for(int j=0 ; j<n-i-1 ; j++)
			{
				if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
			}
	cout << endl << "The array after sorting ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
    }
	