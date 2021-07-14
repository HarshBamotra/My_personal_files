 //Harsh Bamotra AC-1216
//Program to sort an array using insertion sort

#include <iostream>
using namespace std;

void InsertionSort(int arr[] , int com[] , int l)
	{
		int key;
		for(int i=1 ; i<l ; i++)
			{
				int count=0;
				key=arr[i];
				int j=i-1;
				while(j>=0 && arr[j]>key)
					{
						arr[j+1]=arr[j];
						j--;
						count++;
					}
				com[i-1]=count;
				arr[j+1]=key;
			}
	}
							
int main()
    {
	int n;
	cout << "Enter the lenth of the array ::";
	cin >> n;
	int arr[n] , com[n-1];
	cout << "Enter the elements ::";
	for(int i=0 ; i<n ; i++)
		{
			cin >> arr[i];
		}
	cout << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	cout << endl;
	InsertionSort(arr , com , n);
	for(int i=0 ; i<n-1 ; i++)
		{
			cout << "Total comparisons in pass " << i+1 << " ::" << com[i] << endl;
		}
	cout << "The array after sorting ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	return 0;
    } 