 //Harsh Bamotra AC-1216
//Program to perform matrix class with overloading operators and exception handling.

#include <iostream>
using namespace std;

class matrix
    {
	private:
	int row , col; 
	
	public:
	int arr[10][10];
	void setData(int n1 , int n2)
		{
			row=n1;
			col=n2;
		}

	void create_arr()
		{
			for(int i=0 ; i<row ; i++)
				{
					for(int j=0 ; j<col ; j++)
						{
							cout << "Enter the elements at index [" << i << "][" << j << "]::";
							cin >> arr[i][j];
						}
				}
		}

	void display_arr()
		{
			for(int i=0 ; i<row ; i++)
				{
					cout << endl;
					for(int j=0 ; j<col ; j++)
						{
							cout << arr[i][j] << " ";
						}
				}
		}
	void trans();

	matrix operator +(matrix m)
		{
			matrix temp;
			temp.row=m.row;
			temp.col=m.col;
			if(row==m.row && col==m.col)
				{
				for(int i=0 ; i<row ; i++)
					{
						for(int j=0 ; j<col ; j++)
							{
								temp.arr[i][j]=arr[i][j]+m.arr[i][j];
							}
					}
				}
			else
				{
					cout << "Error !! The order of the matrix are not same. ";
				} 
			   
			return temp;
		}

	matrix operator -(matrix m)
		{
			matrix temp;
			temp.row=m.row;
			temp.col=m.col;
			if(row==m.row && col==m.col)
				{
				for(int i=0 ; i<row ; i++)
					{
						for(int j=0 ; j<col ; j++)
							{
								temp.arr[i][j]=arr[i][j]-m.arr[i][j];
							}
					}
				}
			else
				{
					cout << "Error !! The order of the matrix are not same. ";
				} 
			   
			return temp;
		}
	matrix operator *(matrix m)
		{
			matrix temp;
			temp.row=row;
			temp.col=m.col;
			for(int i=0 ; i<row ; i++)
				{
					for(int j=0 ; j<col ; j++)
						{
							temp.arr[i][j]=0;
						}
				}
			if(col==m.row)
				{
					for(int i=0 ; i<row ; i++)
						{
							for(int j=0 ; j<m.col ; j++)
								{
									for(int k=0 ; k<col ; k++)
										{
											temp.arr[i][j]+=arr[i][k]*m.arr[k][j];
										}
								}
						}
				}
			else
				{
					cout << "Error !! the column of the fisrt matrix not equal to the row of second.";
				}
			return temp;
		}
			
    };		

void matrix :: trans()
	{
		int arr1[10][10];
		for(int i=0 ; i<row ; i++)
			{
				for(int j=0 ; j<col ; j++)
					{
						arr1[i][j]=arr[j][i];
					}
			}
		
		cout << "The matrix after transpose::";
		for(int i=0 ; i<row ; i++)
			{
				cout << endl;
				for(int j=0 ; j<col ; j++)
					{
						cout << arr1[i][j] << " ";
					}
			}
	}
						
	

int main()
    {
	int r1 , r2 , c1 , c2 , x , y;
	matrix m1 , m2 , m3 ;
	cout << "*****Enter the details of first matrix*****" << endl << endl;
	cout << "Enter the number of row::";
	cin >> r1;
	cout << "Enter the number of columns::";
	cin >> c1;
	m1.setData(r1 , c1);
	m1.create_arr();
	cout << "The matrix you entered::" << endl;
	m1.display_arr();

	cout << endl << endl << "*****Enter the details of second matrix*****" << endl << endl;
	cout << "Enter the number of row::";
	cin >> r2;
	cout << "Enter the number of columns::";
	cin >> c2;
	m2.setData(r2 , c2);
	m2.create_arr();
	cout << "The matrix you entered::" << endl;
	m2.display_arr();
		
	cout << endl << "******************************************************************" << endl;
	cout << "1.Sum" << endl << "2.Product" << endl << "3.Transpose" << endl << "4.Subracting" << endl ;             
	cout << "******************************************************************" << endl;
	cout << "Enter your choice(1 , 2 , 3 or 4)::";
	cin >> x;
	switch (x)
	{
	case 1:
		try
		{
			if(r1==r2 && c1==c2)
				{
					m3=m1+m2;
					cout << "The sum of the matrix::" << endl;
					m3.display_arr();
				}
			else
				{
					throw r1;
				}
		}

		catch(int err)
			{
				cout << "Error !! The order of the matrix must be same to perform sum.";
			}
		break;

	case 2:
		try
		{
			if(c1==r2)
				{
					m3=m1*m2;
					cout << "The product of the matrix::" << endl;
					m3.display_arr();
				}
			else
				{
					throw r1;
				}
		}
		catch(int err)
			{
				cout << "Error !! The column of the first matrix must be same to the row of the second.";
			}
		break;

	case 3:
		cout << "******************************************************************" << endl;
		cout << "Which matrix you want to transpose (1 or 2)::";
		cin >> y;
		if(y==1)
		    {
	    		m1.trans();
		    }
		else if(y==2)
			{
	        	m2.trans();             
	        }
		else
	        {
	        	cout << "Wrong Input!!" << endl ;          
	    	}
		break;

	case 4:
		try
		{
			if(r1==r2 && c1==c2)
				{
					m3=m1-m2;
					cout << "The subtraction of the matrix::";
					m3.display_arr();
				}
			else
				{
					throw r1;
				}
		}
		catch(int err)
			{
				cout << "Error !! The order of the matrix must be same to perform subtraction.";
			}
		break;
	
	default:
		cout << "Wrong input !!!";
        }

              
	return 0 ;
    }