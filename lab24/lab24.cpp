#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
   int product(int x ,int y);

void Random() { //random number generator
    
    int Value1 = 0;
    int Value2 = 0;
    
    cout << "Pick two numbers" << endl;
    cin >> Value1;
    cin >> Value2;
    
     
    
       double DisplayNumber = rand () % (Value1-Value2) + Value1; // generates a random number betweeen the values
    
    std::swap( Value1 , Value2 ); // swaps values
    
    cout << Value1 <<" " << DisplayNumber <<" " << Value2 << endl; // displays the output

return;

}


void Ibs_to_Kilo() {
    double DisplayNumber;
    double Pounds = DisplayNumber;        //conversion
    double PoundsConverted = 0;
    
    PoundsConverted = Pounds * (0.453592); //1 ibs = .453592 kilo

    cout << "For " << Pounds << " Pounds. You would recieve " << PoundsConverted << " Kilograms." << endl; 

DisplayNumber = PoundsConverted;
return;
}

void Kilo_to_Ibs(){
    double DisplayNumber;
    double Kilo = DisplayNumber;      //1 kilo is 2.20462 Ibs
    double KiloConverted = 0;
    
    KiloConverted = Kilo * (2.20462);

    cout << "For " << Kilo << " Kilograms. You would recieve " << KiloConverted << " Ibs." << endl; 
    


return;
}
    


int main() {
    int a;
    int b;
    int c = product(a,b);
    
            
   Random();
   Ibs_to_Kilo();
   Kilo_to_Ibs();
   
   return 0;

}

int product(int x ,int y){
    return(x,y);
}