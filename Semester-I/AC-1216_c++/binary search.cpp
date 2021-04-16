//program for binary search
#include <iostream>
using namespace std;

int main()

{
    int n , i=0 , s , mid , low=0;
    bool flag=false;                                 //declaring variables
    cout << "Enter the number of elements::";
    cin >> n;
    int arr[n] , high=n;
    for(i ; i<n ; i++)
	{
		cout << "Enter the elements in sorted manner::";           //taking array from the user
		cin >> arr[i];
	}
  
    cout << "The array you enetered::";
    for(int i=0 ; i<n ; i++)
	{
		cout << arr[i] << " ";           //printing the intputed array  
	}
    
    cout << endl << "Enter the element you want to search::";
    cin >> s;                                                   //taking the search element 
    while(high>low)
	{
		mid=(low+high)/2;
		if(arr[mid]==s)
			{
				cout << "The element found at index::" << mid;
				flag=true;                                          //searching in the mid index
				break;                                             //printing the index of the element if found 
			} 
		else if(arr[mid]>s)
			{
				high=mid;                                   //searching in the lower part  
			}
		else
			{
				low=mid+1;                   //searching in the upper part of array
			}
	}
    
    if(flag==false)
	{
		cout << "Element not found!!";        //printing the message if element is not in the array
	}
    return 0;
}
		
     