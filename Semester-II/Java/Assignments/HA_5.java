 //Harsh Bamotra AC-1216
//Program to demonstrate different ways to initialize data variables 

import java.util.Scanner;

class Student
    {
        String RollNo , name , course , subjects[]=new String[4];

    //first way to initialize
        Student(String roll , String na , String cou , String s1 , String s2 , String s3 , String s4)
            {
                RollNo=roll;
                name=na;
                course=cou;
                subjects[0]=s1;
                subjects[1]=s1;
                subjects[2]=s1;
                subjects[3]=s1;
            }

    //second way to initialize
        Student()
            {
                RollNo="AC-1216";
                name="Harsh Bamotra";
                course="Bsc Hons. Computer Science";
                subjects[0]="Java";
                subjects[1]="EVS";
                subjects[2]="DS";
                subjects[3]="English";
            }
     
    //third way to initialize
        public void SetData()
            {
                Scanner input= new Scanner(System.in);
                System.out.print("Enter your roll number ::");
                RollNo=input.nextLine();
                System.out.print("Enter your name ::");
                name=input.nextLine();
                System.out.print("Enter your course name ::");
                course=input.nextLine();
                for(int i=0 ; i<4 ; i++)
                    {
                        System.out.print("Enter subject " + (i+1) + " ::");
                        subjects[i]=input.nextLine();
                    }
            }

    //method to print all data variables
        public void GetData()
            {
                System.out.println("Roll number ::" + RollNo);
                System.out.println("Name ::" + name);
                System.out.println("Course ::" + course);
                System.out.println("Subjects ::");
                for(int i=0 ; i<4 ; i++)
                    {
                        System.out.println((i+1) + " " + subjects[i]);
                    }
                System.out.println();
                System.out.println();
            }
    }

class HA_5
    {
        public static void main(String[] args)
            {
                //first way 
                Student obj1=new Student();

                //second way
                Student obj2=new Student("AC-1217" , "Ipshita Mahajan" , "Bsc Hons. Computer Science" , "Java" , "EVS" , "DS" , "English");

                //third way
                Student obj3=new Student();
                obj3.SetData();

                //printing the objects
                obj1.GetData();
                obj2.GetData();
                obj3.GetData();

            }
    }