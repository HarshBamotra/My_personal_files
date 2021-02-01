 //Program to find the maximum and minimum element in an array 
//AC-1216 Harsh Bamotra

#include <iostream>
using namespace std;

int main()

{

    double numbers[5] , num , sum=0;          //defining array and variables
    for(int i=0 ; i<5 ; i++)
    	{
        	cout << "Enter the numbers::";      //Taking array elements form the user
        	cin >> num;
        	numbers[i]=num;
		sum+=numbers[i];                //calculating the sum
    
    	}

    cout << "The array you entered::";
    for(int i=0 ; i<5 ; i++)
    	{
        	cout << numbers[i] << " ";        //Displaying the inputed array 
    	}  
		
    cout << endl;
    cout << "The sum of all the elements::" << sum;           //printing the sum
    return 0;

}

    