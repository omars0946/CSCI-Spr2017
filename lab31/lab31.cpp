#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    double PhoneCharge = 0;
    double TotalCharge =0;
    double MonthlyCharge = 30;
    double FamilyPlanDiscount = TotalCharge * .90;
    double Device = 0;
    double GB = 0;
    
    cout << "Device Charge: Which phone do you have? A dumbphone[1], smartphone[2], or a tablet[3]" << endl;
    cin >> Device;
    
    if(Device ==2){
        PhoneCharge = 5;
     }
     else if(Device == 3){
         PhoneCharge = 10;
     }
     else{
         PhoneCharge = 0;
     }
    
    cout << "Which hone plan are you using? Monthly[1] or Unlimited[2] " << endl;
    cin >> PhonePlan;
    
    if (PhonePlan = 1){
    cout << "How many GB did you use this moneth"<< endl;
    cin >> GB;
        if (GB <=1){
            
            
        }
    MonthlyCharge
    
    }
    else{
    
    }
    TotalCharge = PhoneCharge;
    cout << "Your total charge is: $" << TotalCharge; ".00"
    return 0;

}