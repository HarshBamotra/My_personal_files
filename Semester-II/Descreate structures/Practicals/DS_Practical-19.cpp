 //Harsh Bamotra AC-1216
//Program to check whether a given set of vertices forms Euler's path

#include <iostream>
using namespace std;

int main()
    {
	int v;
	int count = 0;
	int flag = 0;
	int sum = 0;
	cout << endl << "Enter the number of vertices : ";
	cin >> v;
	int mat[v][v];
	int arr[v];
	for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
				{
					cout << endl << "Enter the number of edges from " << (char)(i + 97) << " to vertex " << (char)(j + 97) << " : ";
					cin >> mat[i][j];
				}
		}
	cout << endl << "The entered matrix of the graph is : " << endl;
	cout << endl << "  ";
	for (int i = 0; i < v; i++)
		cout << "  " << "(" << (char)(i + 97) << ")";
	cout << endl << endl;

	for (int i = 0; i < v; i++)
		{
			cout << "(" << (char)(i + 97) << ")";
			for (int j = 0; j < v; j++)
				{
					cout << "  " << mat[i][j] << "  ";
				}
			cout << endl << endl;
		}
	for (int i = 0; i < v; i++)
		{
			sum = 0;
			for (int j = 0; j < v; j++)
				{
					sum += mat[i][j];
				}
			arr[i] = sum;
		}
	for (int i = 0; i < v; i++)
		{
			cout << endl << "The out degree of the vertex " << (char)(i + 97) << " is : " << arr[i] << endl;
		}
	for (int i = 0; i < v; i++)
		{
			if ((arr[i] % 2) != 0)
				{
					cout << endl << "No Euler circuit exist." << endl;
					flag = 1;
					break;
				}
		}
	for (int i = 0; i < v; i++)
		{
			if ((arr[i] % 2) != 0)
				{
					count++;
				}
		}
	if (flag == 0)
		cout << endl << "Euler circuit exists." << endl ; 
	if (count == 2)
		cout << endl << "Euler path exists." << endl;
	else
		cout << endl << "No Euler path exist." << endl;
	return 0;
}