#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;



void PrintMath() {
    
    int Value1 = 0;
    int Value2 = 0;
    
    cout << "Pick two numbers" << endl;
    cin >> Value1;
    cin >> Value2;
    
    
    
    srand(time(0)); 
    int DisplayNumber = rand () % (Value1-Value2) + Value1;
    
    std::swap( Value1 , Value2 );
    
    cout << Value2 << DisplayNumber << Value1 << endl;
return;
}

int main() {
    
   PrintMath();
   
   return 0;

}