#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void PrintMath();

int main() 
{ 
 cout << "Displaying a random number " << endl;
    
    PrintMath ();
    
    cout << endl;
    return 0 ;
}

void  PrintMath () {
    srand(time(0)); 
    int DisplayNumber = rand() % 100 + 1;

cout << "Your random number is " << DisplayNumber;
    return ;
}


