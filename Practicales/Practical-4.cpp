//Program to perform diffrent functions on string
#include <iostream>
using namespace std;

//***********defining function length***********
int len(string s)
    {
        int lent=0;
        while(true)
            {
                if(s[lent]>char(31) && s[lent]<char(123))
                    {
                        lent+=1;
                    }
		else
		    {
			break;
		    }
            }
        return lent;
        
    }

//**********Defining function adress************
void adress(string s)
    {
        cout << "Adress of the characters::" << endl;
        for(int i=0 ; i<len(s) ; i++)
            {
                cout << s[i] << " -> " << (void*)&s[i] << endl;    
            }
    }
//**********defining funtion concetination************
string con(string s)
    {
        string second , f;
        cout << "Enter the second string to Concatenate::";
        cin >> second;
        f=s+second;
        return f;
        
    }
//***************defining fuction compare***************
void com(string s)
    {
        string second;
        bool equal=true;
        cout << "Enter the second string to compare::";
        cin >> second;
        for(int i=0 ; i<len(s) && i<len(second) ; i++)
            {
                if(s[i]!=second[i])
                    {
                        equal=false;  
                    }
                
            }
        if(equal==true)
            {
                cout << "The strings are equal!!";
            }
        else
        {
            cout << "The strings are not equal!!";
        }
        
    }
//***********defining function reverse***********
string rev(string s)
    {
        char f[100];
        int l=len(s);
        for(int i=0 ; i<l ; i++)
            {
                f[i]=s[l-1-i];
            }
        return f;
    }
//******defining function to upper the letters*******
string upper(string s)
    {
        int v;
        for(int i=0 ; i<len(s) ; i++)
            {
                if(s[i]>=char(97) && s[i]<=char(122))
                    {
                        v=int(s[i]);
                        s[i]=char(v-32);
                    }
                else
                {
                    continue;
                }
            }
        return s;
    }

    
int main()

{

    string x;      //defining variables
    int y;
    cout << "Enter the string::";
    getline(cin , x);                                                 //showing the menu to user
    cout << "*******************************************" << endl;           
    cout << "1.Adress of character" << endl << "2.Concatenate" << endl << "3.Compare two strings" << endl;
    cout << "4.Length of string" << endl << "5.Lower case to Upper case" << endl << "6.Reverse" << endl;
    cout << "*******************************************" << endl;
    cout << "Enter your choice (1,2,3,4,5 or 6) ::";
    cin >>y;
    switch(y)
	{                                                   //creating switch case and printing the result
    		case 1:
			adress(x);
			break;
		case 2:
			cout << "The string after concatenate::" << con(x);
			break;
		case 3:
			com(x);
			break;
		case 4:
			cout << "The lenght of the string is::" << len(x);
			break;
		case 5:
			cout << "The string in upper case::" << upper(x);
			break;
		case 6:
			cout << "The string after reverse::" << rev(x);
			break;
		default:
			cout << "Wrong Input !!";
			break;
	}
    return 0;

}