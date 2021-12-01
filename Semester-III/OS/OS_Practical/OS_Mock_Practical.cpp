 //Harsh Bamotra AC-1216
//Program to implement preemetive and non-preemetive priority scheduling algorithm 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class process
    {
	public:
	int BT , P , AT;
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

void NonPreemetive(process arr[] , int TT[] , int WT[] , int n)
	{
		sort(arr , arr+n , compare);			       
		WaitingTime(arr , WT , n);			      
		TurnAroundTime(arr , TT , WT , n);		     
	}

void Preemetive(int p[] , int WT[] , int TT[] , int BT[] , int AT[] , int CT[] , int n)
    {
	int temp[10] , time , smallest , count=0 , end;
	for(int i=0 ; i<n ; i++)		
        	temp[i]=BT[i];

	p[9]=-1;
    	for(time=0 ; count!=n ; time++)	
    		{
        		smallest=9;
        		for(int i=0; i<n; i++)	
        			{		
            				if(AT[i]<=time && p[i]>p[smallest] && temp[i]>0 )
                				smallest=i;
        			}
        		temp[smallest]--;		

        		if(temp[smallest]==0)	
        			{
            				count++;
            				end=time+1;
            				CT[smallest] = end;
            				WT[smallest] = end - AT[smallest] - BT[smallest];
            				TT[smallest] = end - AT[smallest];
        			}
    		}
    }

int main()
    {
	int n , ch;
	double AvgWT=0 , AvgTT=0;
	cout << "Enter the number of processes ::";
	cin >> n;

	cout << "*************** Menu ***************" << endl;
	cout << "1. Non-Preemetive" << endl << "2. Preemetive" << endl;
	cout << "************************************" << endl;
	cout << "Enter your choice ::";
	cin >> ch;				

	if(ch==1)
		{
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
			NonPreemetive(arr , TT , WT , n);
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
		}
	else if(ch==2)
		{
			int a[10] , b[10];				 
    			int waiting[10] , turnaround[10] , completion[10] , p[10];     
    			int i , j , end;				     
	
    			for(i=0 ; i<n ; i++)			
    				{			
					cout<<"*************************************" << endl << endl;
		
					cout << "Enter arrival time of process " << i+1 << " ::";
    					cin >> a[i];
		
					cout << "Enter burst time of process " << i+1 << " ::";
					cin>>b[i];

					cout << "Enter priority of process "<< i+1 << "::";
					cin >> p[i]; 	   
    				}

			Preemetive(p , waiting , turnaround , b , a , completion , n);
			cout<<"************************************************************************************"<<endl;
    			cout<<"Process"<<"\t"<< "   Burst Time"<<"\t"<<"Arrival Time" <<"      "<<"Waiting Time" <<"\t"<<"Turnaround Time"<< "\t\t"<<"Priority"<<endl;
    			for(i=0; i<n; i++)
    				{
        				cout<<"   "<<i+1<<"\t\t"<<b[i]<<"\t\t"<<a[i]<<"\t\t"<<waiting[i]<<"\t\t"<<turnaround[i]<<"\t\t"<<p[i]<<endl;
        				AvgWT = AvgWT + waiting[i];
        				AvgTT = AvgTT + turnaround[i];
    				}
    			cout<<"**************************************************************************************"<<endl;

    			cout << "\n\nAverage waiting time =" << AvgWT/n <<endl;
    			cout << "Average Turnaround time =" << AvgTT/n <<endl;
			
		}
	else 
		cout << "Wrong input !! Exiting !!" << endl;
	return 0;
    }