 //Harsh Bamotra AC-1216
//Program to weather an expression is a well formed formula or not

#include <iostream>
#include <stack>
#include<cstring>
using namespace std;

bool isBalancedExp(string exp) 
    {
	stack<char> stk;
	char x;
	for (int i=0; i<exp.length(); i++) 
		{
      			if (exp[i]=='('||exp[i]=='['||exp[i]=='{') 
				{
         				stk.push(exp[i]);
         				continue;
      				}
      			if (stk.empty())
      				return false;
      			switch (exp[i])
				{
         				case ')':
         					x = stk.top();
         					stk.pop();
         					if (x=='{' || x=='[')
         						return false;
         					break;

         				case '}':
         					x = stk.top();
         					stk.pop();
         					if (x=='(' || x=='[')
         						return false;
      						break;

      					case ']':
         					x = stk.top();
         					stk.pop();
         					if (x =='(' || x == '{')
         						return false;
         					break;
      				}
   		}
   	return (stk.empty());
    }
int main() 
    {
	string expresion ; 
	bool chk = true ; 
	cout << "************ Instructions ************" << endl;
	cout << "1. Please enter the expression in capitals." << endl;
	cout << "2. There should be no space between the letter." << endl;
	cout << "3. The expression should have atleast one pair of brackerts." << endl;
	cout << "4. The symbols associated should be : " << endl; 
	cout << "Conjunction : &" << endl << "Disjunction : |" << endl << "Biconditional : > \n Negation : ~ ";
	cout<<"\nEnter the expression : " ; 
	getline(cin,expresion) ;
   	if (isBalancedExp(expresion))
        	cout << "This Expression has balanced brackets";
   	else
		{
			cout << "This Expression does not have balanced brackets"; 
			exit(0) ;
		}
	for (int i=0; i<expresion.length(); i++)
		{	
			if((isdigit(expresion[i])) || (expresion[i] == ' ') )
				{
					cout<<"\nThe expression cannot contain a number or a space !! " ; 
					exit(0) ; 
				}
		}
	for (int i=0; i<expresion.length(); i++)
		{
			if(isupper(expresion[i]))
				{
					if((expresion[i-1] == '&')||(expresion[i-1] == '|')||(expresion[i-1] == '>')||(expresion[i-1] == '~' )||(expresion[i-1] =='(' )|| (expresion[i-1] == ')' )|| (expresion[i-1] == '[' )|| (expresion[i-1] == ']' )|| (expresion[i-1] == '{' )|| (expresion[i-1] == '}' ) )
						{
							continue ; 
						}	
					else
						{
							cout<<"\nWRong no. of inputs !! " ; 
							exit ( 0 ) ;
							chk = false ; 
						}
				}
		}
	if(chk)
		{
			cout<<"\nThe given expression is a well formed formula " ; 
		}
	else
		{
			cout<<"\nThe given expression is not a well formed formula " ; 
		}
	return 0 ; 
}