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

int main()
    {
	string c="y" , s="y";
	int ch , el , i;
	cout << "Enter the lenght of stack ::";
	cin >> i;
	stack <int>l(i);
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Push en element to the stack" << endl << "2.Pop the stack" << endl;
			cout << "3.Get the top element" << endl << "4.To check if the stack is empty" << endl;
			cout << "5.To check if the stack is full" << endl << "6.To print the stack" << endl;
			cout << "******************************************" << endl << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			switch(ch)
				{
					case 1:
					if(l.isFull())
						cout << "Overflow, Stack is full !!" << endl;
					else 		
						{
							cout << "Enter the element to push ::";
							cin >> el;
							l.push(el);
						}
					break;
					
					case 2:
					if(l.isEmpty())
						cout << "Underflow, Stack is empty !!" << endl;
					else
						cout << "Element poped succesfully ::" << l.pop() << endl;
					break;
		
					case 3:
					cout << "Elememt at the top ::" << l.topElement() << endl;
					break;
			
					case 4:
					if(l.isEmpty())
						cout << "The stack is empty !!" << endl; 
					else 
						cout << "The stack is not empty !!" << endl;  
					break;
			
					case 5:
					if(l.isFull())
						cout << "The stack is full !!" << endl; 
					else 
						cout << "The stack is not full !!" << endl; 
					break;	
			
					case 6:
					l.print();
					break;
					
					default:
					cout << "Please enter a valid input !!" << endl;
				}
			cout << "Do you want to continue (Y/N) ::";
			cin >> c;
		}
	return 0;
    }