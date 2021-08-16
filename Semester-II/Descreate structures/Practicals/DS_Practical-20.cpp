 //Harsh Bamotra AC-1216
//Program to find the number of leaf nodes

#include <iostream>
using namespace std;

//function to calculate the number of leaf nodes
int Nodes(int m , int i)
	{
		int l;
		l=i*(m-1)+1;
		return l;
	}
		
int main()
    {
	int m , i , l;
	cout << "Enter the maximum number of branches ::";
	cin >> m;        
	cout << "Enter the number of internal vertices ::";
	cin >> i;

	cout << "Total number of leaf nodes ::" << Nodes(m , i);
	return 0;
    }