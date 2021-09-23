 //Harsh Bamotra AC-1216
//Program to sort an array using selection sort

#include <iostream>
using namespace std;

void swap(int *x , int *y)
    {
	int temp=*x;
	*x=*y;
	*y=temp;
	
    }

void SelectionSort(int arr[] , int n)
    {
	int temp , min;
	for(int i=0 ; i<n-1 ; i++)
		{
			min=i;
			for(int j=i+1 ; j<n ; j++)
				{
					if(arr[j]<arr[min])
						min=j;
				}
			swap(&arr[i] , &arr[min]);
		}
    }


int main()
   {
	int n;
	cout << "Enter the number of elements ::";
	cin >> n;
	int arr[n];

	cout << "Enter the elements ::" << endl;
	for(int i=0 ; i<n ; i++)
		cin >> arr[i];

	cout << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		cout << arr[i] << " ";

	SelectionSort(arr , n);
	cout << endl << "The array after sorting ::";
	for(int i=0 ; i<n ; i++)
		cout << arr[i] << " ";
	
	return 0;
   }