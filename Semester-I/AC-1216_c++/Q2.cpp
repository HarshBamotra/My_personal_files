#include <iostream>
using namespace std;

const int m=3;
const int n=2;

void setArrData(int arr[m][n])
    {
	for(int i=0 ; i<m ; i++)
		for(int j=0 ; j<n ; j++)
			{
				cout << "Enter the element ::";
				cin >> arr[i][j];
			}
    }

void printArrData(int arr[m][n])
    {
	cout << "The array your entered ::" << endl;
	for(int i=0 ; i<m ; i++)
		for(int j=0 ; j<n ; j++)
			{
				cout << arr[i][j];
			}
    }

float getAverage(int row , int col , int arr[m][n])
    {
	int sum=0;
	float avrg;
	for(int i=0 ; i<row ; i++)
		for(int j=0 ; j<col ; j++)
			{
				sum+=arr[i][j];
			}
	avrg=sum/row*col;
	return avrg;
    }

int findMax(int row , int col , int arr[m][n])
    {
	int maxe=0;
	for(int i=0 ; i<row ; i++)
		for(int j=0 ; j<col ; j++)
			{
				if(arr[i][j]>maxe)
					{
						maxe=arr[i][j];
					}
			}
	return maxe;
    }
	


int main()
    {
	
	int arr[m][n] , maxv;
	float a;
	
	setArrData(
	

	return 0;
    }