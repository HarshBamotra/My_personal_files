 //Harsh Bamotra
//program to create a person class 

#include <iostream>
#include <string>
using namespace std;

//defining base class person  
class person
    {
	protected:
	string name;      //defining protected members

	public:
	void setData(string x)      //function to initialize protected members
		{
			name=x;
		}
		
   	void display()             //funtion to display name 
		{
			cout << "Name::" << name;
		}
    };

//defining inherited class student	
class student : public person
    {
	private:
	string course;            //defining private members
	int marks;
	int year;
	
	public:
	void setData1(string x , int y , int z)     //defining function to initialize private members
		{
			course=x;
			marks=y;
			year=z;
		}
	void display1()                   //defining funtion to display the data
		{
			cout << "Name::" << name << endl;
			cout << "Marks::" << marks << endl; 
			cout << "Course::" << course << endl;
			cout << "Year::" << year << endl;
		}
    };

//defining inherited class employee
class employee : public person
	{
		private:
		string department;        //defining private members
		int salary;
		
		public:
		void setData2(string x , int y)     //defining function to initialize the private members
			{
				department=x;
				salary=y;
			}
		void display2()                //defining function to display data
			{
				cout << "Name::" << name << endl;
				cout << "Department::" << department << endl;
				cout << "Salary::" << salary << endl;
			}
    };


int main()
    {
	student ob1;                //defining object 1
	employee ob2;              //defining object 2
	ob1.setData("Harsh");                           //initializing data members of ob1
	ob1.setData1("Bsc Hons CS" , 100 , 1);		
	ob2.setData("Harsh");                          //initializing data members of ob2
	ob2.setData2("Computer Science" , 70000);
	cout << "****** Details of the student ******" << endl;
	ob1.display1(); 						//displaying the data of ob1
	cout << "****** Details of the employee ******" << endl;
	ob2.display2();						      //displaying the data of ob1

	return 0;
    }
	

			
		

	