#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double temp = 0.0;
    double WindSpeed = 0.0;
    double OldStyle = 0.0;
    double newStyle = 0.0;
    double differ = 0.0;
    
    cout << "input your windspeed (in terms of velocity) and the tempeture so we can show you the difference in formulas" << endl;
    cout << "Tempeture: ";
    cin >> temp;            //getting input
    cout << "Windspeed: ";
    cin >>  WindSpeed;      //getting input
    
    OldStyle = 0.081*(3.71 * (sqrt (WindSpeed)) + 5.81 - .25 * WindSpeed) * (temp - 91.4) + 91.4;  //equation of old
    newStyle = 35.74 + .6215 * temp - 35.75 * (pow(WindSpeed, 0.16)) + 0.4275 * temp * (pow (WindSpeed, 0.16)); // equation of new
    differ = OldStyle - newStyle;
    
    cout << "With the old formula, your answer would be " << OldStyle << endl;
    cout << "With the newer formaula, your answer would be " << newStyle <<  endl;
    cout << "The difference between the two is " << differ; 
    
    
    
     return 0;    
 }