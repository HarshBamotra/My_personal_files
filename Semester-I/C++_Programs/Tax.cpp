 //Program to calculate the sales tax of a transaction
//AC-1216 Harsh Bamotra

#include <iostream>
using namespace std;

int main()

{    

    double tax_amount, s_amount , t_amount;               //declaring variables
    const int tax=9;                                     //declaring contant
    cout << "Enter the value of sale amount::";         //input message
    cin >> s_amount;                                   //taking input 
    tax_amount=(s_amount*tax)/100;                    //calculating the tax
    t_amount=tax_amount+s_amount;                    //calculating the total 
    cout << "Sales amount::" << s_amount << endl;   //printing the sales amount
    cout << "Tax amount::" << tax_amount << endl;  //printing the tax amount 
    cout << "Total amount::" << t_amount << endl; //printing the total amount
    return 0;

}



    
    
    