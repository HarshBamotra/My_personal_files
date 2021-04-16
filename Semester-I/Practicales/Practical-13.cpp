 //Harsh Bamotra
//Program to write the details of student in a text file

#include <iostream>
#include <fstream>
using namespace std;
 
class student					      //Defining class student
    {
        private:                                    //defining private members
        string roll_no , name , Class;
        int year , t_marks; 

        public:                                   //defining public members
        void getdata()                           //defining function to input data from user
            {
                cout << "Enter your name ::";
                getline(cin , name);
                fflush;
                cout << "Enter your roll no ::";
                cin >> roll_no;
                cout << "Enter your class ::";
                cin >> Class;
                cout << "Enter the year ::";
                cin >> year;
                cout << "Enter your Total marks ::";
                cin >> t_marks;
                cin.ignore();
                       
            }

        void write()                                                     //defining function to write in the text file
	    {
                ofstream out("samp.txt" , ios::app);			//defining output stream cursor to write in the text file
                if(out)
			{
				out << "***** Details of the student *****\n";
                		out << "Name ::" << name << "\n" ;
                		out << "Roll No. ::" << roll_no << "\n" ;
                		out << "Class ::" << Class << "\n" ;
                		out << "Year ::" << year << "\n" ;
                		out << "Total marks ::" << t_marks << "\n";
                		out << "**********************************\n\n";
            		}
		else
			{
				cout << "File not found !!";
			}
	    }
        
        void display()							//defining fucntion to display inputed data
            {
                cout << "Roll No. ::" << roll_no << endl;
                cout << "Name ::" << name << endl;
                cout << "Class ::" << Class << endl;
                cout << "Year ::" << year << endl;
                cout << "Total marks ::" << t_marks;
            }

    };

int main()
    {
        student arr[5];						//defining class student object
	
	ofstream out("samp.txt");
        for(int i=0 ; i<5 ; i++)                               
            {
                cout << "***** Enter the details of the student " << i+1 << " *****" << endl;
                arr[i].getdata();				
                cout << endl;					//taking input from the user
            }
        
        for(int i=0 ; i<5 ; i++)                          
            {
                cout << "***** Details of the student "  << i+1 << " *****" << endl;
                arr[i].display();				 //printing the data to the user
                arr[i].write();					//writing data in the text file
                cout << endl;
                cout << "**** Saved this data successfully ****" << endl << endl;
            }
        
    }