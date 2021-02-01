 //Program to print the area and perimeter of a square
//AC-1216 Harsh Bamotra

#include <iostream>
using namespace std;

int main()

{

    int side , area , peri;                                              //Declaring variable side
    cout << "Enter the side of the square::";                           //Printing input message 
    cin >> side;                                                       //Taking input side
    cout << "You entered::" << side << endl;    
    area=side*side;                                                  //Calculating the area
    peri=side*4;                                                    //Calculating the perimeter 
    cout << "The perimeter of the square is::" << peri << endl;    //Printing the perimeter
    cout << "The area of the square is::" << area << endl;        //Printing the area
    return 0;

}

    

