  //Harsh Bamotra AC-1216
 //Program to randomly create a 6x6 array
//and create two arrays containing the diagnol elements

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//defining function for creating an array that contains the diognal elements from left to right

void diogl(int arr[6][6] , int arr1[6])          
	{
		
		for(int i=0 ; i<6 ; i++)
			{
				for(int j=0 ; j<6 ; j++)
					{
						if(i==j)    //checking for diognal elements             
							{
								arr1[i]=arr[i][j];   //inistialising the arr1 with the diognal elements
							}                           //from left to right

					}

			}
	}

//defining function for creating an array that contains the diognal elements from right to left

void diogr(int arr[6][6] , int arr1[6])
	{
		
		for(int i=0 ; i<6 ; i++)
			{
				for(int j=0 ; j<6 ; j++)
					{
						if(i+j==5)    //checking for diognal elements 
							{
								arr1[i]=arr[i][j];   //inistialising the arr1 with the diognal elements
							}			    //from right to left

					}

			}
	}

int main()
    {
	srand(time(0));                        //giving seed to rand() function
	int arr[6][6] , arr1[6] , arr2[6];    //defining variables and arrays
	for(int i=0 ; i<6 ; i++)
			{
				for(int j=0 ; j<6 ; j++)
					{
						arr[i][j]=(rand()%(200-100+1))+100;   //inistialing the array with random
					}					     //numbers from 100 to 199

			}

	cout << "The randomly generated 2D array::";
	for(int i=0 ; i<6 ; i++)
			{
				cout << endl;
				for(int j=0 ; j<6 ; j++)
					{
						cout << arr[i][j] << "  ";    //printing the 2D array 
					}
			}
	diogl(arr , arr1);              //calling function diogl 
	diogr(arr , arr2);	       //calling function diogr 

	cout << endl << "Diagonal elements from left to right::";
	for(int k=0 ; k<6 ; k++)
		{
			cout << arr1[k] << " ";          //printing the array containing diognal elements
		}					//from left to right

	cout << endl << "Diagonal elements from right to left::";
	for(int k=0 ; k<6 ; k++)
		{
			cout << arr2[k] << " ";          //printing the array containing diognal elements
		}					//form right to left
	
	return 0;
    }
	
		
							
