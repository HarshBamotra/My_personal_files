 //Harsh Bamotra AC-1216
//Program to implement binary search tree

#include <iostream>
#include "AQueue.h"
using namespace std;

template <class T>
class node
    {
	public:
	T info;
	node *right , *left;
	node()
		{
			left=right=0;
		}

	node(T a , node *r=0 , node *l=0)
		{
			info=a;
			right=r;
			left=l;
		}	
    };

template <class T>
class BinaryTree
   {
	public:
	node <T> *root;
	BinaryTree()
		{
			root=NULL;
		}

	bool isEmpty()
		{
			return (root==NULL);
		}

	void insert(T el)
		{
			node <T> *temp=root , *prev=0;
			while(temp!=0)
				{
					prev=temp;
					if(el<temp->info)
						temp=temp->left;
					else 
						temp=temp->right;
				}
						
			if(root==0)	
				root=new node<T>(el);
			else if(el<prev->info)
				prev->left = new node<T>(el);
			else
				prev->right = new node<T>(el);
		}

	void visit(node<T> *p)       //utility function
		{
			cout << p->info << " ";
		}

	void inorder(node<T> *p)
		{
			if(p!=0)
				{
					inorder(p->left);
					visit(p);
					inorder(p->right);
				}
		}

	void preorder(node<T> *p)
		{
			if(p!=0)
				{
					visit(p);
					preorder(p->left);
					preorder(p->right);
				}
		}

	void posorder(node<T> *p)
		{
			if(p!=0)
				{
					posorder(p->left);
					posorder(p->right);
					visit(p);
				}
		}

	bool search(T el)
		{
			node<T> *p=root;
			while(p!=0)
				{
					if(p->info==el)
						return true;
					else if(el<p->info)
						p=p->left;
					else 
						p=p->right;
				}
			return false;
		}

	void Delete(node<T> *p)	
		{
			node<T> *temp=p;
			if(p!=0)
				{
					if(!p->right)
						p=p->left;
					else if(p->left==0)
						p=p->right;
					else
						{
							temp=p->left;
							while(temp->right!=0)
								temp=temp->right;
							
							temp->right=p->right;
						
							temp=p;
							p=p->left;
						}
					delete temp;
				}
		}

	void deleteElement(T el)
		{
			node<T> *p=root , *prev=0;
			while(p!=0)	
				{
					if(p->info==el)
						break;
					prev=p;
					if(el<p->info)
						p=p->left;
					else 
						p=p->right;
				}

			if(p!=0 && p->info==el)
				{
					if(p==root)
						Delete(root);
					else if(prev->left==p)
						Delete(prev->left);
					else 
						Delete(prev->right);
					cout << "Element deleted sucessfully !!" << endl;
				}
			else if(root!=0)
				cout << "Element not found in the tree !!" << endl;
			else 
				cout << "Underflow !! the tree is empty !!" << endl;
		}


	int height(node <T> *p)	
		{
			if (p == NULL)
        			return -1;
    			else
    				{
        				int l = height(p->left);
        				int r = height(p->right);
     
       					if (l>r)
            					return(l + 1);
        				else 
						return(r + 1);
    				}
		}	
	
	void breathFirst()
		{
			AQueue<node<T>*> queue(height(root));
			node <T> *p=root;
			if(p!=0)
				{
					queue.enQueue(p);
					while(!queue.isEmpty())
						{
							p=queue.deQueue();
							visit(p);
							if(p->left!=0)
								queue.enQueue(p->left);
							if(p->right!=0)
								queue.enQueue(p->right);
						}
				}
		}				
    };
	
int main()
    {
	string c="y" , s="y";
	int ch , el;
	BinaryTree <int>BT;
	while(c=="y" | c=="Y")
		{
			cout << endl << "****************** MENU ******************" << endl;
			cout << "1.Insert an element in the tree" << endl << "2.Delete an element from the tree" << endl;
			cout << "3.Search an element in the tree" << endl << "4.Find the height of the tree" << endl;
			cout << "5.Preorder tranversal of the tree" << endl << "6.Posorder tranversal of the tree" << endl;
			cout << "7.Inorder tranversal of the tree" << endl << "8.Breath first tranversal of the tree" << endl;
			cout << "******************************************" << endl << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			switch(ch)
				{
					case 1:
					cout << "Enter the element to insert ::";
					cin >> el;
					BT.insert(el);
					break;
					
					case 2:
					cout << "Enter the element to delete ::";
					cin >> el;
					BT.deleteElement(el);
					break;

					case 3:
					cout << "Enter the element to search ::";
					cin >> el;
					if(BT.search(el)==1)
						cout << "Element found in the tree !!" << endl;
					else 
						cout << "Element not found in the tree !!" << endl;
					break;
					
					case 4:
					if(BT.isEmpty())
						cout << "Underflow, tree is empty !!" << endl;
					else
						cout << "Height of the tree ::" << BT.height(BT.root) << endl;
					break;

					case 5:
					if(BT.isEmpty())
						cout << "Underflow, tree is empty !!" << endl;
					else
						BT.preorder(BT.root);
						cout << endl;
					break;
			
					case 6:
					if(BT.isEmpty())
						cout << "Underflow, tree is empty !!" << endl;
					else
						BT.posorder(BT.root);
						cout << endl;
					break;
			
					case 7:
					if(BT.isEmpty())
						cout << "Underflow, tree is empty !!" << endl;
					else
						BT.inorder(BT.root);
						cout << endl;
					break;

					case 8:
					if(BT.isEmpty())
						cout << "Underflow, tree is empty !!" << endl;
					else
						BT.breathFirst();
						cout << endl;
					break;
					
					default:
					cout << "Please enter a valid input !!" << endl;
					
				}
			cout << "Do you want to continue (Y/N) ::";
			cin >> c;
		}
	return 0;
    }