#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double random_Ibs_kilo = 0; // creating global variables to use in each function
double random_kilo_Ibs = 0;

void Random() { //random number generator,
    
    int Value1 = 0;
    int Value2 = 0;
    
    cout << "Pick two numbers" << endl; // asks for input values
    cin >> Value1;
    cin >> Value2;


    int DisplayNumber = rand () % (Value1-Value2) + Value1; // generates a random number betweeen the values
    
    std::swap( Value1 , Value2 ); // swaps values
    
    cout << Value1 << DisplayNumber << Value2 << endl; // displays the output

random_Ibs_kilo = DisplayNumber; //sets random number equal to variable
random_kilo_Ibs = random_Ibs_kilo; //kilo to pounds = pounds to kilo

return;
}

void Ibs_to_Kilo() {
    
    double Pounds = random_Ibs_kilo;        //conversion
    double PoundsConverted = 0;
    
    PoundsConverted = Pounds * (0.453592); //1 ibs = .453592 kilo

    cout << "For " << Pounds << " Pounds. You would recieve " << PoundsConverted << " Kilograms." << endl; 

random_kilo_Ibs = PoundsConverted;
return;
}

void Kilo_to_Ibs(){
    double Kilo = random_kilo_Ibs;      //1 kilo is 2.20462 Ibs
    double KiloConverted = 0;
    
    KiloConverted = Kilo * (2.20462);

    cout << "For " << Kilo << " Kilograms. You would recieve " << KiloConverted << " Ibs." << endl; 
    


return;
}
    


int main() {
                    //state functions
   Random();
   Ibs_to_Kilo();
   Kilo_to_Ibs();
   
   return 0;

}