 //Harsh Bamotra
//Program to copy the content of a user inputed text file to other

#include <iostream>
//#include <unistd.h>
#include <fcntl.h>

using namespace std;

void copy(char f1[30] , char f2[30])
	{
		char str[10];
		int fd1=open(f1 , O_RDONLY);
		int fd2=open(f2 , O_WRONLY | O_CREAT);
		if(fd1>0)
			{
				while(read(fd1 , str , 10)>0)
					{
						write(fd2 , str , 10);
					}
				cout << "Data copied successfully !!" << endl;
			}
		else
			cout << "Unable to open the file ::" << f1 << endl;

		close(fd1);
		close(fd2);
	}

int main(int argc , char *argv[])
	{
		if(argc!=3)
			{
				cout << "Insufficent file provided !!" << endl;
				exit(0);
			}
		else
			{
				cout << "******************************" << endl;
				cout << "Source File ::" << argv[1] << endl;
				cout << "Destination File ::" << argv[2] << endl;
				cout << "******************************" << endl << endl;

				copy(argv[1] , argv[2]);
			}
	}

