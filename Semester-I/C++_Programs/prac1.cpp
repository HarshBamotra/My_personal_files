//program to remove duplicates from an array

#include <iostream>
using namespace std;

int main()
    {
	int n;
	cout << "Enter the number of elements ::";
	cin >> n;
	int arr[n];
	cout << "****** Enter the elements of the array ******" << endl;
	for(int i=0 ; i<n ; i++)
		{
			cout << "Enter element at index " << i << " ::";
			cin >> arr[i];
		}
	
	cout << endl << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	
	for(int i=0 ; i<n ; i++)
		{
			for(int j=i+1 ; j<n ;)
				{
					if(arr[i]==arr[j])
						{
							for(int l=j ; l<n ; l++)
								{
									arr[l]=arr[l+1];
								}
							n--;
						}
					else
						{
							j++;
						}
				}
		}
	cout << endl << "The array after removing duplicates ::";
	for(int i=0 ; i<n ; i++)
		{
			cout << arr[i] << " ";
		}
	return 0;
    }
	
	
	