//Program to calculate the volume of a cubeboid

#include <iostream>
using namespace std;

class Cuboid
    {
	public:	
	int l , b , h;
	void Display()
		{
			cout << "Hieght ::" << h << endl;
			cout << "Breath ::" << b << endl;
			cout << "Length ::" << l << endl;
		}
	
    };

class CuboidVol : public Cuboid
    {
	private:
	int vol;

	public:
	void SetData(int a , int be , int c)
		{
			l=a;	
			b=be;
			h=c;
			vol=l*b*h;
		}
	void Display()
		{
			cout << "Hieght ::" << h << endl;
			cout << "Breath ::" << b << endl;
			cout << "Length ::" << l << endl;
			cout << "The volume of the cuboid ::" << vol;
		}
    };
			


int main()
    {
	CuboidVol obj;
	obj.SetData(2 , 2 , 2);
	obj.Display();
	return 0;
    }