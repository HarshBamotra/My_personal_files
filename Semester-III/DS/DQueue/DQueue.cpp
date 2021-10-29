 //Harsh Bamotra AC-1216
//Program to implement doubly ended queue using linked list

#include <iostream>
#include "LinkedList.h"
using namespace std;

template <class T>
class DQueue
    {
	private:
	LinkedList <T>list;
	
	public:
	void addFront(T el)
		{
			list.addToHead(el);
		}
	
	T removeFront()
		{
			return list.removeFromHead();
		}

	void addEnd(T el)
		{
			list.addToTail(el);
		}
	
	T removeEnd()
		{
			return list.removeFromTail();
		}
	
	T Front()
		{
			return list.itemAt(0);
		}

	T End()
		{
			return list.itemAt(list.len()-1);
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
	DQueue <int>l;
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Enqueue the queue from front" << endl << "2.Dequeue the queue from front" << endl;
			cout << "3.Enqueue the queue from end" << endl << "4.Dequeue the queue from end" << endl;
			cout << "5.Get the front element" << endl << "6.Get the end element" << endl;
			cout << "7.To check if the queue is empty" << endl << "8.To print the queue" << endl;
			cout << "******************************************" << endl << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			switch(ch)
				{
					case 1:
					cout << "Enter the element to enqueue ::";
					cin >> el;
					l.addFront(el);
					break;
					
					case 2:
					if(l.isEmpty())
						cout << "Underflow, queue is empty !!" << endl;
					else
						cout << "Element dequeued succesfully ::" << l.removeFront() << endl;
					break;

					case 3:
					cout << "Enter the element to enqueue ::";
					cin >> el;
					l.addEnd(el);
					break;
					
					case 4:
					if(l.isEmpty())
						cout << "Underflow, queue is empty !!" << endl;
					else
						cout << "Element dequeued succesfully ::" << l.removeEnd() << endl;
					break;
		
					case 5:
					if(!l.isEmpty())
						cout << "Elememt at the front ::" << l.Front() << endl;
					else
						cout << "Underflow, queue is empty !!" << endl;
					break;

					case 6:
					if(!l.isEmpty())
						cout << "Elememt at the end ::" << l.End() << endl;
					else
						cout << "Underflow, queue is empty !!" << endl;
					break;
			
					case 7:
					if(l.isEmpty())
						cout << "The queue is empty !!" << endl; 
					else 
						cout << "The queue is not empty !!" << endl;  
					break;
			
					case 8:
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