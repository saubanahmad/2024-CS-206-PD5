#include <iostream>
#include <iomanip>  //For using setprecision function to display a particular no. of digits after decimal point.
using namespace std;  

float length, width, height; //declaring float type variables.
string unit;                 //declaring string type variable.

float pyramidVolume(float length ,float  width, float height, string unit); //defining function before main.

main()
{
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;              //to take length as input from user.
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>> width;              //to take width as input from user.
    cout<<"Ente3r the height of the pyramid (in meters): ";
    cin>> height;             //to take height as input from user.
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>> unit;               //for user to enter unit in which he/she need answer.
    float volume = pyramidVolume(length, width, height, unit);     //calling function in main.
    if(unit == "meters")      //in manual if the user enters meters as unit the answer will have 6 digits after decimal point.
    {
        cout<<"The volume of the pyramid is: "<< fixed <<setprecision(6) <<volume <<" cubic "<< unit ;
    }                         
    else                      //for other units answer will rounded off to 3 digits after decimal point.
    
    cout<<"The volume of the pyramid is: "<< fixed <<setprecision(3) <<volume <<" cubic "<< unit ;
}    

float pyramidVolume(float length ,float  width, float height, string unit)  //function body
{
    float volume;
    volume = length*width*height*1.0/3.0;          //formula of volume (1/3 *area of base * height)
    if(unit == "millimeters")
    {
            volume=volume*1000000000 ;             //1 cubic meter = 1000000000 cubic millimeters.
    }
    if(unit == "centimeters")
    {
            volume=volume*1000000;                 //1 cubic meter = 1000000 cubic centimeters.
    }
    if(unit == "meters")
    {
            volume=volume;                         
    }
    if(unit == "kilometers")
    {
            volume=volume/1000000000;              //1 cubic meter = 1/1000000000 cubic kilometers.
    }  
    return volume;                                 //returning value to main fuction.
}