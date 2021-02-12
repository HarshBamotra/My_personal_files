 //Harsh Bamotra AC-1216
//Program to create a triangle class

#include <iostream>
#include <cmath>
using namespace std;

//defining class triangle 
class triangle
    {
	private:                                       //defining private members
	int base , height , side;
	
	public:
	void setData(int x , int y , int z)        //function to initialize the private members
		{
			base=x;
			height=y;
			side=z;
		}

	void setData(int x , int y)           //overloading setData  
		{
			base=x;
			height=y;
		}

	int area(int base , int height)      //function to calculate the area
		{
			int area;
			area=0.5*base*height;
			return area;
		}

	int area(int base , int height , int side)   //overloafing area
		{
			int area , sp;
			sp=(base+height+side)/2;
			area=sqrt(sp*(sp-base)*(sp-height)*(sp-side));
			return area;
		}

	void operator =(triangle m)                //overloading assignment operator 
		{
			m.base=base;
			m.height=height;
			m.side=side;
		}
	
	bool operator ==(triangle m)            //overloading equality operator 
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
	int s1 , s2 , s3 , base , height;                 //defining variables
	triangle t1 , t2;                    //defining objects

	cout << "***** Enter the sides of the triangle *****" << endl;
	cout << "Enter the first side of the triangle::";
	cin >> s1;
	cout << "Enter the second side of the triangle::";             //taking the length of sides 
	cin >> s2;
	cout << "Enter the third side of the triangle::";
	cin >> s3;
	t1.setData(s1 , s2 , s3);                         //initializing data members
	cout << "The area of the triangle::" << t1.area(s1 , s2 , s3) << endl;          //printing the result

	cout << endl << "*****Enter the sides of the second triangle ***** " << endl;
	cout << "Enter the base of the triangle::";
	cin >> base;
	cout << "Enter the height of the triangle::";              //taking the base and height
	cin >> height;
	t2.setData(base , height);                        //initializing data members
	cout << "The area of the triangle::" << t2.area(base , height);                   //printing the result

	return 0;
    }
	
	