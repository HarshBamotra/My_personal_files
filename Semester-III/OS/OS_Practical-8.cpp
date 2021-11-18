 //Harsh Bamotra AC-1216
//Program to implement SJF algorithm

#include <iostream>
using namespace std;

class process
    {
	public:
	string name;
	int bt;
    };

void sort(process BT[] , int n)
	{
		process temp;
		for(int i=0 ; i<n-1 ; i++)
			{
				for(int j=0 ; j<n-i-1 ; j++)
					{
						if(BT[j].bt>BT[j+1].bt)
							{
								temp=BT[j];
								BT[j]=BT[j+1];
								BT[j+1]=temp;
							}
					}
			}
								
	}

void WaitingTime(process BT[] , int WT[] , int n)
	{
		for(int i=1 ; i<n ; i++)
			{
				for(int j=0 ; j<i ; j++)
					{
						WT[i]+=BT[j].bt;
					}	
			}
	}

void TurnTime(int TT[] , process BT[] , int WT[] , int n)
	{
		for(int i=0 ; i<n ; i++)
			{
				TT[i]=WT[i]+BT[i].bt;
			}
	}


int main()
    {
	int n;
	float AvgWT=0 , AvgTT=0;
	cout << "Enter the number of procceses ::";
	cin >> n;

	process BT[n];
	int WT[n] , TT[n];
	cout << endl << "*******************************************" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cout << "Enter the process name ::";
			cin >> BT[i].name;
			cout << "Enter the burst time ::";
			cin >> BT[i].bt;
			WT[i]=0;
			cout << endl << endl;
		}
	sort(BT , n);
	WaitingTime(BT , WT , n);
	TurnTime(TT , BT , WT , n);

	cout << "Order in which process gets executed ::";
	for(int i=0 ; i<n ; i++)
		cout << BT[i].name << " ";
 
	cout << endl << "**********************************************************************" << endl;
	cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn-Around Time " << endl;
	cout << endl << "**********************************************************************" << endl;        

	for(int i=0 ; i<n ; i++)
		{
			AvgWT+=WT[i];
			AvgTT+=TT[i];
			cout << " " << BT[i].name << "\t\t" << BT[i].bt << "\t\t" << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
		}
	cout << endl << "**********************************************************************" << endl;
	AvgWT=AvgWT/n;
	AvgTT=AvgTT/n;
	cout << "Average waiting time ::" << AvgWT << "ms" << endl;
	cout << "Average turn around time ::" << AvgTT << "ms" << endl;
	
	return 0;
    } 