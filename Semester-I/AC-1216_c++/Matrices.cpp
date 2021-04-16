#include <iostream>
using namespace std;

void sum(int arr1[3][3] , int arr2[3][3] , int arr3[3][3])
    {
	for(int row=0 ; row<3 ; row++)
		{
			for(int col=0 ; col<3 ; col++)
				{
					arr3[row][col]=arr1[row][col]+arr2[row][col];     //definning function sum 
				}                                                        
		}
    }

void sub(int arr1[3][3] , int arr2[3][3] , int arr3[3][3])
    {
	for(int row=0 ; row<3 ; row++)
		{
			for(int col=0 ; col<3 ; col++)
				{
					arr3[row][col]=arr1[row][col]-arr2[row][col];     //definning function sub for subtracting
				}                                                        
		}
    }

void product(int arr1[3][3] , int arr2[3][3] , int arr3[3][3])
    {
	for(int row=0 ; row<3 ; row++)
		{
			for(int col=0 ; col<3 ; col++)
				{
					for(int i=0 ; i<3 ;i++)
						{
							arr3[row][col]+=arr1[row][i]*arr2[i][col];        //definning function product
						}
				}                                                        
		}
    }

void trans(int arr1[3][3] , int arr3[3][3])
    {
	for(int row=0 ; row<3 ; row++)
		{
			for(int col=0 ; col<3 ; col++)
				{
					arr3[col][row]=arr1[row][col];       //definning function trans for transpose
				}                                                        
		}
    }



int main()

{
    
int z;
bool choice=true , print=true;
while(choice)
    {
        int arr1[3][3] , arr2[3][3] , arr3[3][3] , row ,col , y;       //declaring variables and arrays
cout << "Enter the first matrices::";
for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cin >> arr1[row][col];      //taking the first array from the user
			}
	}


cout << "Enter the second matrices::";
for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cin >> arr2[row][col];     //taking the second array from the user
			} 
	}

for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				arr3[row][col]=0;    //inistilising arr3 to 0
			} 
	}


int x;	
cout << "******************************************************************" << endl;
cout << "1.Sum" << endl << "2.Product" << endl << "3.Transpose" << endl << "4.Subracting" << endl ;                    //printing the menu 
cout << "******************************************************************" << endl;
cout << "Enter your choice(1 , 2 or 3)::";
cin >> x;                                                                                 //taking user input for choices
if(x==1)
    {
	sum(arr1 , arr2 , arr3);               //calculating sum and putting it in arr3
    }
else if(x==2)
    {
	product(arr1 , arr2 , arr3);            //calculating product putting it in arr3
    }
else if(x==3)
    {
	cout << "******************************************************************" << endl;
	cout << "Which array you want to transpose (1 or 2)::";
	cin >> y;
	if(y==1)
	    {
	        trans(arr1 , arr3);
	    }
	else if(y==2)
	    {
	        trans(arr2 , arr3);              //doing transpose and putting it in arr3
	    }
	else
	    {
	        cout << "Wrong Input!!" << endl ;          //checking for exeption 
		print=false;
	    }
    }
else if(x==4)
    {
	sub(arr1 , arr2 , arr3);
    }

else
	{
		cout << "Wrong Input!!" << endl;
		print=false;
	}

if(print==true)
{
	for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<3 ; col++)
			{
				cout << arr3[row][col] << " ";     //printing the final result
			}
		cout << endl; 
	}
}


cout << "******************************************************************" << endl;
cout << "Do yow want to continue (1 for Yes)::";
cin >> z;
if(z==1)
    {
        continue;   
    }
else
    {
        cout << "Thank You :) ";
        break;
    }

return 0;
    }
}


	






