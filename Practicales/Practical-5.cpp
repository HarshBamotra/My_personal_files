//program to merge two sorted array
#include <iostream>
using namespace std;

int main()

{

    int n1 , n2 , n3;                             //Dclaring variables
    cout << "Enter the number of elements::";
    cin >> n1;
    int arr1[n1];
    for(int i=0 ; i<n1 ; i++)
	{
		cout << "Enter the elements in sorted manner::";           
		cin >> arr1[i];                                   //inputing first array
	}

    cout << "Enter the number of elements::";
    cin >> n2;
    int arr2[n2];
    for(int j=0 ; j<n2 ; j++)
	{
		cout << "Enter the elements in sorted manner::";          //inputing second array
		cin >> arr2[j];
	}
    
    n3=n1+n2;
    int arr3[n3], x=0 , y=0 ,k=0;
    while(x<n1 && y<n2)
	{
		if(arr1[x]<=arr2[y])
			{
				arr3[k++]=arr1[x++];
			}
		else                                        //comparing the elements and
			{                                  //copying them in the third array
				arr3[k++]=arr2[y++];
			}
	}
    while(x<n1)
	{
		arr3[k++]=arr1[x++];
	}
     while(y<n2)                               //copying the remaining elements
	{
		arr3[k++]=arr2[y++];
	}
    
   
    cout << "The third array::";
    for(int p=0; p<n3; p++)
	{
		cout << arr3[p] << " ";      //printing the final merged array
	}

    return 0;
}

    


    