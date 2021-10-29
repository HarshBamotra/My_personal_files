 //Harsh Bamotra AC-1216
//Program to implement round robin algorithm

#include <iostream>
using namespace std;

void WaitingTime(int BT[] , int WT[] , int q , int n)
	{
		int t=0 , remBT[n];
		bool flag;
		for(int i=0 ; i<n ; i++)
			remBT[i]=BT[i];
		while(1)
			{
				flag = true;
				for(int i=0 ; i<n ; i++)
					{
						if(remBT[i]>0)
							{
								flag=false;
								if(remBT[i]>q)
									{	
										t+=q;
										remBT[i]-=q;
									}
								else
									{
										t+=remBT[i];
										WT[i]=t-BT[i];
										remBT[i]=0;
									}
							}
					}
				if(flag==true)
					break;
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
	int n , q;
	float AvgWT=0 , AvgTT=0;
	cout << "Enter the number of procceses ::";
	cin >> n;
	cout << "Enter the quantum time ::";
	cin >> q;

	int BT[n] , WT[n] , TT[n];
	cout << endl << "*******************************************" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cout << "Enter the burst time of proccess " << (i+1) << " ::";
			cin >> BT[i];
			WT[i]=0;
		}

	WaitingTime(BT , WT , q , n);
	TurnTime(TT , BT , WT , n);

	cout << endl << "******************************************************" << endl;
	cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn-Around Time " << endl;
	cout << endl << "******************************************************" << endl;

	for(int i=0 ; i<n ; i++)
		{
			AvgWT+=WT[i];
			AvgTT+=TT[i];
			cout << " " << i+1 << "\t\t" << BT[i] << "\t  " << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
		}
	cout << endl << "******************************************************" << endl;
	AvgWT=AvgWT/n;
	AvgTT=AvgTT/n;
	cout << "Average waiting time ::" << AvgWT << "ms" << endl;
	cout << "Average turn around time ::" << AvgTT << "ms" << endl;
	
	return 0;
    } 