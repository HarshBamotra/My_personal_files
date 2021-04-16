#include <iostream>
using namespace std;

class Human
    {
	public:
	string name;
	int age;
	
	Human(string n , int a)
		{
			name=n;
			age=a;
		}
	virtual void printDetails()=0;
    };
	
class Adult : public Human
    {
	private:
	string voterID; 

	public:
	Adult(string n , int a , string ID )
		{
			name=n;
			if(a<=18)
				{
					cout << "Please enter a valid age !!" << endl;
					cout << "Enter your age ::";
					cin >> age;
				}
			else
				{
					age=a;
				}
			voterID=ID;
		}
	void printDetails()
		{
			cout << "**** Details of the Adult Human ****" << endl;
			cout << "Name ::" << name;
			cout << "Age ::" << age;
			cout << "Voter ID ::" << voterID;
			cout << "*************************************" << endl;
		} 
    };

class Child : public Human
    {
	private:
	string schoolName; 

	public:
	Child(string n , int a , string s)
		{
			name=n;
			if(a<=0 || a>=18 )
				{
					cout << "Please enter a valid age !!" << endl;
					cout << "Enter your age ::";
					cin >> age;
				}
			else
				{
					age=a;
				}
			schoolName=s;
		}
	void printDetails()
		{
			cout << "**** Details of the Child Human ****" << endl;
			cout << "Name ::" << name;
			cout << "Age ::" << age;
			cout << "School Name ::" << schoolName;
			cout << "*************************************" << endl;
		} 
    };



int main()
    {
	string name="Harsh Bamotra" , ID="SEO1234567";
	int age=18 , age1=16;

	Adult obj1( name , age , ID);
	obj1.printDetails();

	Child obj2(name , age1 , name);
	obj2.printDetails();
	
	return 0;
    }