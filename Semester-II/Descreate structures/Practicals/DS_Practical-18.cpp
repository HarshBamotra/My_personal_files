 //Harsh Bamotra AC-1216
//Program to find number of paths of length n between the source and destination

#include <iostream>
using namespace std;

void display(int mat[20][20], int n)
	{
		cout << endl << "  ";
		for (int i = 0; i < n; i++)
			cout << "  " << "(" << (char)(i + 97) << ")";
		cout << endl << endl;
		for (int i = 0; i < n; i++)
			{
				cout << "(" << (char)(i + 97) << ")";
				for (int j = 0; j < n; j++)
					{
						cout << "  " << mat[i][j] << "  ";
					}
				cout << endl << endl;
			}
	}

void product(int mat1[20][20], int v, int len, int source, int dest)
	{
		int mat2[20][20], mat3[20][20];
		for (int i = 0; i < v; i++)
			{
				for (int j = 0; j < v; j++)
					mat2[i][j] = mat1[i][j];
					
			}
		if (len == 1)
			display(mat1, v);
		else
			{
				for (int l = 2; l <= len; l++)
					{
						cout << "\nThe Matrix after multiplication is : \n";
						for (int i = 0; i < v; i++)
							{
								for (int j = 0; j < v; j++)
									{
										mat3[i][j] = 0;
										for (int k = 0; k < v; k++)
											{
												mat3[i][j] += mat1[i][k] * mat2[k][j];
											}
									}
							}
						display(mat3, v);
						for (int i = 0; i < v; i++)
							{
								for (int j = 0; j < v; j++)
									{
										mat2[i][j] = mat3[i][j];
									}
							}
						cout << "\nNumber of paths of length " << len << " between " << char(source) << " and " << char(dest) << " : ";
						source = source - 97;
						dest = dest - 97;
						cout << mat3[source][dest]<<endl;
					}
			}
	}

int main()
    {
	int v;
	int length;
	char source;
	char destination;
	int mat[20][20];
	cout << endl << "Enter the number of vertices : ";
	cin >> v;

	for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
				{
					cout << "\nEnter the number of edges from " << (char)(i + 97) << " to vertex " << (char)(j + 97) << " : ";
					cin >> mat[i][j];
				}
		}
	cout << "\nThe entered matrix of the graph is : " << endl;
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
	cout << endl << "Enter the path length : ";
	cin >> length;
	cout << endl << "Enter the source : ";
	cin >> source;
	cout << endl << "Enter the destination : ";
	cin >> destination;
	product(mat, v, length, source, destination);
	return 0;
}