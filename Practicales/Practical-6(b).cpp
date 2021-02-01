//program for binary search
#include <iostream>
using namespace std;

void binary_search(int n , int s , int arr[])
    {
	int high=n , low=0 , i=0 , mid;
	bool flag=false;
	while(high>low)
		{
			mid=(high+low)/2;
			if(arr[mid]==s)
				{
					flag=true;
					break;
				}
			else if(s<arr[mid])
				{
					high=mid;
				}
			else
				{
					low=mid+1;
				}
		}
	
	if(flag==false)
		{
			cout << "The element not found !!";
		}
	else
		{
			cout << "The element found at index::" << mid;
		}
    }

int main()

    {
	int n , s;
	cout << "Enter the number of elements::";
	cin >> n;
	int arr[n];
	cout << "Enter the elements in ascending order::";
	for(int i=0 ; i<n ; i++)
		{
			cin >> arr[i];
		}
	cout << "The array you entered::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	cout << endl << "Enter the element you want to search::";
	cin >> s;
	
	binary_search(n , s , arr);
	return 0;
    }	
			
			
