 //Harsh Bamotra AC-1216
//Program to implement first fit , best fit and worst fit disk managment algo

#include <iostream>
using namespace std;

void FirstFit(int ProSize[] , int BloSize[] , int Alloc[] , int b , int p)
	{
		for(int i=0 ; i<p ; i++)
			for(int j=0 ; j<b ; j++)
				if(ProSize[i]<=BloSize[j])
					{
						Alloc[i]=j;
						BloSize[j]-=ProSize[i];
						break;
					}	
	}

void BestFit(int ProSize[] , int BloSize[] , int Alloc[] , int b , int p)
	{
		
		for(int i=0 ; i<p ; i++)
			{
				int min=-1;
				for(int j=0 ; j<b ; j++)
					{
						if(ProSize[i]<=BloSize[j])
							{
								if(min==-1)
									min=j;
								else if(BloSize[j]<BloSize[min])
									min=j;
								else {}
							}
					}
				if(min!=-1)
					{
						Alloc[i]=min;
						BloSize[min]-=ProSize[i];
					}
			}
	}

void WorstFit(int ProSize[] , int BloSize[] , int Alloc[] , int b , int p)
	{
		for(int i=0 ; i<p ; i++)
			{
				int max=-1;
				for(int j=0 ; j<b ; j++)
					{
						if(ProSize[i]<=BloSize[j])
							{
								if(max==-1)
									max=j;
								else if(BloSize[j]>BloSize[max])
									max=j;
							}
					}
				if(max!=-1)
					{
						Alloc[i]=max;
						BloSize[max]-=ProSize[i];
					}
			}
	}

void Display(int ProSize[] , int Alloc[] , int p)
    {
	cout << endl << "Process\tProcess Size\tBlock allocated" << endl;
    	for (int i=0; i<p ; i++)
    		{
        		cout << "   " << i+1 << "\t\t" << ProSize[i] << "\t\t";
        		if (Alloc[i] != -1)
            			cout << Alloc[i] + 1;
        		else
        			cout << "Not Allocated";
        		cout << endl;
   		 }
    }

int main()
    {
	string c="y";
	int p , b , ch;
	while(c=="y" || c=="Y")
		{
			cout << "Enter the number of processes ::";
			cin >> p;
			cout << "Enter the number of memory blocks ::";
			cin >> b;
			int ProSize[p] , Alloc[p] , BloSize[b];
			for(int i=0 ; i<p ; i++)
				{
					cout << "Enter size of process " << i+1 << " ::";
					cin >> ProSize[i];
					Alloc[i]=-1;
				}
			cout << endl << endl;
			for(int i=0 ; i<b ; i++)
				{
					cout << "Enter the size of block " << i+1 << " ::";
					cin >> BloSize[i];
				}

			cout << "************ Menu *************" << endl;
			cout << "1. First Fit" << endl << "2. Best Fit" << endl;
			cout << "3. Worst Fit" << endl << "4. Exit" << endl;
			cout << "*******************************" << endl;
			cout << "Enter your choice ::";
			cin >> ch;
			
			if(ch==1)
				{
					FirstFit(ProSize , BloSize , Alloc , b , p);
					Display(ProSize , Alloc , p);
				}
			else if(ch==2)
				{
					BestFit(ProSize , BloSize , Alloc , b , p);
					Display(ProSize , Alloc , p);
				}
			else if(ch==3)
				{
					WorstFit(ProSize , BloSize , Alloc , b , p);
					Display(ProSize , Alloc , p);
				}
			else
				cout << "Please enter a valid input !!" << endl;
	
			cout << "Do you want to continue (Y/N)::";
			cin >> c;
		}
				
			
	return 0;
    } 