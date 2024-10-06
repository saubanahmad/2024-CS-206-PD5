#include <iostream>
#include <iomanip>        //For using setprecision function to display a particular no. of digits after decimal point.
using namespace std;


char type;                              //declaring global variables.
float price, final_price, taxamount;

float taxCalculator(char type, float price); //declaring function before main.

main()
{
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of vehicle: $";
    cin>>price;
    float taxamount =taxCalculator(type, price);  //calling function in main body.
    final_price= price+ taxamount;                //calculating final price.
    cout<<"The final price of the vehicle of type "<< type<<" after adding the tax is: $"<< fixed<< setprecision(2)<<final_price<<".";
}
float taxCalculator(char type, float price)     //function body,
{
    float taxrate;
    if(type=='M')
    {
        taxrate= 6;
    }
        if(type=='E')
    {
        taxrate= 8;
    }
        if(type=='S')
    {
        taxrate= 10;
    }
        if(type=='V')
    {
        taxrate= 12;
    }
        if(type=='T')
    {
        taxrate= 15;
    }
    taxamount=price*taxrate/100;
    return taxamount;
}