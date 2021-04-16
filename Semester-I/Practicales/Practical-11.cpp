 //Harsh Bamotra
//Program to divide to numbers and do error handing 

#include <iostream>
using namespace std;

int main()
    {
        double p , q;                                 //Defining variables
        string ch="Y";
        while(ch=="Y" || ch=="y")                
            {
                cout << endl << "******** Division of two numbers *********" << endl;
                cout << "Enter the numerator ::";
                cin >> p;                                       //taking input from the user
                cout << "Enter the denomenator ::";
                cin >> q;                                       //taking input from the user
                try
                    {
                        if(q==0)                            //checking exception
                            {
                                throw q;                   //throwing the value of q
                            }
                        else                              //printing division of p and q
                            {
                                cout << "The division of p and q is ::" << p/q << endl; 
                            }                               
                    } 

                catch(double err)                 //catching the thrown value
                    {                            
                        cout << "Error !! Division by " << err << " is not allowed !!" << endl;
                    }				//printing the error message

                cout << "******************************************" << endl;
                cout << "Do you want to continue (Y/y) or (N/n)::"; 
                cin >> ch;                     //asking the user if he wants continue
            }
        return 0;
    }