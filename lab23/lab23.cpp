#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int product(int x ,int y);

void PrintMath() {
    
    int Value1 = 0;
    int Value2 = 0;
    
    cout << "Pick two numbers" << endl;
    cin >> Value1;
    cin >> Value2;
    
     
    
       int DisplayNumber = rand () % (Value1-Value2) + Value1; // generates a random number betweeen the values
    
    std::swap( Value1 , Value2 ); // swaps values
    
    cout << Value1 <<" " << DisplayNumber <<" " << Value2 << endl; // displays the output

return;

}

int main() {
    int a;
    int b;
    int c = product(a,b);
    
   PrintMath();
   
   return 0;
}

int product(int x ,int y){
    return(x,y);
}