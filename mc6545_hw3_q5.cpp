#include <iostream>
#include <cmath>
using namespace std;

double weightInPounds, heightInInches, bmiRange, weightConversion, heightConversion;
double weightInKilo = 0.453592, heightInMeters = 0.0254;
string weightStatus;

int main () {
    
    cout << "Please enter weight (in pounds): "; cin >> weightInPounds;

    cout << "Please enter height (in inches) "; cin >> heightInInches;

    weightConversion = weightInPounds * weightInKilo;
    heightConversion = heightInInches * heightInMeters;

    bmiRange = weightConversion / (heightConversion * heightConversion);

    if (bmiRange < 18.5) {
        weightStatus = "Underweight";
        cout << "The weight status is: " << weightStatus;
    } else if (bmiRange >= 18.5 && bmiRange <= 25) {
        weightStatus = "Normal";
        cout << "The weight status is: " << weightStatus;   
    } else if (bmiRange >= 25 && bmiRange <= 30) {
        weightStatus = "Overweight";
        cout << "The weight status is: " << weightStatus;
    } else {
        weightStatus = "Obese";
        cout << "The weight status is: " << weightStatus;  
    }   

    return 0;

}

