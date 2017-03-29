#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main(){

string name;    
int FilingStatus = 0;
int GrossWage = 0;
int Withold = 0;                    //declaring all variables as zero
int AGI = 0;
int TaxedIncome = 0;
int refund = 0;

    
cout << "This program will calculate the income tax, and amount owed or to be refunded for a person (or couple)."<< endl;       //defining program
cout << "The program will take the following basic tax information: name, filing status (single[1] or married[2]), gross wages, and the amount of tax withheld." << endl;

cout << "What is your name?" << endl;           //asking for user input
cin >> name;

cout << "What is you filing status? (Married[1] or Single[2])" << endl;
cin >> FilingStatus;

cout << "What is your total gross wage?" << endl;   
cin >> GrossWage;

cout << "How much taxes were witheld from your total gross wage?" << endl;
cin >> Withold;



if(GrossWage>0 && GrossWage<8925 && FilingStatus == 2){
    AGI = 1;                                            //getting inputs by assigning values if grosswage falls in parameters
}
else if(GrossWage>8926 && GrossWage<36250 && FilingStatus == 2){
    AGI = 2;
}
else if (GrossWage>36251 && GrossWage<87850  && FilingStatus == 2 ){
    AGI = 3;
}
else if(GrossWage>87851){
    AGI = 4;
}
else if (GrossWage>0 && GrossWage<17850 && FilingStatus == 1){      //conditions if married
    AGI = 5;
}
else if (GrossWage>17851 && GrossWage<72500 && FilingStatus == 1){
    AGI = 6;
}
else(GrossWage>72501 && FilingStatus == 1);{
    AGI = 7;
}

switch(FilingStatus) {
    case 1 : FilingStatus = '1';
        cout << "You are Married " << endl; 
        GrossWage = GrossWage - 7800;       //both exemptions added together
             break;       // and exits the switch
    case 2 : FilingStatus = '2';
        cout << "You are Single" << endl;
        GrossWage = GrossWage - 3900;       //single exemption
             break;
    default: 
        cout << "Undefined" << endl; // default
             break;
             
}

switch(AGI) {
    case 1 : AGI = '1';
        cout << "Your tax percentage is 10% of the Adjusted Gross Income" << endl;
        TaxedIncome = (GrossWage) * .10;
             break;       // and exits the switch
    case 2 : AGI = '2';
        cout << "Your tax is $892.50 plus 15% of the excess over $8,925" << endl;
         TaxedIncome = ((GrossWage) * .15)+892.50;
             break;
    case 3 : AGI = '3';
        cout << "Your tax is $4991.25 plus 25% of the excess over $36,250" << endl;
         TaxedIncome = ((GrossWage) * .25)+4991.25;
             break;
    case 4 : AGI = '4';
        cout << "Your tax is $17,891.25 plus 28% of the excess over $87,850" << endl;
         TaxedIncome = ((GrossWage) * .25)+17891.25;
             break;
    case 5 : AGI = '5';
        cout << "Your tax percentage is 10% of the Adjusted Gross Income" << endl;
                 TaxedIncome = ((GrossWage) * .10);                                 //equations based on given info 
             break;
    case 6 : AGI = '6';
        cout << "Your tax is $1,785.00 plus 15% of the excess over $17,850" << endl;
                 TaxedIncome = ((GrossWage) * .15)+17850;
             break;
    case 7 : AGI = '7';
        cout << "Your tax is $9,891.25 plus 28% of the excess over $72,500" << endl;
                 TaxedIncome = ((GrossWage) * .28)+72500;
             break;
    default: 
        cout << "Unknown" << endl; // no error
             break;
}
refund = (TaxedIncome) - (Withold);//create new variable to equal refund
        cout << "Name: " << name << endl;               //displayong outputs
        cout << "Total Adjusted Income: " << TaxedIncome << endl;
            if(refund <0){
                cout << name<< "is entitled to: $"<<refund << "in tax returns" << endl;     //changes phrasing based on refund value
            }
            else(refund>1);{
                cout << name<< "is entitled to pay back "<< refund << " in owed taxes" << endl;
            }
        
return 0;    
}

