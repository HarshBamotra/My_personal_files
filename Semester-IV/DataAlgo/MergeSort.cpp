 //Harsh Bamotra AC-1216
//Program to sort an array using merge sort

#include <iostream>
using namespace std;

template <class T>
int merge(T arr[], int p, int q, int r) 
	{
		int count=0;
		int n1 = q - p + 1;
    		int n2 = r - q;

    		T L[n1], M[n2];

    		for (int i = 0; i < n1; i++)
        		L[i] = arr[p + i];
    		for (int j = 0; j < n2; j++)
        		M[j] = arr[q + j+1];

    		int i, j, k;
    		i = 0;
    		j = 0;
    		k = p;

    		while (i < n1 && j < n2) 
			{
        			if (L[i] <= M[j]) 
					{
            					arr[k] = L[i];
            					i++;
        				} 	
				else 
					{
            					arr[k] = M[j];	
            					j++;
        				}
				count++;
        			k++;
    			}

    		while (i < n1) 
			{
        			arr[k] = L[i];
        			i++;
        			k++;
    			}

    		while (j < n2) 
			{
        			arr[k] = M[j];
        			j++;
        			k++;
    			}
		return count;
	}


template <class T>
int MergeSort(T arr[] , int l , int r)
	{
		int count;
		if(l<r)
			{
				int m=l+(r-l)/2;
				MergeSort(arr , l , m);
				MergeSort(arr , m+1 , r);
				count = merge(arr , l , m , r);
			}
		return count;
	}

int main()
    {
	int n , count;
	cout << "Enter the number of elements ::";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter the array elements ::" << endl;
	for(int i=0 ; i<n ; i++)
		cin >> arr[i];
	
	cout << "**********************************************" << endl;

	cout << "The array you entered ::";
	for(int i=0 ; i<n ; i++)
		cout << arr[i] << " ";

	count = MergeSort<int>(arr , 0 , n-1);	

	cout << endl << "The array after sorting ::";
	for(int i=0 ; i<n ; i++)
		cout << arr[i] << " ";

	cout << endl << "Number of comparisons ::" << count;

	cout << endl<< "**********************************************" << endl;
	return 0;
    }