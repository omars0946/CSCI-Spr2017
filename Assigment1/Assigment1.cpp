#include <iostream>
#include <cstring>
 
using namespace std;

   struct employee{     //creating strucutre for inputs 
        char Name;
        float Wage; 
        float Hours; 
        float gross_pay;
        float net_pay;
    };
    
int main(){

           char name;                                       //declaring chars and floats so they can be defined in int main()
           float Wage, Hours, gross_pay, net_pay;
    
    cout << "What is your name?" << endl;                   //asking for user inputs
        cin >> name;
    cout << "How much do you earn an hour? " << endl;       //asking for user inputs
        cin >> Wage;
    cout << "what many hours did you work? " << endl;       //asking for user inputs
        cin >> Hours;

gross_pay = Hours * Wage;
net_pay = (gross_pay - 130);
net_pay = net_pay * .83;
  
    
    return 0 ;
    }
    
        
