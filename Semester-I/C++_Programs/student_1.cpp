//program to create a student class

#include <iostream>
using namespace std;

class Student
    {
	private:
	int age , standard;
	string first , last;

	public:
	void set_age(int n)
		{
			age=n;
		}
	void set_standard(int n)
		{
			standard=n;
		}
	void set_first(string f)
		{
			first=f;
		}
	void set_last(string l)
		{
			last=l;
		}
	int get_age()
		{
			return age;
		}
	int get_standard()
		{
			return standard;
		}
	string get_first()
		{
			return first;
		}
	string get_last()
		{
			return last;
		}
	string to_string()
		{
			cout << age << "," << first << "," << last << "," << standard << endl;
		}
    };

int main()
    {
	int a , s;
	string f , l;
	cin >> a >> f >> l >> s;
	Student obj;
	obj.set_age(a);
	obj.set_standard(s);
	obj.set_first(f);
	obj.set_last(l);
	cout << obj.get_age() << endl << obj.get_first() << ", " << obj.get_last() << endl << obj.get_standard() << endl << endl;
	obj.to_string();
	
	return 0;
    }