 //Harsh Bamotra AC-1216
//Program to implement queue

#include <iostream>
using namespace std;

template <class T>
class AQueue
    {
	private:
	int n , front , rear;
	T arr[];

	public:
	AQueue(int l)
		{
			front=rear=-1;
			n=l;
			arr[l];
		}
	
	void enQueue(T el)
		{
			if(!isFull())
				{
					if(rear==n-1 || rear==-1)
						{
							arr[0]=el;
							rear=0;
							if(front==-1)
								front=0;
						}
					else
						arr[++rear]=el;
				}
			else
				cout << "Overflow, queue is full !!" << endl;
		}
	
	T deQueue()
		{
			T temp=arr[front];
			if(front==rear)
				front=rear=-1;
			else if(front==n-1)
				front=0;
			else
				front++;
			return temp;
		}
	
	T Front()
		{
			return arr[front];
		}

	bool isFull()
		{
			if((rear==(n-1) && front==0) || rear==front-1)
				return true;
			return false;
		}
	
	bool isEmpty()
		{
			if(front==-1)
				return true;
			return false;
		}

	void Display()
		{
			int i=front;
			while(i!=rear)
				{
					cout << arr[i++] << endl;
					i%=n;
				}
			cout << arr[rear] << endl;
		}
    };
	
int main()
    {
	string c="y" , s="y";
	int ch , el , i;
	cout << "Enter the lenght of queue ::";
	cin >> i;
	AQueue <int>l(i);
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Enqueue the queue" << endl << "2.Dequeue the queue" << endl;
			cout << "3.Get the front element" << endl << "4.To check if the queue is empty" << endl;
			cout << "5.To check if the queue is full" << endl << "6.To print the queue" << endl;
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
					if(l.isFull())
						cout << "The queue is full !!" << endl; 
					else 
						cout << "The queue is not full !!" << endl; 
					break;	
			
					case 6:
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