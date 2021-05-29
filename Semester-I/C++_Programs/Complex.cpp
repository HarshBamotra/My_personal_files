//program to create complex class

#include <iostream>
using namespace std;

class ComplexNumber
    {
	private:
	int real , imag;

	public:
	
	void SetData(int r , int i)
		{
			real=r;
			imag=i;
		}
	
	void Display()
		{
			cout << real << " + i" << imag << endl;
		}
		
	ComplexNumber operator +(ComplexNumber m)
		{
			ComplexNumber temp;
			temp.real=real+m.real;
			temp.imag=imag+m.imag;
			return temp;
		}
	
    };

		
	
int main()
    {
	ComplexNumber c1;
	c1.SetData(1 , 2);
	ComplexNumber c2;
	c2.SetData(1 , 2);
	ComplexNumber c3;
	c3=c1+c2;
	cout << "First Number ::";
	c1.Display();
	cout << "Second Number ::";
	c2.Display();
	cout << "Addition ::";
	c3.Display();
	return 0;
    }