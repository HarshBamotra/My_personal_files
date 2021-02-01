//Program to make a simple calculator without using functions

#include <iostream>
using namespace std;

int main()

{

    int a , b , sum , diff , product , division , modula;
    cout << "Enter the first number::";
    cin >> a;
    cout << "Enter the second number::";
    cin >> b;
    sum=a+b;
    diff=a-b;
    product=a*b;
    division=a/b;
    modula=a%b;
    cout << "The sum of the inputed numbers::" << sum << endl;
    cout << "The difference of the inputed numbers::" << diff << endl;
    cout << "The product of the inputed numbers::" << product << endl;
    cout << "The division of the inputed numbers::" << division << endl;
    cout << "The modula of the inputed numbers::" << modula << endl;
    return 0;

}
    
    
    
    

    

    
    