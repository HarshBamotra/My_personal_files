 //Harsh Bamotra AC-1216
//Program to implement linked list 

#include <iostream>
using namespace std;

template <class T>
class node
    {
	public:
	T info;
	node *next;
	
	node()
		{
			next=NULL;
		}

	node(T value , node *p=0)
		{
			next=p;
			info=value;
		}	
    };

template <class T>
class LinkedList
    {
	public:
	node<T> *head , *tail;
	LinkedList()
		{
			head=NULL;
			tail=NULL;
		}

	bool isEmpty()
		{
			return (head==NULL);
		}

	void addToHead(T value)
		{
			head=new node<T>(value , head);
			if(tail==NULL)
				tail=head;
		}

	void addToTail(T value)
		{
			if(tail!=NULL)
				{
					tail->next=new node<T>(value);
					tail=tail->next;
				}
			else
				{
					tail=new node<T>(value);
					head=tail;
				}
		}

	void removeFromHead()
		{
			if(head==tail)
				{
					head=NULL;
					tail=NULL;
				}
			else
				head=head->next;
		}

	T removeFromTail()
		{
			T value=tail->info;
			node<T> *temp;
			if(tail==head)
				{
					delete head;
					tail=NULL;
					head=NULL;
				}
			else
				{
					for(temp=head ; temp->next!=tail ; temp=temp->next);
					delete tail;
					tail=temp;
					tail->next=NULL;
				}
			return value;
		}

	void insertAt(T value , int i)
		{
			int j=0;
			node<T> *temp1=head;	
			node<T> *temp2=head;
			if(i<0 | i>len())
				cout << "List position out of bound !!" << endl;
			else if(i==0)
				addToHead(value);
			else	
				{
					while(1)
						{
							if(j==(i-1))
								break;
							temp1=temp1->next;
							j++;
						}
					j=0;
					while(1)
						{
							if(j==i)
								break;
							temp2=temp2->next;
							j++;
						}
					temp1->next=new node<T>(value , temp2);
				}
		}
	
	T itemAt(int i)
		{
			int j=0;
			node<T> *temp=head;
			if(i<0 | i>len())
				cout << "List position out of bound !!" << endl; 
			else
				{	
					while(1)
						{
							if(j==i)
								break;
							temp=temp->next;
							j++;
						}
					return temp->info;
				}
		}
			
	void print()
		{
			node<T> *temp=head;
			while(temp!=NULL)
				{	
					cout << temp->info << " ";
					temp=temp->next;
				}
			cout << endl;
		}	

	T* search(T value)
		{
			node<T> *temp=head;
			while(temp!=NULL)
				{	
					if(temp->info==value)
						 return &(temp->info);
					temp=temp->next;
				}
			return NULL;
		}	

	void concat(LinkedList l)
		{
			tail->next=l.head;
			tail=l.tail;
		}

	void removeFrom(int i)
		{
			int j=1;
			node<T> *temp1=head;	
			node<T> *temp2=head;
			if(i<0)
				cout << "Index out of bound !!" << endl;
			if(i==1)
				removeFromHead();
			else	
				{
					while(1)
						{
							if(j==(i-1))
								break;
							temp1=temp1->next;
							j++;
						}
					j=1;
					while(1)
						{
							if(j==i)
								break;
							temp2=temp2->next;
							j++;
						}
					temp1->next=temp2->next;
				}
		}

	int len()
		{
			int l=0;
			node<T> *temp=head;
			while(temp!=NULL)
				{
					temp=temp->next;
					l++;
				}
			return l;
		}

	void reverse(int le)
    		{
			int j=0;
			node<T> *temp=head;
			le--;
			while(1)
				{
					if(j==le)
						break;
					temp=temp->next;
					j++;
				}
			cout << temp->info << " ";
			if(le>0)
				reverse(le);
    		}

	void deleteOdd()
		{
			int i=1;
			node<int> *temp=head;
			while(temp!=NULL)
				{	
					if(i%2!=0)
						{
							removeFrom(i);	
						}
					i++;
					temp=temp->next;
				}
			
		}
    };
	
void printReverse(node<int> *head)
	{
		if(head==NULL)
			return;
		printReverse(head->next);
		cout << head->info << " ";
	}

int main()
    {
	int el;
	LinkedList <int>l;
	cout << "Enter the elements of linked list ::";
	for(int i=0 ; i<8 ; i++)
		{
			cin >> el;
			l.addToTail(el);
		}
	l.print();
	l.deleteOdd();
	l.print();
	return 0;
    }