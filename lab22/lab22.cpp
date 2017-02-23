#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



void  PrintMath () {
    int random = rand() % 100 + 1;

    cout << "Displaying a random number " << random << endl;
    PrintMath = srand();
    
    return;
}

int main() {
    PrintMath ();
    
    cout << endl;
     return 0 ;
    }
    


