 //Harsh Bamotra AC-1216
//Program to create a person class and show polymorphism

#include <iostream>
#include <string>
using namespace std;

//defining class person
class person
    {
	public:                                   //defining public members
	string name;
	person()                                //defining constructor
		{
			cout << "Enter your name::";
			getline(cin, name);
			fflush;
		}
	virtual void display()              //defining virtual funtion display to print the detials
		{
			cout << "Name::" << name;
		}
    };

//inheriting student class from person class
class student : public person 
    {
	private:                                  //defining private members
	string course;
	int year , marks;
	
	public:                                //defining public members
	student()                             //defining constructor
		{
			cout << "Enter your course::";
			getline(cin , course);
			fflush;
			cout << "Enter your year::";
			cin >> year;
			cout << "Enter your marks::";
			cin >> marks;
		}

	void display()                           //overriding funtion display
		{
			cout << "Name::" << name << endl;
			cout << "Course::" << course << endl;
			cout << "Year::" << year << endl;
			cout << "Marks::" << marks << endl << endl;
		}
	};

//inheriting class employee from person
class employee : public person
    {
	private:                              //defining private members
	string department;
	int salary;
		
	public:                               //defining pubic members
	employee()                           //defining constructor
		{
			cout << "Enter your department::";
			getline(cin , department);
			fflush;
			cout << "Enter your salary::";
			cin >> salary;
		}

	void display()                       //overriding function display
		{
			cout << "Name::" << name << endl;
			cout << "Department::" << department << endl;
			cout << "Salary ::" << salary << endl << endl;
		}
    };

int main()
    {
	person *p;                       //defining class pointer

	student obj1;                  //defining class object
	p=&obj1;                      //pointing the p pointer to object of student
	cout << "********* Details of the student *********" << endl;
	p -> display();             //displaying the data
	cin.ignore();
	
	employee obj2;           //defining class object
	p=&obj2;                //pointing the p pointer to object of employee
	cout << "********* Details of the employee *********" << endl;
	p -> display();       //displaying the data
	cin.ignore();
	
	return 0;
    }
		
	