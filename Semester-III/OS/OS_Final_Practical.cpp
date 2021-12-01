  //Harsh Bamotra AC-1216
 //Program to create a parent process whick will show memory details 
//and child process implements SRJF

#include <iostream>
#include <sys/wait.h>
#include <sys/types.h>		  //inlcuded to use pid_t data type
#include <unistd.h>		 //included to use fork() command
#include <climits>		//Used to define INT_Max 
using namespace std;

class process		  //creating process class for SRJF
    {
	public:
	string name;	 //name for process ID/name
	int bt , at;	//bt=burst time and at=arrival time
    };

void PrintMemoryDetails()		//function to print memory details
	{
		cout << "************ Memory status using vmstat command ************" << endl;

		cout << "Configured Memory ::" << endl;
		system("vmstat -s | grep 'total memory'");	//command to get total memory
	
		cout << "Used Memory ::" << endl;
		system("vmstat -s | grep 'used memory'");	//command to get used memory

		cout << "Free Memory ::" << endl;
		system("vmstat -s | grep 'free memory'");	//command to get free memory

		cout << "************************************************************" << endl << endl;
	}

void WaitingTime(process BT[] , int WT[] , int n)		//function for SRJF 
	{
		int t=0 , min=0 , com=0 , CT , minVal=INT_MAX;
		bool flag=false;				 //defining variables
		int remBT[n];					//remBT=remaining burst time
		for(int i=0 ; i<n ; i++)
			remBT[i]=BT[i].bt;		// initislising remBT with Burst times

		while(com!=n)				//itrating until all process are not completed
			{
				for(int i=0 ; i<n ; i++)
					if(BT[i].at<=t && (remBT[i] < minVal && remBT[i]>0))
						{
							minVal=remBT[i];
							min=i;
							flag=true;		//finding process with minimun remaining time
						}

				if (flag == false) 	//if found then going forward 
					{
           					t++;		//incrementing time
            					continue;
        				}

				remBT[min]--;			//giving cpu to process
				minVal = remBT[min];	
        			if (minVal == 0)		 //if process completed then 
            				minVal = INT_MAX;	//reinitialising minval

				if(remBT[min]==0)		 //if process completed then
					{			//then calculating Waiting time
						com++;
						flag=false;
						CT=t+1;
						WT[min]=CT-BT[min].at-BT[min].bt;
						remBT[min]=0;
						if (WT[min] < 0)
                					WT[min] = 0;
					}
				t++;
			}
	}

void TurnAroundTime(process BT[] , int WT[] , int TT[] , int n)
	{					
		for(int i=0 ; i<n ; i++)		 //calculating Turn around time
			TT[i]=BT[i].bt+WT[i];		//Turnaround time = burst + waiting time
	}

void SRJF()			//final function to implement SRJF
	{
		int n;				//defining variables
		float AvgWT=0 , AvgTT=0;
		cout << "Enter the number of procceses ::";
		cin >> n;					//taking number of processes

		int WT[n] , TT[n];
		process  BT[n];
		cout << endl << "*******************************************" << endl;
		for(int i=0 ; i<n ; i++)		
			{							
				cout << "Enter the process name ::";
				cin >> BT[i].name;			//taking process name/ID
				cout << "Enter the burst time ::";
				cin >> BT[i].bt;			//taking burst time
				cout << "Enter the arrival time ::";
				cin >> BT[i].at;			//taking arrival time
				WT[i]=0;
				cout << endl << endl;
			}	

		WaitingTime(BT , WT , n);		 //calculating waiting time
		TurnAroundTime(BT , WT , TT , n);	//calculating turnaround time

		cout << endl << "******************************************************" << endl;
		cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn-Around Time " << endl;
		cout << endl << "******************************************************" << endl;

		for(int i=0 ; i<n ; i++)
			{
				AvgWT+=WT[i];		//calculating Average waiting and turnaround time
				AvgTT+=TT[i];
				cout << " " << BT[i].name << "\t\t" << BT[i].bt << "\t  " << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
			}
		cout << endl << "******************************************************" << endl;
		AvgWT=AvgWT/n;
		AvgTT=AvgTT/n;
		cout << "Average waiting time ::" << AvgWT << "ms" << endl;
		cout << "Average turn around time ::" << AvgTT << "ms" << endl;
		cout << endl << endl << endl << endl;
	}

int main()
    {
	pid_t pid;
	pid=fork();
	if(pid<0)			//checking for fork errors
		{		
			cout << "Fork Failed !!"<< endl;
			return 1;
		}
	else if(pid==0)				 //child proess
		SRJF();				//calling SRJF function
	else 
		{	
			wait(NULL);			 //waiting for child process to complete
			PrintMemoryDetails();		//parent process
		}

	return 0;
    }



