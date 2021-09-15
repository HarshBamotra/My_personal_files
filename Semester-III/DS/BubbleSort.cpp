 //Harsh Bamotra AC-1216
//Program to sort an array using bubble sort

#include <iostream>
using namespace std;

template <class T>
void BubbleSort(int l , T arr[])
    {
	int temp;
	for(int i=0 ; i<l-1 ; i++)
		for(int j=0 ; j<l-i-1 ; j++)
			{
				if(arr[j]>arr[j+1])
					{	
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
			}
    }

int main()
   {
	int n;

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

	BubbleSort<int>(n , arr);
	cout << endl << "The array after sorting ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	return 0;
   }