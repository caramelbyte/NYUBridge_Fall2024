#include <iostream>
using namespace std;

double realNumber;
int roundingMethod;
const int FLOOR_ROUND = 1, CEILING_ROUND = 2, ROUND = 3;

int main() {

    cout << "Please enter a Real number: "; 
    cin >> realNumber;


    cout << "Choose your rounding method: " << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> roundingMethod;


    switch (roundingMethod) {
        case FLOOR_ROUND:
            // Floor round: Round down (toward negative infinity)
            if (realNumber >= 0) {
                realNumber = static_cast<int>(realNumber); // Drop the decimal part
            } else {
                // If negative and not an integer, subtract 1
                if (realNumber != static_cast<int>(realNumber)) {
                    realNumber = static_cast<int>(realNumber) - 1;
                } else {
                    realNumber = static_cast<int>(realNumber);
                }
            }
            cout << "Floor round result: " << realNumber << endl;
            break;

        case CEILING_ROUND:
            // Ceiling round: Round up (toward positive infinity)
            if (realNumber >= 0) {
                if (realNumber != static_cast<int>(realNumber)) {
                    realNumber = static_cast<int>(realNumber) + 1;
                } else {
                    realNumber = static_cast<int>(realNumber);
                }
            } else {
                // If negative, drop the decimal part (round toward zero)
                realNumber = static_cast<int>(realNumber);
            }
            cout << "Ceiling round result: " << realNumber << endl;
            break;

        case ROUND:
            // Nearest whole number rounding
            if (realNumber >= 0) {
                realNumber = static_cast<int>(realNumber + 0.5); // Add 0.5 for positive rounding
            } else {
                realNumber = static_cast<int>(realNumber - 0.5); // Subtract 0.5 for negative rounding
            }
            cout << "Round to nearest result: " << realNumber << endl;
            break;

        default:
            cout << "Invalid rounding method selected. Please choose 1, 2, or 3." << endl;
            break;
    }

    return 0;
}
