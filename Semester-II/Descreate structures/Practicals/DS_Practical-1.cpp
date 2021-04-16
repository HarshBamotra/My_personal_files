 //Harsh Bamotra
//Program to perform different functions on set

#include <iostream>
#include <math.h>
#include <array>
using namespace std;

class sets
    {
	private:                                       //declaring private members
	int arr[100] , n;
	
	public:					      //declaring public members
	void input()                                 //input function to take user's input
		{
			cout << "Enter the number of set elements ::";
			cin >> n;
			for(int i=0 ; i<n ; i++)
				{
					cout << "Enter the elements at index " << i << " ::";
					cin >> arr[i];
				}
		}
	void print()                                     //print funtion to print the set 
		{
			for(int i=0 ; i<n ; i++)
				{
					cout << arr[i] << " ";
				}
		}
	void unique()                                 //unique function to remove duplicate elements from the set
		{
			for(int i=0 ; i<n ; i++)
				for(int j=i+1 ; j<n ; j++)
					{
						if(arr[i]==arr[j])
							{
								for(int l=j ; l<n ; l++)
									{
										arr[l]=arr[l+1];
									}
								n--;
							}
					}
		}
	bool ismember(int x)                      //function to check membership of an element
		{
			bool re=false;
			for(int i=0 ; i<n ; i++)
				if(arr[i]==x)
					re=true;
			return re;
		}
	int cardi()                         //function to find the cardinality
		{
			size=n;
			return size; 
		}
	void powerset()                      //funtion to print the power set
		{
			cout << "The power of set ::" << endl;
			int c=pow(2 , n);
			for(int i=0 ; i<c ; i++)
				{
					cout << "{ ";
					for(int j=0 ; j<n ; j++)
						{
							if((i & (1<<j))!=0)
								cout << arr[j] << " ";	
						}
					cout << " }";
					cout << endl;

				}
		}
    };

int main()
    {
	int ch;
	char y='y';
	sets obj;
	obj.input();				//taking user's input
	cout << "The set you entered ::";
	obj.print();				 //printing the set 	
	while(y=='y' || y=='Y')			//printing the menu
		{											
			cout << endl << endl << "**************** Menu ****************" << endl;
			cout << "1. Remove duplicate elements." << endl;
			cout << "2. Cardinality of the set." << endl;	
			cout << "3. Power of set." << endl;
			cout << "4. Check membership of an elements" << endl;
			cout << "**************** Menu ****************" << endl;
			cout << "Enter your choice(1 , 2 , 3 or 4) ::";
			cin >> ch; 		
						//taking user's choice
			if(ch==1)              //printing the set after removing duplicate elements
				{
					obj.unique();
					cout << "The set after removing duplicates ::";
					obj.print();
				}
			else if(ch==2)			//printing the size of the set
				{
					cout << "Cardinality of the set ::" << obj.cardi() << endl;
				}
			else if(ch==3)  		//printing the power set
				{
					obj.powerset();
				}
			else if(ch==4)			//checking member elements
				{
					int x;
					cout << "Enter the element you want to check ::";
					cin >> x;
					if(obj.ismember(x))
						cout << "The element is a member of the set.";
					else
						cout << "The element is not a member of the set.";
				}
			else					//handling execption
				{
					cout << "Wrong input !!" << endl;
				}
			cout << endl << "Do you want to continue (y/n)::";
			cin >> y;					//asking users if he wants to continue
		}
	return 0;
    }
		