#include <iostream>
using namespace std;

double firstItemPrice, secondItemPrice, taxRate, basePrice, priceAfterDiscounts, totalPrice;
char clubCard;

int main () {
    
    cout << "Enter price of	first item: "; cin >> firstItemPrice;

    cout << "Enter price of	second item: "; cin >> secondItemPrice;

    cout << "Does customer have a club card? (Y/N): "; cin >> clubCard;

    cout << "Enter tax rate, e.g.5.5 for 5.5% tax: "; cin >> taxRate;    

    basePrice = firstItemPrice + secondItemPrice;
    cout << "Base price: " << basePrice << "\n";

    if (firstItemPrice <  secondItemPrice){ 
        priceAfterDiscounts = firstItemPrice/2 + secondItemPrice; 

    } else  {
        priceAfterDiscounts = secondItemPrice/2 + firstItemPrice; 
    }

    if (clubCard == 'Y' || clubCard == 'y') {
        priceAfterDiscounts *= 0.9; 
    }

    cout << "Price after discounts: " << priceAfterDiscounts << "\n";

    taxRate /= 100;
    double totalPrice = priceAfterDiscounts * (1 + taxRate);

    cout << "Total price: " << totalPrice;

    return 0;

}

