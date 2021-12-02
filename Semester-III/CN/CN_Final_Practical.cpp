 //Harsh Bamotra AC-1216
//Program to implement Sliding window selective repeat protocol

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define TOT_FRAMES 500
#define FRAMES_SEND 10
using namespace std;

class SelectiveRepeat
    {
	public:
	int fr_send_at_instance , sw , rw;
	int arr[TOT_FRAMES] , send[FRAMES_SEND] , rcvd[FRAMES_SEND];
	char rcvd_ack[FRAMES_SEND];   
   
	void sender(int m)
		{
			for(int i=0 ; i <fr_send_at_instance ; i++)
				{
					if(rcvd_ack[i]=='n')
						cout << "SENDER: Frame " << send[i] << " is sent." << endl;
				}
			receiver(m);
		}

	void receiver(int m)
		{
			time_t t;
			int f , j , f1 , a1;
			char ch;
			srand((unsigned)time(&t));
			for(int i=0 ; i<fr_send_at_instance ; i++)
				{
					if(rcvd_ack[i]=='n')
						{
							f=rand()%10;

							if(f!=5)
								{
									for(int j=0 ; j<fr_send_at_instance ; j++)
										if(rcvd[j]==send[i])
											{
												cout << endl << "RECIEVER: Frame " <<rcvd[j] << " Recieved correctly." << endl;
												rcvd[j]=arr[rw];
												rw=(rw+1)%m;
												break;
											}
									int j;
									if(j==fr_send_at_instance)
										cout << endl << "RECIEVER: Duplicate Frame " << send[i] << "discarded." << endl;

									a1=rand()%5;
		
									if(a1==3)
										{
											cout << "(Acknowledgement " << send[i] << " lost!)" << endl;
											cout << "(Sender Timeouts-->Resend the frame...)" << endl;
											rcvd_ack[i]='n';
										}
									else
										{
											cout << "(Acknowledgement " << send[i] << " Recieved!!)" << endl;
											rcvd_ack[i]='p';
										}
								}
							else
								{
									int ld=rand()%2;
	
									if(ld==0)
										{
											cout << endl << "Receiver Side: Frame " << send[i] << " is damaged!!" << endl;
											cout << endl << "Receiver Side: Negative Acknowledgement " << send[i] << " sent." << endl;
										}
									else
										{
											cout << endl << "Frame Receiver Side: " << send[i] << " is lost!" << endl;
											cout << endl << "(Sender Timeout-------->Please Resend the Frame...)" << endl;
										}
									rcvd_ack[i]='n';
								}
						}
				}

		for(int j=0 ; j<fr_send_at_instance ; j++)
			{
				if(rcvd_ack[j]=='n')
				break;
			}

		int i=0;
		for(int k=j ; k<fr_send_at_instance ; k++)
			{
				send[i]=send[k];
				if(rcvd_ack[k]=='n')
					rcvd_ack[i]='n';
				else
					rcvd_ack[i]='p';
				i++;
			}

		if(i!=fr_send_at_instance)
			{
				for(int k=i;k<fr_send_at_instance;k++)
					{
						send[k]=arr[sw];
						sw=(sw+1)%m;
						rcvd_ack[k]='n';
					}
			}

		cout << endl << "Do You Want to Continue ? (Y/N)::";
		cin >> ch;
		cout << endl;

		if(ch=='y' || ch=='Y')
			sender(m);
		else
			exit(0);
	}
    };

int main()
    {
	SelectiveRepeat SR;
	int n , m , i;     

	cout << endl << "Enter number of bits for sequence no. ::";
	cin >> n;

	m=pow(2,n);
	int t=0;
	SR.fr_send_at_instance=(m/2);

	for(i=0 ; i<TOT_FRAMES ; i++)
		{
			SR.arr[i]=t;
			t=(t+1)%m;
		}

	for(i=0 ; i<SR.fr_send_at_instance ; i++)
		{
			SR.send[i]=SR.arr[i];
			SR.rcvd[i]=SR.arr[i];
			SR.rcvd_ack[i]='n';
		}

	SR.rw=SR.sw=SR.fr_send_at_instance;
	SR.sender(m);
    }

