 //Harsh Bamotra AC-1216
//Program to implement stack using linkedlist

#include <iostream>
#include "LinkedList.h"

template <class T>
class stack
    {
	private:
	LinkedList <T>l;

	public:
	bool IsEmpty()
		{
			return l.isEmpty();
		}

	void push(T el)
		{
			l.addToHead(el);
		}

	T pop()
		{
			return l.removeFromHead();
		}

	T topElement()
		{
			return l.itemAt(0);
		}

	void display()
		{
			l.print();
		}

	int  length()
		{
			return l.len();
		}
    };
	
int main()
    {
	string c="y" , s="y";
	int ch , el;
	stack <int>l;
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Push en element to the stack" << endl << "2.Pop the stack" << endl;
			cout << "3.Get the top element" << endl << "4.To check if the stack is empty" << endl;
			cout << "5.To print the stack" << endl << "6.To print the lenght of the stack" << endl;
			cout << "******************************************" << endl << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			switch(ch)
				{
					case 1:
					cout << "Enter the element to push ::";
					cin >> el;
					l.push(el);
					break;
					
					case 2:
					if(l.IsEmpty())
						cout << "Underflow, Stack is empty !!" << endl;
					else
						cout << "Element poped succesfully ::" << l.pop() << endl;
					break;
		
					case 3:
					if(l.IsEmpty())
						cout << "Underflow, Stack is empty !!" << endl;
					else
						cout << "Elememt at the top ::" << l.topElement() << endl;
					break;
			
					case 4:
					if(l.IsEmpty())
						cout << "The stack is empty !!" << endl; 
					else 
						cout << "The stack is not empty !!" << endl;  
					break;
			
					case 5:
					if(l.IsEmpty())
						cout << "Underflow, Stack is empty !!" << endl;
					else
						l.display();
					break;

					case 6:
					cout << "The lenght of the stack ::" << l.length() << endl;
					break;
					
					default:
					cout << "Please enter a valid input !!" << endl;
				}
			cout << "Do you want to continue (Y/N) ::";
			cin >> c;
		}
	return 0;
    }