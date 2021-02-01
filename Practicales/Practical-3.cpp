//program to count the occurance of each character 

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
    {
	string str="";                  //defining variables
	int count[26];
	int x;

	for(int i=0 ; i<26 ; i++)
		{
			count[i]=0;          //initialising count to 0
		}


	cout << "The text you entered in command line::" << endl;
	for(int i=1 ; i<argc ; i++)
		{
 			cout << argv[i] << endl;
			str+=argv[i];                //adding the values of argv in str
		}


	for(int i=0 ; i<str.length() ; i++)
		{
			if(str[i]>='A' && str[i]<='Z')
				{
					x=int(str[i])-65;            //checking for alphabets  
   					count[x]++;                 //counting the occurance 
				}
			else if(str[i]>='a' && str[i]<='z')
  				{
   					x=int(str[i])-97;             //checking for alphabets 
   					count[x]++;                  //counting the occurance
  				}
		}


  
	cout<<"Ocuurance of the characters::";
	for(int i=0 ; i<26 ; i++)                  
		{                                                            //printing the final result
  			cout << endl << char(65+i) << "-->" << count[i];      
		}
	return 0;
}