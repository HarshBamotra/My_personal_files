 //Harsh Bamotra AC-1216
//Program to print kernel version , CPU type and model

#include <iostream>
using namespace std;

int main()
    {
	cout << "Linux Version ::" << endl << endl;
	system("cat /proc/version");
	
	cout << "**************************************" << endl << endl;
	
	cout << "CPU Model ::" << endl;
	system("cat /proc/cpuinfo | grep 'model'");

	cout << "**************************************" << endl << endl;

	cout << "CPU Family ::" << endl;
	system("cat /proc/cpuinfo | grep 'cpu family'");
	
    }