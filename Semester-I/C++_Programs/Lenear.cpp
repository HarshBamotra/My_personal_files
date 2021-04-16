 //Program to find the maximum and minimum element in an array 
//AC-1216 Harsh Bamotra

#include <iostream>
using namespace std;

int main()

{

    int numbers[5] , num , x , loc;
    bool flag=false;        
    for(int i=0 ; i<5 ; i++)
    	{
        	cout << "Enter the numbers::";      //Taking array elements form the user
        	cin >> num;
        	numbers[i]=num;
    	}

    cout << "The array you entered::";
    for(int i=0 ; i<5 ; i++)
    	{
        	cout << numbers[i] << " ";        //Displaying the inputed array 
    	}
    cout << endl;
    cout << "Enter the elemant you want to search for::"; 
    cin >> x;
    for(int i=0; i<5; i++)
    	{
		if(numbers[i]==x)
			{
				loc=i;
				flag=true;
			}
	}
    if(flag==true)
		{
			 cout << "The element " << x << " found at index::" << loc;
		}
    else
		{
			cout << "The element not found!!";
		}	
               
    return 0;

}
        

