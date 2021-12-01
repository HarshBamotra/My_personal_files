 //Harsh Bamotra AC-1216
//Program to implement pre-emptive priority scheduling

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class process
	{
		public:
		string PID;
		int AT , BT , P;
	};

bool compare(process a , process b)
	{
		if(a.P==b.P)			
			return (a.AT<b.AT);
		else
			return (a.P<b.P);
	}

void TurnAroundTime(process arr[] , int TT[] , int n)
	{
		int completed=0 , t=0 , remBT[n];
		for(int i=0 ; i<n ; i++)
			remBT[i]=arr[i].BT;
		
		while(completed!=n)
			{
				for(int i=0 ; i<n ; i++)	
					{
						if(remBT[i]>0 && arr[i].AT<t)
							{
								remBT[i]--;
								if(remBT[i]==0)
									{
										completed++;
										TT[i]=t-arr[i].AT;
									}
								break;
							}
					}
				t++;
			} 
	}

void WaitingTime(process arr[] , int TT[] , int WT[] , int n)
	{
		for(int i=0 ; i<n ; i++)
			WT[i]=TT[i]-arr[i].BT;
	}
								
int main()
    {
	int n;
	double AvgWT=0 , AvgTT=0;
	cout << "Enter the number of processes ::";
	cin >> n;

	process arr[n];
	int WT[n] , TT[n];
	
	for(int i=0 ; i<n ; i++)
		{
			cout << endl << "*******************************************" << endl;
			WT[i]=0;
			cout << "Enter process ID ::";
			cin >> arr[i].PID;
			cout << "Enter the arrival time ::";
			cin >> arr[i].AT;
			cout << "Enter the burst time required ::";
			cin >> arr[i].BT;
			cout << "Enter the priority ::";
			cin >> arr[i].P;
		}

	sort(arr , arr+n , compare);			       //sorting the array according to priority
	TurnAroundTime(arr , TT , n);		      //calculating turn around time
	WaitingTime(arr , TT , WT , n);			     //calculating waiting time

	cout << endl << "*******************************************************************************" << endl;
	cout << "Processes " << "  Burst Time  " << "  Arrival Time  " << "  Waiting Time  " << "  Turn-Around Time  " << endl;
	cout << endl << "*******************************************************************************" << endl;        

	for(int i=0 ; i<n ; i++)
		{
			AvgWT+=WT[i];
			AvgTT+=TT[i];
			cout << " " << arr[i].PID << "\t\t" << arr[i].BT << "\t\t" << arr[i].AT << "\t\t" << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
		}
	cout << endl << "*******************************************************************************" << endl;
	AvgWT=AvgWT/n;
	AvgTT=AvgTT/n;
	cout << "Average waiting time ::" << AvgWT << "ms" << endl;
	cout << "Average turn around time ::" << AvgTT << "ms" << endl;
	return 0;
    }