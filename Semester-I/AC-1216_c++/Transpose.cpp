#include <iostream>
using namespace std;

int main()

{
    int arr[3][2] , arr1[2][3], row , col;
    cout << "Enter the array::";
    for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<2 ; col++)
			{
				cin >> arr[row][col];
			}
	}
    
    cout << "The array you entered::" << endl;
    for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<2 ; col++)
			{
				cout << arr[row][col] << " ";
			}
		cout << endl;
	}
    
    for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<2 ; col++)
			{
				arr1[col][row]=arr[row][col];
			}
	}

    cout << "The array after transpose::" << endl;
    for(row=0 ; row<2 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cout << arr1[row][col] << " ";
			}
		cout << endl;
	}
    return 0;
}


