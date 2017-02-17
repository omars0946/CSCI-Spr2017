#include <iostream>
using namespace std;

int main() {
    int change, quarters, dimes, nickels, pennies;
    int total, dollars, cents;
    tax = 10.9;
    
        cout << "Enter the total amount of money you wish to input";
        cin  >> change;
    
    quarters = change / 25; // how many quarters are in the total amount
    change = change % 25; //calculating change 
    dimes = change/10; // how many dimes are in the total amount
    change = change % 10; //calculating change
    nickels = change / 5;// how many nickels are in the total amount
    pennies = change % 5; //calculating whats left
    
    cout << "Total number of quarters is " << quarters << endl;
    cout << "Total number of dimes is " << dimes << endl;
    cout << "Total number of nickels is " << nickels << endl;
    cout << "Total number of pennies is " << pennies << endl;
    
    cout << "input your total amount (notice a tax of 10.9 percent)";
    cin >> total;  // inputting tax on initial amount
    total  =  total % tax;
    
    dollars = total / 100;  // how many dollarss are in the total amount
    total = total % 100; //calculating change
    cents = total;
    
    cout << "Total dollar count is " << dollars << endl;
    cout << "Total number of cents left is " << cents << endl;
    
    
    