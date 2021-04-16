//Harsh Bamotra
//Program to student class

#include <iostream>
using namespace std;

//defining class student
class student                                          
    {
	public:                                 //defining data members
	int Roll_no , Year , T_marks;
	string Name , Class;

	void display()                        //defining function to print data members
		{
			cout << "Roll No::" << Roll_no << endl;
			cout << "Name::" << Name << endl;
			cout << "Class::" << Class << endl;
			cout << "Year::" << Year << endl;
			cout << "Total marks::" << T_marks << endl;
		}
    };

int main()
    {
	student arr[5];                          //defining object
	for(int i=0 ; i<5 ; i++)                //loop to initailize data members
		{
			cout << "***** Enter the details of the " << i+1 <<" student *****" << endl;
			cout << "Enter your roll no::";
			cin >> arr[i].Roll_no;
			cout << "Enter your name::";
			cin >> arr[i].Name;
			cout << "Enter you class::";                        //initializing the data members 
			cin >> arr[i].Class;				   //by taking input form the user
			cout << "Enter the year::";
			cin >> arr[i].Year;
			cout << "Enter your total marks::";
			cin >> arr[i].T_marks;
			cout << endl;
		}

	for(int i=0 ; i<5 ; i++)
		{	
			cout << "Details of the student " << i+1 << endl;
			arr[i].display();                                       //printing the details by using function display
			cout << endl;
		}
	return 0;
   }
	
	