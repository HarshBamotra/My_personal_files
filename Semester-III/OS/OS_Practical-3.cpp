 //Harsh Bamotra AC-1216
//Program to print the amount configured , free and used memory

#include <iostream>
using namespace std;

int main()
    {
	cout << "************ Memory status using vmstat command ************" << endl;

	cout << "Configured Memory ::" << endl;
	system("vmstat -s | grep 'total memory'");
	
	cout << "Used Memory ::" << endl;
	system("vmstat -s | grep 'used memory'");

	cout << "Free Memory ::" << endl;
	system("vmstat -s | grep 'free memory'");

	cout << "************************************************************" << endl << endl;

	cout << endl << "************* Memory status using cat command *************" << endl;

	cout << "Configured Memory ::" << endl;
	system("cat /proc/meminfo | grep 'MemTotal'");
	
	cout << "Free Memory ::" << endl;
	system("cat /proc/meminfo | grep 'MemFree'");

	cout << "************************************************************" << endl << endl;
	
    }