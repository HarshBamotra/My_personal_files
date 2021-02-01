#include <iostream>
#include <math.h>
using namespace std;

int main()

{
    double n , y=0;
    cout << "Enter the number of terms::";     //taking the number of terms from the user
    cin >> n;
    for(int i=1 ; i<n+1 ; i++)
	{	
		if(i%2==0)
			{
				y-=1/pow(i,i); 
			}
		else                                //calculating the sum upto n terms
			{
				y+=1/pow(i,i);
			}
	}
    
    cout << "The sum upto " << n << " terms::" << y;      //printing the final result
    return 0;
}
			
			
			
    