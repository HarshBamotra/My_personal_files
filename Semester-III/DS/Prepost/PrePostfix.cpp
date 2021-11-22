 //Harsh Bamotra AC-1216
//Program to evaluate prefix/postfix expression using stack

#include <iostream>
#include "AStack.h"

int pow(int i , int j)
	{
		if(j==0)
			return 1;
		else 
			return i*pow(i , j-1);
	}

int prefix(string s)			
	{
		stack <int> st(s.length());
		int op1 , op2;
		for(int i=s.length()-1 ; i>=0 ; i--)
			{
				if(s[i]>='0' && s[i]<='9')
					st.push(s[i]-'0');
				else 
					{
						op1=st.pop();
						op2=st.pop();
						
						switch(s[i])
							{
								case '+':
								st.push(op1+op2);
								break;
			
								case '-':
								st.push(op1-op2);
								break;
		
								case '*':
								st.push(op1*op2);
								break;
			
								case '/':
								st.push(op1/op2);
								break;
			
								case '^':
								st.push(pow(op1 , op2));
								break;
		
								default:
								cout << "Error in expression !!" << endl;
								break;
							}
					}
			}
		return st.topElement();
	}

int postfix(string s)			
	{
		stack <int> st(s.length());
		int op1 , op2;
		for(int i=0 ; i<s.length() ; i++)
			{
				if(s[i]>='0' && s[i]<='9')
					st.push(s[i]-'0');
				else 
					{
						op1=st.pop();
						op2=st.pop();
						
						switch(s[i])
							{
								case '+':
								st.push(op1+op2);
								break;
			
								case '-':
								st.push(op2-op1);
								break;
		
								case '*':
								st.push(op1*op2);
								break;
			
								case '/':
								st.push(op2/op1);
								break;
			
								case '^':
								st.push(pow(op2 , op1));
								break;
		
								default:
								cout << "Error in expression !!" << endl;
								break;
							}
					}
			}
		return st.topElement();
	}
								
int main()
    {
	char c='y';
	string s;
	int ch;
	while(c=='y' || c=='Y')
		{
			cout << "Enter an expression ::";
			cin >> s;
			cout << "*************** Menu ***************" << endl;
			cout << "1. Prefix" << endl << "2. Postfix" << endl;
			cout << "************************************" << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			if(ch==1)
				cout << "Result ::" << prefix(s) << endl;
			else if(ch==2)
				cout << "Result ::" << postfix(s) << endl;
			else
				cout << "Please enter a valid input !!" << endl;
			
			cout << endl << "Do you want to continue (Y/N)::";
			cin >> c;
			cout << endl;
		}	
	return 0;
    }