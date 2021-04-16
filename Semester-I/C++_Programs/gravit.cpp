#include <iostream>
using namespace std;

class Vehicle
    {
	protected:
	string name , type;
	int price , wheels;

	public:
	Vehicle(){}
	void display()
		{
			cout << "Name ::" << name << endl;
			cout << "Fuel Type ::" << type << endl;
			cout << "Price ::" << price << endl;
			cout << "No of wheels ::" << wheels << endl;
		}
	void input()
		{
			cout << "Enter the name of your vehicle ::";
			cin >> name;
			cout << "Enter the fuel type ::";
			cin >> type;
			cout << "Enter the price ::";
			cin >> price;
			cout << "Enter the number of wheels ::";
			cin >> wheels;
		}
	virtual void No_wheels()=0;
    };

class car : public Vehicle
    {
	public:
	car()
		{
			wheels=4;
		}
	void No_wheels()
		{
			try{
			if(wheels!=4)
				{
					throw wheels;
				}
			}
			catch(int w)	
				{
					cout << "Please enter a valid input ::";
					cin >> wheels;
				}
		}
	};

class bike : public Vehicle
    {
	public:
	bike()
		{
			wheels=2;
		}
	void No_wheels()
		{
			try{
			if(wheels!=2)
				{
					throw wheels;
				}
			}
			catch(int w)	
				{
					cout << "Please enter a valid input ::";
					cin >> wheels;
				}
		}
	};

class Auto : public Vehicle
    {
	public:
	Auto()
		{
			wheels=3;
		}
	void No_wheels()
		{
			try{
			if(wheels!=3)
				{
					throw wheels;
				}
			}
			catch(int w)	
				{
					cout << "Please enter a valid input ::";
					cin >> wheels;
				}
		}
	};

int main()
	{
		car object1;
		object1.input();
		object1.No_wheels();
		
		bike object2;
		object2.input();
		object2.No_wheels();
		

		Auto object3;
		object3.input();
		object3.No_wheels();
		
		object1.display();
		object2.display();
		object3.display();
		return 0;
	}


	
	
	
	