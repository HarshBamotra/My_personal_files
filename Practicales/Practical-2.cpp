//program to remove duplicates in an array
#include <iostream>
using namespace std;

int main()

{

   int n ,x=0;
   cout << "Enter the number of elements::";
   cin >> n;                                     //taking array from the user
   int arr[n];
   for(int i=0 ;i<n ;i++)
	{
		cout << "Enter the elements::";
		cin >> arr[i];
	}

    cout << "The array you entered::";
    for(int i=0 ;i<n ;i++)
	{
		cout << arr[i] << " ";        //showing the inputed array to users
	}
     for(int i=0 ; i<n ;i++)
	{
		for(int j=i+1 ; j<n ;j++)
			{
				if(arr[i]==arr[j])                           //checking for duplicate elements
					{
						for(int l=j ; l<n ; l++)
							{
								arr[l]=arr[l+1];          //removing the duplicates
							}
						n--;                                     //decreasing the length of the array 
					}
			}
		
	}

    cout << endl << "The array after deleting duplicates::";
    for(int i=0 ;i<n ;i++)
	{
		cout << arr[i] << " ";                          //printing the new updated array
	}
    
    return 0;

}
   
   
    