 //Harsh Bamotra AC-1216
//Program to implement stack using array

#include <iostream>
using namespace std;

template <class T>
class stack
    {
	private:
	int l , top;
	T arr[100];

	public:
	stack(int n)
		{
			top=-1;
			l=n;
			arr[n];
		}

	bool isEmpty()
		{
			if(top==-1)
				return true;
			return false;
		}

	bool isFull()
		{	
			if(top==l-1)
				return true;
			return false;
		}
		
	void push(T value)
		{
			arr[++top]=value;
		}
	
	T pop()
		{
			T value=arr[top--];
			return value;
		}

	T topElement()
		{
			return arr[top];
		}
	
	void print()
		{
			cout << arr[top] << "-->Top" << endl;
			for(int i=1 ; i<top+1 ; i++)
				{
					cout << arr[top-i] << endl;
				}
		}
    };