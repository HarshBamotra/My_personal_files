//Harsh Bamotra AC-1216
//Program to create a employee class and show polymorphism

#include <iostream>
using namespace std;

// ******** Defining base class employee ******** 

class employee
{
    protected:                          //Defining protected members                       
    string E_name , Department;        //used protected and public members beacause 
    int E_number , age;               //the private members are not inherited in the derived classes

    public:                         //Defining public members
    employee()                     //defining constructor
    	{	
        	cout << "Enter the employee name ::";
        	getline(cin , E_name);
		cout << "Enter your age::";
        	cin >>  age;
		cin.ignore();
        	cout << "Enter your department::";        //defined as public so that they can be accescible
        	getline(cin , Department);
		cout << "Enter your employee number::";
        	cin >> E_number;
        	
    	}                        
    virtual void computeSalary()=0;           //defining virtual functions
    virtual void display()=0;        
};

//******* Defining derived class regularEmployee *******

class regularEmployee : public employee
{     					      //inherited as public so that the members can be accescible                                             
                    			     //by the bass class pointer
    private:                                //Defining private members
    float Basic_pay , HRA , TA , DA , Gross_sal , tax , Net_sal;                //defined as private so that they
                                     					       //can't be accesed directly
    public:					//Defining public members
    regularEmployee()                          //Defining constructor
    	{
        	cout << "Enter your basic pay::";                           //defined as public so that they can be
        	cin >> Basic_pay;                                          //accescible in the main function
    	}
    void computeSalary()                     //overriding function
    	{
        	TA=10000;
		HRA=0.3*Basic_pay;
        	DA=0.8*(Basic_pay+HRA+TA);
        	Gross_sal=Basic_pay+HRA+TA+DA;
        	tax=0.3*Gross_sal;
        	Net_sal=Gross_sal-tax;
    	}
    void display()                            //overriding function
	{
		cout << "Name::" << E_name << endl;
		cout << "Department::" << Department << endl;
		cout << "Employee No. ::" << E_number << endl;
		cout << "Age ::" << age << endl;
		cout << "The net salary of the employee::" << Net_sal << endl << endl;
	}
};


//****** Defining derived class conEemployee ******

class conEmployee : public employee          //inherited as public so that the members can be accescible
{				            //by the bass class pointer                                                                                         			     
    private:                               //defining private members             
    float Hourly_Rate , No_Hours , Gross_sal , tax , Net_sal;                 //defined as private so that they
                                     					     //can't be accesed directly
    public:                                 //Defining public members 
    conEmployee()			   //Defining constructor
    	{                                       
        	cout << "Enter the number of work hours::";
        	cin >> No_Hours;
        	cout << "Enter the hour rate::";                //defined as public so that they
        	cin >> Hourly_Rate;                            //can be accescible in the main function 
    	}
    
    void computeSalary()
    	{                                         //overriding function
        	Gross_sal=Hourly_Rate*No_Hours;
        	tax=0.1*Gross_sal;
        	Net_sal=Gross_sal-tax;
    	}
    
    void display()                           //overriding function
	{
		cout << "Name::" << E_name << endl;
		cout << "Department::" << Department << endl;
		cout << "Employee No. ::" << E_number << endl;
		cout << "Age ::" << age << endl;
		cout << "The net salary of the employee::" << Net_sal << endl << endl;
	}
};

int main()
{
    int ch;
    employee *em;                 //defining employee class pointer

    cout << "******************** MENU *********************" << endl;          //printing menu
    cout << "1. Regular employee" << endl << "2. Contractual employee" << endl;
    cout << "Enter your choice(1 or 2)::";
    cin >> ch;
    cin.ignore();

   if(ch==1)
	{    
		cout << endl << "************* ENTER YOUR DETAILS *************" << endl;
		regularEmployee emp1;                                                //defining regularEmployee class object
		em = &emp1;                                                         //pointing the pointer to object  
    		cout << endl << "****** Details of the regular employee ******" << endl;
    		em -> computeSalary();
    		em -> display();					      //printing the data
    	}

    else if(ch==2)
	{
		cout << endl << "************* ENTER YOUR DETAILS *************" << endl;
    		conEmployee emp2;                                                       //defining conEmployee class object
    		em = &emp2;							       //pointing the pointer to object
    		cout << endl << "******* Details of the contractual employee ******" << endl;
    		em -> computeSalary();
    		em -> display();					         //printing the data
	}

    else
	{
		cout << "Wrong Input !!! Exiting";
	}

    return 0;

}
