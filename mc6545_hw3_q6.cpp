/* 
Cost of call started BETWEEN 8AM and 6PM (Mon-Fri)is charged at $0.40 per minute. 
Cost of call started BEFORE 8AM or AFTER 6PM (Mon-Fri)is charged at $0.25 per minute. 
Cost of call started on Saturday or Sunday is charged at $0.15 per minute. 

Input will consist of: day of the week, the time the call started, length of call in minutes.
Output will be: cost of the call 
*/

#include <iostream>
using namespace std;

string dayOfTheWeek;
double hour, minutes,lengthOfCall,priceOfCall;
char colon;
double peakDayRate = 0.40, offPeakRate = 0.25, weekendRate = 0.15; 


int main () {
    
    cout << "Enter the day of the week (ex. Monday is Mo): "; cin >> dayOfTheWeek;

    cout << "What time did the call start? (ex. 8:00): "; cin >> hour >> colon >> minutes;

    cout << "How many minutes was the call? "; cin >> lengthOfCall;


    if (dayOfTheWeek == "Mo"||dayOfTheWeek == "Tu"||dayOfTheWeek == "We"||dayOfTheWeek == "Th"||dayOfTheWeek == "Fri" && hour >=8 && hour <=18 ) {

    priceOfCall = lengthOfCall * peakDayRate;

    cout << "Cost of the call will be: $" << priceOfCall;

    } else if (dayOfTheWeek == "Mo"||dayOfTheWeek == "Tu"||dayOfTheWeek == "We"||dayOfTheWeek == "Th"||dayOfTheWeek == "Fri" && hour <=8 && hour >=18 ) {

    priceOfCall = lengthOfCall * offPeakRate;

    cout << "Cost of the call will be: $" << priceOfCall;
    } else {
        priceOfCall = lengthOfCall * weekendRate;

    cout << "Cost of the call will be: $" << priceOfCall;

    }


    return 0;

}

