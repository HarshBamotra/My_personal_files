  //Harsh Bamotra
 //Program to create a person class and create data members and writing the details of the class in a text file
//and then read from that file and print the details on the screen.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/************************************************** Defining class person *********************************************/
class person 
    {
	private:                                                //defining private members
	string firstName , middle , lastName;
	char employeeNo[20];

	public:                                           //defining private members
	void getdata()                                   //function to initialize the data members
		{
			char c;
			cout << "Enter your first name ::";
			cin >> firstName;                                 //initializing first name
			fflush;
			cout << "Do you have a middle name (y/n)::";
			cin >> c;                                         //checking if the user has a middle name
			if(c=='y' || c=='Y')
				{	
					cout << "Enter your middle name ::";
					cin >> middle;                              //initializing middle
				}
			else
				{
					middle="";
				}
			cout << "Enter your last name ::";
			cin >> lastName;                                       //initializing last name
			cout << "Enter your employee number ::";
			try{                                                   //handling exception
				cin >> employeeNo;                            //initializing employee number
				if(atoi(employeeNo)<0)
					{
						throw employeeNo;
					}
			   }
			catch(...)
				{                                                 //printing error message
					cout << "Please enter a valid employee number ::" << endl;
					cin >> employeeNo;            
				}
			
		}
	
	void write()                                                  //function to write in the text file
		{
			ofstream out("sample.txt" , ios::app);        //defining cursor to write in the file
			string errorM="File not found !!";
			try{			                           //handling exception
                		if(out)
					{
						out << "***** Detail of the employee *****\n";
                				out << "Name ::" << firstName << " " << middle << " " << lastName << "\n" ;
                				out << "Employee No. ::" <<employeeNo<< "\n" ;
                				out << "**********************************\n\n";
            				}
				else
					{
						throw errorM;
					}
			}
			catch(string errorM)
				{
					cout << errorM;              //printing error message
				}
	    	}

	void read()                                                   //function to read from the file
		{
			string str , errorM="File not found !!";
			ifstream in("sample.txt");                     //defining cursor to read from the file
			try{					      //handling exception
				if(in)
					{
						while(in)
							{
								getline(in , str);
								cout << str << endl;    //writing in the file
								if(in.eof())           
									{               //checking and breaking the loop
										break;
									}
							}
					}
				else
					{
						throw errorM;
					}
			}
			catch(string errorM)
				{
					cout << errorM;                //printing error message
				}
		}
    };
								
			

int main()
    {
	ofstream("sample.txt");
	person arr[100];                      //defining class object
	char ch='y';
	int n=0;
	while(ch=='y' || ch=='Y')          //loop to take input and write in the file
		{	
			cout << endl << "***** Enter the details of the student " << n+1 << " *****" << endl << endl;
			arr[n].getdata();
			arr[n++].write();                 
			cout << "Do you want to continue (y/n)::";
			cin >> ch;
			cout << "*************************************************" << endl;
		}

	cout << endl;
	arr[n].read();           //reading from the file 	
			
	return 0;
    }

