 //Harsh Bamotra AC-1216
//Program to create a RELATION class and different functions

#include <iostream>
using namespace std;

class RELATION
    {
	private:
	int n , arr1[20] , arr[20][20];

	public:
	
	void GetData(int a)
		{	
			int e;
			n=a;
			cout << "Enter the set elements ::" << endl;
			for(int i=0 ; i<n ; i++)
				{
					cin >> arr1[i];
				}
			cout << "Enter the relation in matrix notation ::" << endl;
			for(int i=0 ; i<n ; i++)
				for(int j=0 ; j<n ; j++)
					{
						cout << "Enter the relation value for (" << arr1[i] << "," << arr1[j] << ") ::"; 
						cin >> e;
						while(e!=1 && e!=0)
							{
								cout << "Wrong Input !!" << endl;
								cout << "Enter the relation value for (" << arr1[i] << "," << arr1[j] << ") ::"; 
								cin >> e;
							}
						arr[i][j]=e;
					}
		}

	void Display()
		{
			cout << "   ";
			for(int i=0 ; i<n ; i++)
				{
					cout << arr1[i] << " ";
				}
			cout << endl;
			for(int i=0 ; i<n ; i++)
				{
					cout << endl;
					cout << arr1[i] << "  ";
					for(int j=0 ; j<n ; j++)
						{
							cout << arr[i][j] << " ";
						}
				}
		}
	
	bool Reflexive()
		{
			for(int i=0 ; i<n ; i++)
				if(arr[i][i]!=1)
					{
						return false;
						break;
					}
			return true;
		}
	
	bool Symmetric()
		{
			for(int i=0 ; i<n ; i++)
				for(int j=0 ; j<n ; j++)
						if(arr[i][j]!=arr[j][i])
								return false;
			return true;
		}

	bool AntiSymmetric()
		{
			for(int i=0 ; i<n ; i++)
				for(int j=0 ; j<n ; j++)
						if(i!=j)
							if(arr[i][j]==1 && arr[j][i]==1)
								return false;
			return true;
		}

	bool Transitive()
		{
			for(int i=0 ; i<n ; i++)
				for(int j=0 ; j<n ; j++)
					for(int k=0 ; k<n ; k++)
						{
							if(arr[i][j]==1 && arr[j][k]==1)
								if(arr[i][k]!=1)
									return false;
						}
			return true;
		}
    };
		

int main()
    {
	int n;
	cout << "Enter the size ::";
	cin >> n;

	RELATION obj;
	obj.GetData(n);
	cout << "The relation your entered ::" << endl;
	obj.Display();

	
	if(obj.Reflexive())
		cout << endl << "The relation you entered is reflexive !!" << endl;
	else
		cout << "The relation you entered is not reflexive !!" << endl << endl;

	if(obj.Symmetric())
		cout << "The relation you entered is symmetric !!" << endl;
	else
		cout << "The relation you entered is not symmetric !!" << endl << endl;

	if(obj.AntiSymmetric())
		cout << "The relation you entered is antiSymmetric !!" << endl;
	else
		cout << "The relation you entered is antiSymmetric !!" << endl << endl;

	if(obj.Transitive())
		cout << "The relation you entered is transitive !!" << endl;
	else
		cout << "The relation you entered is not transitive !!" << endl;

	return 0;
    }