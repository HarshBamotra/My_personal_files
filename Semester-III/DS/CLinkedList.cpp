 //Harsh Bamotra AC-1216
//Program to implement circular linked list 

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
class CLinkedList
    {
	private:
	node<T> *head;

	public:
	CLinkedList()
		{
			head=NULL;
		}

	bool isEmpty()
		{
			return (head==NULL);
		}

	void addToFront(T value)		
		{
			if(head==NULL)
				{
					head=new node<T>(value);
					head->next=head;
				}
			else
				{
					node<T> *temp1=new node<T>(value , head);
					node<T> *temp=head;
					while(temp->next!=head)
						{
							temp=temp->next;
						}
					temp->next=temp1;
					head=temp1;
				}
		}

	void addToEnd(T value)		
		{
			if(head==NULL)
				{
					head=new node<T>(value);
					head->next=head;
				}
			else
				{
					node<T> *temp=head;
					while(temp->next!=head)
						{
							temp=temp->next;
						}
					temp->next=new node<T>(value , head);
				}
		}

	T removeFromFront()		
		{
			T value=head->info;
			node<T> *temp=head;
			if(len()==1)
				{
					head=NULL;
				}
			else
				{
					while(temp->next!=head)
						{
							temp=temp->next;
						}
					head=head->next;
					temp->next=head;
				}
			return value;
		}

	T removeFromEnd()
		{
			T value;
			node<T> *temp=head;
			node<T> *temp1=head;
			while(temp->next!=head)
						{
							temp=temp->next;
						}
			while(temp1->next!=temp)
						{
							temp1=temp1->next;
						}
			if(head->next==head)
				{
					value=head->info;
					delete head;
					head=NULL;
				}
			else
				{
					value=temp->info;
					delete temp;
					temp1->next=head;
				}
			return value;
		}

	void insertAfter(T value , T el)		
		{
			int j=0;
			node<T> *temp1=head;	
			node<T> *temp2;
			while(1)
				{
					if(temp1->info==el)
						{
							temp2=temp1->next;
							break;
						}
					temp1=temp1->next;
					j++;
					if(j==len())
						break;
				}
			if(j==len())
				cout << "Element not found to insert after !!" << endl;
			else
				temp1->next=new node<T>(value , temp2);
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
							if(j==i || j==len())
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
			while(temp->next!=head)
				{	
					cout << temp->info << " ";
					temp=temp->next;
				}
			cout << temp->info << endl;
		}	

	T* search(T value)		
		{
			node<T> *temp=head;
			while(temp->next!=head)
				{	
					if(temp->info==value)
						 return &(temp->info);
					temp=temp->next;
				}
			if(temp->info==value)
				return &(temp->info);
			return NULL;
		}	

	void concat(CLinkedList l)		
		{
			if(isEmpty())
				head=l.head;
			else
				{
					node<T> *temp=head;
					while(temp->next!=head)
						{	
							temp=temp->next;
						}
	
					node<T> *temp1=l.head;
					while(temp1->next!=l.head)
						{	
							temp1=temp1->next;
						}
		
					temp->next=l.head;
					temp1->next=head;
				}
		}

	T remove(T el)		
		{
			int j=0;
			T value;
			bool flag=false;
			node<T> *temp=head;
			node<T> *temp1=head;	
			while(1)
				{
					if(temp1->info==el)			
						{
							while(temp->next!=temp1)
								{
									temp=temp->next;
								}
							break;
						}
					temp1=temp1->next;
					j++;
					if(j==len())
						{
							flag=true;
							break;
						}
				}
			if(flag==true)
				{
					cout << "Element not found to remove !!" << endl;
				}
			else if(head->info==el)
				{	
					cout << "Elememt removed succesfully ::";		
					value=removeFromFront();
					return value;
				}
			else
				{
					cout << "Elememt removed succesfully ::";
					value=temp1->info;
					temp->next=temp1->next;
					delete temp1;
					return value;
				}
		}

	int len()		
		{	if(isEmpty())
				return 0;
			else
				{
					int l=1;
					node<T> *temp=head;
					while(temp->next!=head)
						{
							temp=temp->next;
							l++;
						}
					return l;
				}
		}
    };
	


	

int main()
    {
	string c="y" , s="y";
	int ch , el , i;
	CLinkedList <int>l;
	CLinkedList <int>l1;
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Add at front" << endl << "2.Add at end" << endl;
			cout << "3.Remove from front" << endl << "4.Remove from end" << endl;
			cout << "5.Insert after element" << endl << "6.Remove an element" << endl;
			cout << "7.Total nodes" << endl << "8.Search element" << endl;
			cout << "9.Concatenate lists" << endl << "10.Print the list" << endl;
			cout << "11.Get item by position" << endl;
			cout << "******************************************" << endl << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			switch(ch)
				{
					case 1:
					cout << "Enter the element to add ::";
					cin >> el;
					l.addToFront(el);
					break;
					
					case 2:
					cout << "Enter the element to add ::";
					cin >> el;
					l.addToEnd(el);
					break;
		
					case 3:
					if(l.isEmpty())
						cout << "List Empty, No elements to remove !!" << endl;
					else
						cout << "Elememt removed succesfully ::" << l.removeFromFront() << endl;
					break;
			
					case 4:
					if(l.isEmpty())
						cout << "List Empty, No elements to remove !!" << endl;
					else
						cout << "Elememt removed succesfully ::" << l.removeFromEnd() << endl;
					break;
			
					case 5:
					cout << "Enter the element to insert ::";
					cin >> el;
					cout << "Enter the element after which you want to insert ::";
					cin >> i;
					if(l.isEmpty())
						cout << "Element not found to insert after !!" << endl;
					else
						l.insertAfter(el , i);
					break;	
			
					case 6:
					cout << "Enter the element to remove ::";
					cin >> i;
					if(l.isEmpty())
						cout << "List Empty, No elements to remove !!" << endl;
					else
						cout << l.remove(i) << endl;
					break;
			
					case 7:
					cout << "Total number of nodes present ::" << l.len() << endl;
					break;
		
					case 8:
					cout << "Enter the element to search ::";
					cin >> el;
					if(l.isEmpty())
						cout << "List Empty, No elements to search !!" << endl;
					else if(l.search(el)==NULL)
						cout << "Element not found in the list !!" << endl;
					else
						cout << "Element found at address :: " << l.search(el) << endl;
					break;
	
					case 9:
					cout << "Enter the elements of the list::" << endl;
					while(s=="Y" | s=="y")
						{
							cin >> el;
							l1.addToEnd(el);
							cout << "Do you want to enter more (Y/N)::";
							cin >> s;
						}		
					l.concat(l1);
					break;
		
					case 10:
					if(l.isEmpty())
						cout << "List Empty, No elements to print !!" << endl;
					else
						{
							cout << "Linked List ::";
							l.print();
						}
					break;
				
					case 11:
					cout << "Enter the position ::";
					cin >> i;
					cout << "Element at position " << i << " ::" << l.itemAt(i) << endl;
					break;
					
					default:
					cout << "Please enter a valid input !!" << endl;
				}
			cout << "Do you want to continue (Y/N) ::";
			cin >> c;
		}
			
	return 0;
    }