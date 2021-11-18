 //Harsh Bamotra AC-1216
//Program to implement non-preemptive priority sheduling algorithm

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class process
    {
	public:
	int BT , P;
	string name;
    };

bool compare(process a , process b)
	{
		if(a.P<b.P)
			return true;
		return false;
	}

void WaitingTime(process arr[] , int WT[] , int n)
	{
		WT[0]=0;
		for(int i=1 ; i<n ; i++)
			for(int j=0 ; j<i ; j++)
				WT[i]+=arr[j].BT;			
	}

void TurnAroundTime(process arr[] , int TT[] , int WT[] , int n)
	{
		for(int i=0 ; i<n ; i++)
			TT[i]=WT[i]+arr[i].BT;
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
			cout << "Enter process name ::";
			cin >> arr[i].name;
			cout << "Enter the burst time required ::";
			cin >> arr[i].BT;
			cout << "Enter the priority ::";
			cin >> arr[i].P;
		}

	sort(arr , arr+n , compare);			       //sorting the array according to priority
	WaitingTime(arr , WT , n);			      //calculating waiting time
	TurnAroundTime(arr , TT , WT , n);		     //calculating turn around time

	cout << endl << "**********************************************************************" << endl;
	cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn-Around Time " << endl;
	cout << endl << "**********************************************************************" << endl;        

	for(int i=0 ; i<n ; i++)
		{
			AvgWT+=WT[i];
			AvgTT+=TT[i];
			cout << " " << arr[i].name << "\t\t" << arr[i].BT << "\t\t" << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
		}
	cout << endl << "**********************************************************************" << endl;
	AvgWT=AvgWT/n;
	AvgTT=AvgTT/n;
	cout << "Average waiting time ::" << AvgWT << "ms" << endl;
	cout << "Average turn around time ::" << AvgTT << "ms" << endl;
	return 0;
    }