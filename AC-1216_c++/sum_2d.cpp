#include <iostream>
using namespace std;

int main()

{

int arr1[5][3] , arr2[5][3] , arr3[5][3] , row ,col;       //declaring variables and arrays
cout << "Enter the first 2D array::";
for(row=0 ; row<5 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cin >> arr1[row][col];      //taking the first array from the user
			}
	}


cout << "Enter the second 2D array::";
for(row=0 ; row<5 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cin >> arr2[row][col];     //taking the second array from the user
			} 
	}



for(row=0 ; row<5 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				arr3[row][col]=arr1[row][col]+arr2[row][col];     // adding the elements of the array
			}                                                        //and initialising them in the array3
	}



cout << "The array after addition ::" << endl;
for(row=0 ; row<5 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cout << arr3[row][col] << " ";          //printing the third array
			}
		cout << endl;
	}


return 0;
}
 