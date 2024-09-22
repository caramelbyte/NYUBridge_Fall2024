#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, discriminant;

int main () {
    
    cout << "Please enter a value of a: "; cin >> a;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    
    cout << "Please enter a value of b: "; cin >> b;

    cout << "Please enter a value of c: "; cin >> c;

  
    if (a == 0) {
        if (b == 0) {
         
            cout << (c == 0 ? "Infinite number of solutions" : "No solution") << endl;
        } else {
          
            cout << "One real solution: x=" << -c / b << endl;
        }
    } else {
   
        double discriminant = b * b - 4 * a * c;

   
        if (discriminant > 0) {
            // If the discriminant is positive, there are two solutions
            double sqrtDisc = sqrt(discriminant);
            cout << "Two real solutions: x1=" << (-b + sqrtDisc) / (2 * a)
                 << " and x2=" << (-b - sqrtDisc) / (2 * a) << endl;
        } else if (discriminant == 0) {
            // If the discriminant is zero, there is one real solution
            cout << "This equation has a single real solution: x=" << -b / (2 * a) << endl;
        } else {
            // If the discriminant is negative, there are no real solutions
            cout << "No real solution" << endl;
        }
    }



    return 0;

}

