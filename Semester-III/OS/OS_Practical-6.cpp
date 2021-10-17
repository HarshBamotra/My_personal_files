 //Harsh Bamotra AC-1216
//Program to calculate avg waiting and turnaround time using FCFS

#include <iostream>
using namespace std;

void WaitingTime(int BT[] , int WT[] , int n)
	{
		for(int i=1 ; i<n ; i++)
			{
				for(int j=0 ; j<i ; j++)
					{
						WT[i]+=BT[j];
					}	
			}
	}

void TurnTime(int TT[] , int BT[] , int WT[] , int n)
	{
		for(int i=0 ; i<n ; i++)
			{
				TT[i]=WT[i]+BT[i];
			}
	}


int main()
    {
	int n;
	float AvgWT=0 , AvgTT=0;
	cout << "Enter the number of procceses ::";
	cin >> n;

	int BT[n] , WT[n] , TT[n];
	cout << endl << "*******************************************" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cout << "Enter the burst time of proccess " << (i+1) << " ::";
			cin >> BT[i];
			WT[i]=0;
		}

	WaitingTime(BT , WT , n);
	TurnTime(TT , BT , WT , n);

	cout << endl << "**********************************************************************" << endl;
	cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn-Around Time " << endl;
	cout << endl << "**********************************************************************" << endl;        

	for(int i=0 ; i<n ; i++)
		{
			AvgWT+=WT[i];
			AvgTT+=TT[i];
			cout << " " << i+1 << "\t\t" << BT[i] << "\t\t" << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
		}
	cout << endl << "**********************************************************************" << endl;
	AvgWT=AvgWT/n;
	AvgTT=AvgTT/n;
	cout << "Average waiting time ::" << AvgWT << "ms" << endl;
	cout << "Average turn around time ::" << AvgTT << "ms" << endl;
	
	return 0;
    } 