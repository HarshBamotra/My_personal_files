 //Harsh Bamotra AC-1216
//Program to calculate area of different shapes using function overloading

#include <iostream>
using namespace std;

int area(int s)
    {
	return s*s;
    }

float area(float r)
    {
	return (3.14*r*r);
    }

float area(float b , float h)
    {
	return (0.5*b*h);
    }

int area(int l , int b)
    {
	return (l*b);
    }

int main()
    {
	int y=1;
	while(y==1){

		int choice , s , b , l;
		float r , h , be;
		cout << "**********************MENU*******************" << endl;
		cout << "Select the shape whose area is to be printed." << endl;
		cout << "1. Square" << endl << "2. Circle" << endl << "3. Triangle" << endl; 
		cout << "4. Rectangle" << endl;
		cout << "*********************************************" << endl;
		cout << "Enter your choice (1,2,3 or 4)::";
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "Enter the side of the sqare::";
				cin >> s;
				cout << "Area of the square::" << area(s);
				break;
			case 2:
				cout << "Enter the radius of the circle::";
				cin >> r;
				cout << "Area of the circle::" << area(r);
				break;
			case 3:
				cout << "Enter the hieght::";
				cin >> h;
				cout << "Enter the base::";
				cin >> be;
				cout << "Area of the triangle::" << area(be , h);
				break;
			case 4:
				cout << "Enter the lenght::";
				cin >> l;
				cout << "Enter the breath::";
				cin >> b;
				cout << "Area of the rectangle::" << area(l , b);
				break;
			default:
				cout << "Wrong input !!!";
			}
		cout << endl << "Do you want to continue(1 for Yes)::";
		cin >> y;
		cout << endl << endl;
	}	
	return 0;
    }
			
		
	