 //Harsh Bamotra AC-1216
//Program to implement queue

#include <iostream>
#include "CLinkedList.h"
using namespace std;

template <class T>
class LQueue
    {
	private:
	CLinkedList <T>list;
	
	public:
	void enQueue(T el)
		{
			list.addToEnd(el);
		}
	
	T deQueue()
		{
			return list.removeFromFront();
		}
	
	T Front()
		{
			return list.itemAt(0);
		}
	
	bool isEmpty()
		{
			return list.isEmpty();
		}

	void Display()
		{
			list.print();
		}
    };
	
int main()
    {
	string c="y" , s="y";
	int ch , el;
	LQueue <int>l;
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Enqueue the queue" << endl << "2.Dequeue the queue" << endl;
			cout << "3.Get the front element" << endl << "4.To check if the queue is empty" << endl;
			cout << "5.To print the queue" << endl;
			cout << "******************************************" << endl << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			switch(ch)
				{
					case 1:
					cout << "Enter the element to enqueue ::";
					cin >> el;
					l.enQueue(el);
					break;
					
					case 2:
					if(l.isEmpty())
						cout << "Underflow, queue is empty !!" << endl;
					else
						cout << "Element dequeued succesfully ::" << l.deQueue() << endl;
					break;
		
					case 3:
					if(!l.isEmpty())
						cout << "Elememt at the front ::" << l.Front() << endl;
					else
						cout << "Underflow, queue is empty !!" << endl;
					break;
			
					case 4:
					if(l.isEmpty())
						cout << "The queue is empty !!" << endl; 
					else 
						cout << "The queue is not empty !!" << endl;  
					break;
			
					case 5:
					if(!l.isEmpty())
						l.Display();
					else
						cout << "Underflow, queue is empty nothing to display !!" << endl;
					break;
					
					default:
					cout << "Please enter a valid input !!" << endl;
					
				}
			cout << "Do you want to continue (Y/N) ::";
			cin >> c;
		}
	return 0;
    }