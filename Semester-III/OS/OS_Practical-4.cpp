 //Harsh Bamotra AC-1216
//Program to print the details like owner access permissions, file access time 

#include <iostream>
using namespace std;

int main(int argc , char *argv[])
    {
	string f=argv[1];
	string c1="ls -l " + f + " | awk '{print $1}'";
	string c2="ls -l " + f + " | awk '{print $6 , $7 , $8}'";

	const char *com1=c1.c_str(); 
	const char *com2=c2.c_str();

	cout << "Filename ::" << f << endl;
	cout << "*********************************" << endl;
	cout << "Owner Access Permissions ::" << endl;
	system(com1);
	cout << endl << "File Access Time ::" << endl;
	system(com2);
	cout << "*********************************" << endl;
	return 0;
    }