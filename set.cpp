 //Program to create a set class
//Harsh Bamotra AC-1216

#include <iostream>
using namespace std;

class Set
    {
	private:
	int n , arr[20];
	
	public:
	Set(int x)
		{
			n=x;
		}
	void create()
		{
			cout << "Enter the numbers of elements in the set ::";
			cin >> n;
			cout << "Enter the elements of the sets ::" << endl;
			for(int i=0 ; i<n ; i++)
				{
					cin >> arr[i];
				}
			cout << "Set created succesfully !!";
		}
	
	void display()
		{
			cout << "The set you entered :: {";
			for(int i=0 ; i<n ; i++)
				{
					cout << arr[i] << ",";
				}
			cout << "}";
		}

	Set subset(int l , int s)
		{
			Set temp(l);
			for(int i=0 ; i<l ; i++)
				{
					temp.arr[i]=arr[s+i];
				}
			return temp;
		}
	Set union(Set s1 , Set s2)
		{
			int l1=s1.n;
			int l2=s2.n;
			Set temp(l1+l2);
			for(int i=0 ; i<l1 ; i++)
				{
					temp.arr[i]=s1.arr[i];
				}
			for(int i=0 ; i<l2 ; i++)
				{
					temp.arr[l1+i]=s2.arr[i];
				}
			return temp;
		}
	Set inter(Set s1 , Set s2)
		{
			int l1=s1.n;
			int l2=s2.n;
			if(l1<l2)
				{
					Set temp(l1);
				}
			else
				{
					Set temp(l2);
				}
			for(int i=0 ; i<l1 ; i++)
				for(int j=0 ; i<l2 ; j++)
					{
						if(s1.arr[i]==s1.arr[j])
							{
								temp.arr[i]=s1.arr[i];
							}
					}
			return temp;
		}
	};
			
				
			

int main()
    {
	return 0;
    }