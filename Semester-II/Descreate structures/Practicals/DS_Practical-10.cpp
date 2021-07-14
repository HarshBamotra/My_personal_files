 //Harsh Bamotra AC-1216
//Program to generate permutations of a given set of digit

#include <iostream>
using namespace std;

int main()
    {
	int n;
	cout << "Enter the lenght of the set ::";
	cin >> n;
	
	int arr[n];

	cout << "Enter the set elements ::" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cin >> arr[i];
		}
	
	cout << "The set you entered ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	
	cout << endl << "Permutations with repetetion ::" << endl;
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)
			cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;

	cout << endl << endl << "Permutations without repetetion ::" << endl;
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)
			{
				if(i!=j)
					cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;	
			}
	return 0;
    }