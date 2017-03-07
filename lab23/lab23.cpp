#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int product(int x ,int y); // declaring for future use

void PrintMath() {
    
    int Value1 = 0; // decleration
    int Value2 = 0;
    
    cout << "Pick two numbers" << endl;
    cin >> Value1;
    cin >> Value2; // get input
    
     
    
       int DisplayNumber = rand () % (Value1-Value2) + Value1; // generates a random number betweeen the values
    
    std::swap( Value1 , Value2 ); // swaps values
    
    cout << Value1 <<" " << DisplayNumber <<" " << Value2 << endl; // displays the output

return;

}

int main() {
    int a; // delcaring variables to be in place of the prouduct function
    int b;
    int c = product(a,b); //sets c equal to function
    
   PrintMath(); // random number
   
   return 0;
}

int product(int x ,int y){ //displays values within parameters 
    return(x,y); //returns an output
}