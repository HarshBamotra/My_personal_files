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