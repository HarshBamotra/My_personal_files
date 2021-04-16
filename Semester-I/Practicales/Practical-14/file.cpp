 //Harsh Bamotra
 //Program to copy the contents of a file to other after removing spaces.

 #include <iostream>
 #include <fstream>
 using namespace std;

 int main()
    {
     	string str;                            //defining string str     
      	ifstream in("a3.txt");                                   //defining cursor for reading from the text file
	if(in)
		{
			cout << "Data copied succesfully !!";
		}
	else
		{
			cout << "File not found !!";
		}

      	ofstream out("a1.txt");                            //defining cursor for writing in the text file

      	while(in)              
		{
          		in >> str;                                                       //reading from the file a
          		if(str!=" ")                                                   //checking for whitespaces
            			{
              				out << str;                     //writing in the file 
            			}

          		if(in.eof())                                            //checking the end of the file
            			{
              				break;            //breaking the loop at the end of the file
            			}
		}
	
      	return 0;

    }
