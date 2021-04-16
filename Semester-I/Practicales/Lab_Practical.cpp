 //Harsh Bamotra
//Program to create a CSStudent class

#include <iostream>
using namespace std;


/*********************************** Defining CCStudent class *********************************/
class CSStudent
    {
        protected:
        string fname, lname , year , subject[4];
        int RollNo;

        public:
        void getData()
            {
                cout << "****** Enter the details of the students ******" << endl;
                cout << "Enter your first name::";
		cin >> fname;
                cout << "Enter your last name ::";
                cin >> lname;
                cout << "Enter the year of college::";
                cin >>year;
                cout << "Enter your roll no. ::";
                cin >> RollNo;
                cout << "Enter your core subjects" << endl;
                for(int i=0 ; i<3 ; i++)
                    {
                        cout << "Enter subject " << i+1 << "::";
                        cin >> subject[i];
                    }
            }
        
        void display()
            {
                cout << "******* Details of the sudents *******"<< endl;
                cout << "Name ::" << fname << " " << lname << endl;
                cout << "Roll No. ::" << RollNo << endl;
                cout << "College Year ::" << year << endl;
                cout << "Subjects ::" << endl;
                for(int i=0 ; i<4 ; i++)
                    {
                        cout << i+1 << ". " << subject[i] << endl;
                    }
                cout << "**************************************"<< endl;
            }
    };

class GEMath : public CSStudent
    {
        private:
        string gesub;

        public:
        GEMath()
            {
                gesub="Mathematics";
                subject[3]=gesub;
            }
    };

class GEElectronics : public CSStudent
    {
        private:
        string gesub;

        public:
        GEElectronics()
            {
                gesub="Electronics";
                subject[3]=gesub;
            }
    };

class GEPE : public CSStudent
    {
        private:
        string gesub;

        public:
        GEPE()
            {
                gesub="PE";
                subject[3]=gesub;
            }
    };

class GEPhysics : public CSStudent
    {
        private:
        string gesub;

        public:
        GEPhysics()
            {
                gesub="Physics";
                subject[3]=gesub;
            }
    };


int main()
{
  string ch="Y";
  while(ch=="Y" || ch=="y")
    {
        int x;
        cout << "************** MENU **************" << endl;
        cout << "1. GEMath" << endl << "2. GEElectronins" << endl;
        cout << "3. GEPE " << endl << "4. GEPhysics" << endl;
        cout << "**********************************" << endl;
        cout << "Enter your GE subject (1 , 2 , 3 or 4)::";
        cin >> x;
	cout << endl;

       if(x==1)
            {
                GEMath s;
                s.getData();
		cout << endl;
                s.display();
            }
        else if(x==2)
            {
                GEElectronics s;
                s.getData();
		cout << endl;
                s.display();
            }
        
        else if(x==3)
            {
                GEPE s;
                s.getData();
		cout << endl;
                s.display();
            }
        
        else if(x==4)
            {
                GEPhysics s;
                s.getData();
		cout << endl;
                s.display();
            }
        
        else
            {
                cout << "Wrong Input !! Exiting ";
            }
	cout << "Do you want to continue (Y/y) or (N/n)::"; 
        cin >> ch;
    }
        
           
}
   