//program to create a student class 

#include <iostream>
using namespace std;

class Student
    {
	protected:
	int RollNo;

	public:
	void SetData(int r)
		{
			RollNo=r;
		}
    };

class Test : public Student
    {
	protected:
	int marks[5];
	
	public:
	void SetData(int r , int m[5])
		{
			RollNo=r;
			for(int i=0  ; i<5 ; i++)
				{
					marks[i]=m[i];
				}
		}
    };

class Result : public Test
    {
	private:
	int total , average;

	public:
	void Display()
		{
			total=0;
			for(int i=0 ; i<5 ; i++)
				{
					total+=marks[i];
				}
			average=total/5;
			cout << "Roll No. ::" << RollNo << endl;
			cout << "Total marks ::" << total << endl;
			cout << "Average ::" << average;
		}
    };	
	
int main()
    {
	int arr[5]={50 ,  50 , 50 , 50 , 100};
	Result r;
	r.SetData(12 , arr);
	r.Display();
	
	
	return 0;
    }