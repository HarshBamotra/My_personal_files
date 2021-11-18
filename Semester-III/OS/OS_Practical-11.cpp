 //Harsh Bamotra AC-1216
//Program to implement SRJF algorithm

#include <iostream>
using namespace std;

class process
    {
	public:
	string name;
	int bt , at;
    };

void WaitingTime(process BT[] , int WT[] , int n)
	{
		int t=0 , min=0 , com=0 , CT , minVal=INT_MAX;
		bool flag=false;
		int remBT[n];
		for(int i=0 ; i<n ; i++)
			remBT[i]=BT[i].bt;

		while(com!=n)
			{
				for(int i=0 ; i<n ; i++)
					if(BT[i].at<=t && (remBT[i] < minVal && remBT[i]>0))
						{
							minVal=remBT[i];
							min=i;
							flag=true;
						}

				if (flag == false) 
					{
           					t++;
            					continue;
        				}

				remBT[min]--;
				minVal = remBT[min];
        			if (minVal == 0)
            				minVal = INT_MAX;

				if(remBT[min]==0)
					{
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
		for(int i=0 ; i<n ; i++)
			TT[i]=BT[i].bt+WT[i];
	}

int main()
    {
	int n;
	float AvgWT=0 , AvgTT=0;
	cout << "Enter the number of procceses ::";
	cin >> n;

	int WT[n] , TT[n];
	process  BT[n];
	cout << endl << "*******************************************" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cout << "Enter the process name ::";
			cin >> BT[i].name;
			cout << "Enter the burst time ::";
			cin >> BT[i].bt;
			cout << "Enter the arrival time ::";
			cin >> BT[i].at;
			WT[i]=0;
			cout << endl << endl;
		}

	WaitingTime(BT , WT , n);
	TurnAroundTime(BT , WT , TT , n);

	cout << endl << "******************************************************" << endl;
	cout << "Processes " << " Burst Time " << " Waiting Time " << " Turn-Around Time " << endl;
	cout << endl << "******************************************************" << endl;

	for(int i=0 ; i<n ; i++)
		{
			AvgWT+=WT[i];
			AvgTT+=TT[i];
			cout << " " << BT[i].name << "\t\t" << BT[i].bt << "\t  " << WT[i] << "\t\t " << TT[i]  <<  "\t\t " << endl;
		}
	cout << endl << "******************************************************" << endl;
	AvgWT=AvgWT/n;
	AvgTT=AvgTT/n;
	cout << "Average waiting time ::" << AvgWT << "ms" << endl;
	cout << "Average turn around time ::" << AvgTT << "ms" << endl;
	
	return 0;
    } 