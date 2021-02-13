 //Harsh Bamotra
 //Program to copy the contents of a file to other after removing spaces.

 #include <iostream>
 #include <fstream>
 using namespace std;

 int main()
    {
     	  string str;                            //defining string str     
      	ifstream in("a.txt");                                    //defining cursor for reading from the text file
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

      	cout << "Data copied succesfully !!";
      	return 0;

    }
