 //Harsh Bamotra AC-1216
//Program to create a set class find the complement of set 

#include <iostream>
using namespace std;

class SET
    {
	private:                         //declaring private members
	int n;
	int a[100];

	public: 		 //declaring public members
 	void input(int l)	//defining function to input a set
		{
			n=l;
			cout << "Enter the elemets of the set ::" << endl;
			for(int i=0 ; i<n ; i++)
				{
					cin >> a[i];
				}
 		}

	void display()
		{
			for(int i=0 ; i<n ; i++)
				{
					cout << a[i] << " ";
				}
		}
 	void complement(SET uni);
    };


void SET :: complement(SET uni) 		//defining function for complement
    {
 	int c;

 	for(int i=0 ; i<uni.n ; i++)
 		{					//printing the complement of the set
			c=0;
 			for(int j=0 ; j<n ; j++)
 				{
 					if(uni.a[i]==a[j])
 					c++;
 				}
 			if(c==0)
 				{
 					cout << uni.a[i] << " ";
 				}
 		}
    }

int main()
    {
	string ch="Y";
	int n , m;
 	while(ch=="Y" || ch=="y")
		{
			cout << endl << "********** Complement of the set **********" << endl;
			SET A , U;
			cout << "Enter the number of elements of set A ::";
			cin >> n;
			A.input(n);				//taking the set A

			cout << "Enter the number of elements of universal set U ::";
			cin >> m;
			U.input(m);			//taking the universal set U
			
			cout << "Set A ::";
			A.display();			//printing the set A

			cout << endl << "Set U ::";
			U.display();			//printing the set B

			cout << endl << "The complement of the set A ::";
			A.complement(U);		
			
			cout << endl << "*******************************************" << endl;
			cout << "Do you want to continue (Y/N) ::";
			cin >> ch;
		}
 	return 0;
    }
