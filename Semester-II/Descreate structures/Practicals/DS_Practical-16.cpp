 //Harsh Bamotra AC-1216
//Program to check weather a graph is complete or not

#include<iostream>
using namespace std;

int main()
    {
	char choice;
    	int v , flag=0 , q;
    	cout << "Enter the number of vertices ::";
    	cin >> v;
    	int ar[v][v];
    	for(int i=0;i<v;i++)
    		{
        		for(int j=0;j<v;j++)
        			{
        			    cout << "\n How many edge from " << (char)(97+i) << " to " << (char)(97+j) << " :: ";
        			    cin >> ar[i][j];
        			}
    		}

    	cout << "The adjancy matrix of the graph is :: \n";
    	for(int k=0;k<v;k++)
    		{
        		cout << endl;
        		for(int l=0;l<v;l++)
        			cout << ar[k][l] << " ";
    		}

    	for(int p=0;p<v;p++)
    		{
        		cout << endl;
        		for(int q=0;q<v;q++)
        			{
        			    if((p!=q) && (p<q))
        				    {
                				if(ar[p][q]!=1)
                					{
                					    flag=1;
                					    break;
                					}
            				    }
        			}
    		}

    	if(flag==1)
    		{
        		cout << "It's not a complete graph !!\n";
    		}
    	else
    		{
        		cout << "It's a complete graph !!\n";
    		}
    }