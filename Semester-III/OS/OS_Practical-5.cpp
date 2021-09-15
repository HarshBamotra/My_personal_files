 //Harsh Bamotra AC-1216
//Program to copy the contents from one file to another

#include <iostream>
using namespace std;

void copy(char f1[30] , char f2[30])
	{
		string sf = f1;       //source file 
		string df = f2;      //destination file

		string c="cp " + sf + " " + df;
		const char *com=c.c_str(); 
		
		try	
			{
				if(system(com))      
					throw sf;
				else
					cout << "Data copied succecfully !!" << endl;	
			}
		catch(string sf)
			{
				cout << "Source file not found !!" << endl;
			}
				
	}

int main(int argc , char *argv[])
    {
	cout << "******************************" << endl;
	cout << "Source File ::" << argv[1] << endl;
	cout << "Destination File ::" << argv[2] << endl;
	cout << "******************************" << endl << endl;

	copy(argv[1] , argv[2]);
	return 0;
    }