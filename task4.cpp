#include <iostream>
#include <cstdlib>      //library for using abs() function so that we may not get negative sign (-) in output.
#include <string>       //library to convert integer to string.

using namespace std;

int hours, days, workers, time;    //declaring global variables.
string answer;
string projectTimeCalculation(int hours, int days, int workers);  //declaring function before main.

int main()
{
    cout<<"Enter the needed hours: ";
    cin>> hours;
    cout<<"Enter the days that the firm has: ";
    cin>> days;
    cout<<"Enter the number of all workers : ";
    cin>> workers;
    answer = projectTimeCalculation(hours, days, workers);   //receiving string from function
    cout<< answer;
    return 0;
}

string projectTimeCalculation(int hours, int days, int workers)  //function body.
{
    time= ((10*days)-10*(days*10)/100)*workers - hours;  //the total time by n worker is given by multiplying no. of day by 10 and 
                                                         //then subtracting 10% from it as the training period and the mutliplying it with n. 
                                                         //now for remaining time subtract consumed time from total time.
    if (time >=0)
    {
        answer = "Yes! "+ to_string(time) + " hours left.";
    }
    if (time<0)
    {
        answer = "Not enough time! "+ to_string(abs(time)) + " hours needed.";
    }
    return answer;   //returning string to main function.
}