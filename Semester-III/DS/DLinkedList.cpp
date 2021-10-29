 //Harsh Bamotra AC-1216
//Program to implement doubly linked list 

#include <iostream>
using namespace std;

template <class T>
class node
    {
	public:
	T info;
	node *next , *prev;
	
	node()
		{
			next=NULL;
			prev=NULL;
		}

	node(T value  , node *n=0 , node *p=0)
		{
			next=n;
			prev=p;
			info=value;
		}	
    };

template <class T>
class DLinkedList
    {
	protected:
	node<T> *head , *tail;

	public:
	DLinkedList()
		{
			head=NULL;
			tail=NULL;
		}

	bool isEmpty()		//not required
		{
			return (head==NULL);
		}

	void addToHead(T value)		//done
		{
			if(head!=NULL)
				{
					head->prev=new node<T>(value , head , NULL);
					head=head->prev;
				}
			else
				{
					head=new node<T>(value , head , NULL);
					tail=head;
				}
		}

	void addToTail(T value)	 	//done
		{
			if(tail!=NULL)
				{
					tail->next=new node<T>(value , NULL , tail);
					tail=tail->next;
				}
			else
				{
					tail=new node<T>(value);
					head=tail;
				}
		}

	T removeFromHead()		//done
		{
			T value=head->info;
			node<T> *temp=head;
			if(head==tail)
				{
					head=NULL;
					tail=NULL;
				}
			else
				{
					head=head->next;
					head->prev=NULL;
				}
				
			delete temp;
			return value;
		}

	T removeFromTail()			//done
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
					tail=tail->prev;
					tail->next=NULL;
				}
			return value;
		}

	void insertAt(T value , int i)		//done
		{
			int j=0;
			node<T> *temp1=head;	
			node<T> *temp2=head;
			node<T> *temp3;
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
					temp3=new node<T>(value , temp2 , temp1);
					temp1->next=temp3;
					temp2->prev=temp3;
				}
		}
	
	T itemAt(int i)  //not required
		{
			int j=0;
			node<T> *temp=head;
			if(i<0 || i>len())
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
			
	void print()   //not required
		{
			node<T> *temp=head;
			while(temp!=NULL)
				{	
					cout << temp->info << " ";
					temp=temp->next;
				}
			cout << endl;
		}	

	T* search(T value)	//not required
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

	void concat(DLinkedList l)	//done
		{
			tail->next=l.head;
			l.head->prev=tail;
			tail=l.tail;
		}

	T removeFrom(int i)		//done
		{
			int j=0;
			T value;
			node<T> *temp1=head;	
			node<T> *temp2=head;
			if(i<0 || i>len())
				cout << "List position out of bound !!" << endl;
			else if(i==0)
				return removeFromHead();
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
					value=temp2->info;
					temp1->next=temp2->next;
					temp2->next=temp1;
					delete temp2;
					return value;
				}
		}

	int len()	//not required
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
    };
	


	

int main()
    {
	string c="y" , s="y";
	int ch , el , i;
	DLinkedList <int>l;
	DLinkedList <int>l1;
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Add at head" << endl << "2.Add at tail" << endl;
			cout << "3.Remove from head" << endl << "4.Remove from tail" << endl;
			cout << "5.Insert at position" << endl << "6.Remove from position" << endl;
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
					l.addToHead(el);
					break;
					
					case 2:
					cout << "Enter the element to add ::";
					cin >> el;
					l.addToTail(el);
					break;
		
					case 3:
					cout << "Elememt removed succesfully ::" << l.removeFromHead() << endl;
					break;
			
					case 4:
					cout << "Elememt removed succesfully ::" << l.removeFromTail() << endl;
					break;
			
					case 5:
					cout << "Enter the element to insert ::";
					cin >> el;
					cout << "Enter the position ::";
					cin >> i;
					l.insertAt(el , i);
					break;	
			
					case 6:
					cout << "Enter the position ::";
					cin >> i;
					cout << "Elememt removed succesfully ::" << l.removeFrom(i) << endl;
					break;
			
					case 7:
					cout << "Total number of nodes present ::" << l.len() << endl;
					break;
		
					case 8:
					cout << "Enter the element to search ::";
					cin >> el;
					if(l.search(el)==0)
						cout << "Element not found in the list !!" << endl;
					else
						cout << "Element found at address :: " << l.search(el) << endl;
					break;
	
					case 9:
					cout << "Enter the elements of the list::" << endl;
					while(s=="Y" | s=="y")
						{
							cin >> el;
							l1.addToTail(el);
							cout << "Do you want to enter more (Y/N)::";
							cin >> s;
						}		
					l.concat(l1);
					break;
		
					case 10:
					cout << "Linked List ::";
					l.print();
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