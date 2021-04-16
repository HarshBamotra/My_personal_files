//Practice program to convert a 2D array into a 1D array

#include <iostream>
using namespace std;

int main()
    {
	int row , col;
	cout << "Enter the number of rows ::";
	cin >> row;
	cout << "Enter the numbers of columns ::";
	cin >> col;
	int arr[row][col] , arr1[row*col];
	cout << "****** Enter the elements of the array ******" << endl;
	for(int i=0 ; i<row ; i++)
		{
			for(int j=0 ; j<col ; j++)
				{
					cout << "Enter the element at index [" << i << "][" << j << "]"; 
					cin >> arr[i][j];
				}
		}
	cout << endl << "The array you entered ::";
	for(int i=0 ; i<row ; i++)
		{
			cout << endl;
			for(int j=0 ; j<col ; j++)
				{
					cout << arr[i][j] << " ";
				}
		}
	int count=0;
	for(int i=0 ; i<row ; i++)
		{
			for(int j=0 ; j<col ; j++)
				{
					arr1[count++]=arr[i][j];
				}
		}
	cout << endl << "The array after conversion ::";
	for(int i=0 ; i<row*col ; i++)
		{
			cout << arr1[i] << " ";
		}

	return 0;
   }

	
	