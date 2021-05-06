 //Harsh Bamotra AC-1216
//Program to draw truth table of an expression

#include <iostream>
using namespace std;

bool U(bool x1 , bool x2)
    {
	if(x1==false && x2==false)
		return false;
	else
		return true;
    }

bool U_(bool x1 , bool x2)
    {
	if(x1==true && x2==true)
		return true;
	else
		return false;		
    }

bool ExOr(bool x1 , bool x2)
    {
	if((x1==true && x1==true) || (x1==false && x2==false))
		return false;
	else
		return true;
    }
bool Neg(bool x1)
    {
	if(x1==true)
		return false;
	else
		return true;
    }

bool Con(bool x1 , bool x2)
    {
	if(x1==true && x2==false)
		return false;
	else 
		return true;
    }

bool Bicon(bool x1 , bool x2)
    {
	if((x1==false && x2==false) || (x1==true && x2==true))
		return true;
	else
		return false;
    }

int main()
    {
	int choice , ch;
	bool x , y;
	char h='y';
	while(h=='y' || h=='Y')
		{
			cout << "Enter the first ::";
			cin >> x;
			cout << "Enter the second ::";
			cin >> y;
			cout << "********** Operations **********" << endl;
			cout << "1. Conjuction" << endl << "2. Disjunction";
			cout << endl << "3. Exclusive OR" << endl << "4. Negation";
			cout << endl << "5. Conditional" << endl << "6. Biconditional";
			cout << endl << "********************************" << endl;
			cout << "Enter your choice (1,2,3,4,5 or 6)::";
			cin >> choice;
			switch(choice)
				{
					case 1:
					cout << "X   Y   XvY" << endl << "--------------" << endl;
					cout << x << "    " << y << "    " << U(x , y);
					break;

					case 2:
					cout << "X   Y   X^Y" << endl << "--------------" << endl;
					cout << x << "    " << y << "    " << U_(x , y);
					break;
							
					case 3:
					cout << "X   Y   X0Y" << endl << "--------------" << endl;
					cout << x << "    " << y << "    " << ExOr(x , y);
					break;
							
					case 4:
					cout << "X   Y   ~X    ~Y" << endl << "---------------------" << endl;
					cout << x << "    " << y << "    " << Neg(x) << "    " << Neg(y);
					break;
			
					case 5:
					cout << "X   Y   X->Y" << endl << "--------------" << endl;
					cout << x << "    " << y << "    " << Con(x , y);
					break;
							
					case 6:
					cout << "X   Y   X<->Y" << endl << "--------------" << endl;
					cout << x << "    " << y << "    " << Bicon(x , y);
					break;
			
					default:
					cout << "Wrong input !! " << endl;
				}
			cout << endl << "Do you want to continue (y/n)::";
			cin >> h;
		}				
	return 0;
    }