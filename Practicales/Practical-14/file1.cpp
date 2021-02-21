 //Harsh Bamotra
//Program to copy the content of a user inputed text file to other

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void copy(char f1[30] , char f2[30])
	{
		string str;
		ifstream in(f1);
		if(in)
			{
				ofstream out(f2);
				while(in)
					{
						getline(in , str);
						out << str;
						if(in.eof())
							{
								break;
							}
					}
				cout << "Content copied succesfully !!";
			}
				
		else
			{
				cout << "File not found !!";
			}
		
		
	}

int main()
	{
		char f1[30] , f2[30];
		cout << "Enter the name of the sourse file ::";
		cin >> f1;
		cout << "Enter the name of the destination file ::";
		cin >> f2;
		copy(f1 , f2);
	}

