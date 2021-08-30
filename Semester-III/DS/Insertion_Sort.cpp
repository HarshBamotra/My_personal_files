 //Harsh Bamotra AC-1216
//Program to sort an array using insertion sort

#include <iostream>
using namespace std;

void InsertionSort(int n , int arr[])
	{
		int key;
		for(int i=1 ; i<n ; i++)
			{
				int j=i-1;
				key = arr[i];
				while(j>=0 && arr[j]>key)
					{
						arr[j+1]=arr[j];
						j--;
					}
				arr[j+1]=key;
			}
	}

int main()
    {
	int n;
	cout << "Enter the number of elemets ::";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements ::" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cin >> arr[i];
		}

	cout << endl << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}

	InsertionSort(n , arr);
	
	cout << endl << "The array after sorting ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	
	return 0;
    }