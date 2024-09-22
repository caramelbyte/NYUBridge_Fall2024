#include <iostream>
using namespace std;

double graduationYear, currentYear;
string userName;

int main () {
    
    cout << "Please enter your name: "; cin >> userName;

    cout << "Please enter your graduation year: "; cin >> graduationYear;

    cout << "Please enter your current year: "; cin >> currentYear;
 

    if (graduationYear = graduationYear){ 
        cout << userName << ", you have graduated.";

    } else if (graduationYear - currentYear == 1)  {
        cout << userName << ", you are a Senior.";
    } else if (graduationYear - currentYear == 2)  {
        cout << userName << ", you are a Junior."; 
    } else if (graduationYear - currentYear == 3)  {
        cout << userName << ", you are a Sophmore.";
    } else if (graduationYear - currentYear == 4)  {
        cout << userName << ", you are a Freshman.";
    } else { 
        cout <<  "Invalid Response";
    }

    return 0;

}

