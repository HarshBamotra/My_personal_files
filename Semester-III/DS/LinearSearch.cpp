 //Harsh Bamotra AC-1216
//Program to search an element using linear search

#include <iostream>
using namespace std;

int LinearSearch(int n , int s , int arr[])
	{
		for(int i=0 ; i<n ; i++)
			if(arr[i]==s)
				{
					return i;
					break;
				}
		return -1;
	}
 
int main()
    {
	cout << "********** Linear Search *********" << endl;
	int n , s;
	cout << "Enter the number of elements ::";
	cin >> n;
	
	int arr[n];

	cout << "Enter the elements ::" << endl;
	for(int i=0 ; i<n ; i++)
		cin >> arr[i];
	
	cout << "Enter the search element ::";
	cin >> s;
	cout << "**********************************" << endl;

	cout << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		cout << arr[i] << " ";
	cout << endl;

	int result=LinearSearch(n , s , arr);
	if(result==-1)
		cout << endl << "Element not found in the array !!" << endl;
	else 
		cout << endl << "Element found at index ::" << result;
	return 0;
    }