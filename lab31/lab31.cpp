#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    double PhonePlan = 0;
    double PlanCharge = 0;
    double PhoneCharge = 0;
    double TotalCharge =0;
    double MonthlyCharge = 30;              //declaring all variables to initial amount
    double Unlimited = 75;
    double FamilyPlanDiscount = 0;
    double FamilyPlanQ = 0;
    double CorporateDiscount = 0;
    double Device = 0;
    double GB = 0;
    double GBcost = 0;
    double Lines = 0;
    double CDiscount = 0;
    
    cout << "Device Charge: Which phone do you have? A regular phone[1], smartphone[2], or a tablet[3]" << endl;
    cin >> Device;
    
    if(Device ==2){
        PhoneCharge = 5;
     }
     else if(Device == 3){
         PhoneCharge = 10;                      //initial value to begin
     }
     else{
         PhoneCharge = 0;
     }
    
    cout << "Which phone plan are you using? Monthly[1] or Unlimited[2] " << endl;
    cin >> PhonePlan;
    
    if (PhonePlan == 1){
        cout << "How many GB did you use this month"<< endl;
            cin >> GB;
                    if (GB <=1){
                        GBcost = 5;                     //first gb cost
                    }
                    else if(GB <= 5 && GB>1){
                        GBcost  =  (GB-1) * (.75+5); 
                    }
                    else if(GB <=15 && GB>5){          // if else statments determing where value goes
                        GBcost = 5 + 3 + (1.50*(GB-5));
                    }
                    else(GB > 15);{
                        GBcost = 5 + (.75*4) + (1.50*10) + ((GB-15)*3);
                    }
    }
    else (PhonePlan == 2);{
         cout << "How many GB did you use this month"<< endl;
            cin >> GB;
        if(GB<10){
            GBcost = 0;
        }
        else(GB>10);{
            GBcost = ((GB-10) *1.50);
        }
    }
    cout << "Do you have a family plan discount?  yes[1] or no[2]"<<endl;
    cin >> FamilyPlanQ ;    //family plan qualifier
    
         if(FamilyPlanQ == 1){
            cout << "How many lines you have?" << endl;
            cin >> Lines;
                if (Lines >2){
                    FamilyPlanDiscount = Lines *3;          //cost of adding more lines
                }
                else (Lines<2);{
                    FamilyPlanDiscount = 0;
                }
        }
        else(FamilyPlanQ == 2);{
            FamilyPlanDiscount = 0;
        }
        
        PlanCharge = GBcost + MonthlyCharge + Unlimited;                // add factors that go into plancharge
        TotalCharge = PhoneCharge + PlanCharge + FamilyPlanDiscount; //Add total before dicount



    cout << "Are you eligable for our corporate discount? yes[1] or no[2]" << endl;
    cin >> CorporateDiscount;
    
        if(CorporateDiscount == 1){                     //apply discount
            CDiscount = .90;
        }
        else(CorporateDiscount == 2);{
            CDiscount =  1;
        }
        
    TotalCharge = TotalCharge * CDiscount;
    cout << "Your plan without discounts will spend: " << PlanCharge << endl; //display what the plan charges
    cout << "Your total charge is: $" << TotalCharge << "0";
    
    return 0;
}

