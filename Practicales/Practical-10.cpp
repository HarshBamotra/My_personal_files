 //Harsh Bamotra AC-1216
//Program to create a triangle class

#include <iostream>
#include <cmath>
using namespace std;

//defining class triangle 
class triangle
    {
	private:                                      //defining private members
	double base , height , side;
	
	public:
	void setData(double x , double y , double z)        //function to initialize the private members
		{
			base=x;
			height=y;
			side=z;
		}

	void setData(double x , double y)           //overloading setData  
		{
			base=x;
			height=y;
			side=0;
		}

	double area(double base , double height)      //function to calculate the area
		{
			double area;
			area=0.5*base*height;
			return area;
		}

	double area(double base , double height , double side)   //overloading area
		{
			double area , sp;
			sp=(base+height+side)/2;
			area=sqrt(sp*(sp-base)*(sp-height)*(sp-side));
			return area;
		}

	void operator =(triangle &m)                //overloading assignment operator 
		{
			m.base=base;
			m.height=height;
			m.side=side;
		}
	
	bool operator ==(triangle &m)            //overloading equality operator 
		{
			if(m.base==base && m.height==height && m.side==side)
				{
					return true;
				}
			else
				{
					return false;
				}
		}				
    };



int main()
    {
	double s1 , s2 , s3;                 //defining variables
	int ch;
	triangle t1 , t2;                    //defining objects

	cout << endl << "***************** MENU ************************" << endl;
	cout << "1. Find area using three sides." << endl;
	cout << "2. Find area using two sides." << endl;
	cout << "Enter your choice ::";
	cin >> ch;

	switch (ch)
		{
			case 1:
				cout << endl << "***** Enter the sides of the triangle *****" << endl;
				cout << "Enter the first side of the triangle::";
				cin >> s1;
				cout << "Enter the second side of the triangle::";             //taking the length of sides 
				cin >> s2;
				cout << "Enter the third side of the triangle::";
				cin >> s3;
				t1.setData(s1 , s2 , s3);                         //initializing data members
				cout << "The area of the triangle::" << t1.area(s1 , s2 , s3) << endl;          //printing the result
				break;

			case 2:
				cout << endl << "***** Enter the sides of the triangle *****" << endl;
				cout << "Enter the first side of the triangle::";
				cin >> s1;
				cout << "Enter the second side of the triangle::";             //taking the length of sides 
				cin >> s2;
				t1.setData(s1 , s2);                         //initializing data members
				cout << "The area of the triangle::" << t1.area(s1 , s2) << endl;          //printing the result
				break;

			default:
				cout << "Wrong Input !! Exiting !!";
				break;
		}
	
	if(ch==1 || ch==2)
		{
			t1=t2;              //demonstrating assignment 
			cout << endl << "********** Checking assignment ***********" << endl;
			if(t1==t2)          //demonstrating equality operator 
				{
					cout << "Assignment successfull !!";
				}
			else
				{
					cout << "Not successfull !!";
				}
		}
	return 0;
    }
	
	