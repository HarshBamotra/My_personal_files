 //Harsh Bamotra AC-1216
//Program for binary search using rescursion

#include <iostream>
using namespace std;

//defining function for binary search  
int binary(int s , int high , int low , int arr[])
    {
	if(high>=1)   //checking for empty array
		{
			
			int mid=low+(high-1)/2;
			if(arr[mid]==s)             //searching in the mid index
				{		   //and if found then returning the index
					return mid; 
				}
			else if(arr[mid]>s)          //checking in the lower part 
				{                   //of the array

					return binary(s , mid-1 , low , arr );
				}

			else                      //checking in the upper part
				{                //of the array

					return binary(s , high , mid+1 , arr);
				}
		}

	return -1;     //returning -1 to check for exception
    }

int main()

    	{
<<<<<<< HEAD
		int n , s;                               //defining variables
		cout << "Enter the number of elements::";
		cin >> n;                        //taking number of elements
		int arr[n];
		cout << "Enter the elements in ascending order::" << endl;
		for(int i=0 ; i<n ; i++)
			{
				cin >> arr[i];    //inisializing the elements in the array
			}
		cout << "The array you entered::";
		for(int i=0 ; i<n ; i++)
			{
				cout << arr[i] << " ";   //printing the array
			}
		cout << endl << "Enter the element you want to search::";
		cin >> s;                              //taking the search element
		int r=binary(s , n-1 , 0 , arr);
		if(r==-1)
			{
				cout << "Element not found !!";
			}
		else                                    //printing the final result
			{
				cout << "Element found at index::" << r;
			}
=======
		cout << "********** Binary Search *********" << endl;
		int n , s;                               
		cout << "Enter the number of elements::";
		cin >> n;                        
		int arr[n];

		cout << "Enter the elements in ascending order::" << endl;
		for(int i=0 ; i<n ; i++)
			cin >> arr[i]; 
   
		cout << "The array you entered::";
		for(int i=0 ; i<n ; i++)
			cout << arr[i] << " ";
		cout << endl << "**********************************" << endl;

		cout << "Enter the element you want to search::";
		cin >> s; 
                             
		int r=binary(s , n-1 , 0 , arr);
		if(r==-1)
			cout << "Element not found !!";
		else                                    
			cout << "Element found at index::" << r;

>>>>>>> 4d317ef8333281ba4d51c94cde6603015ba7eaf0
		return 0;
    }
	
	 