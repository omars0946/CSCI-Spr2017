#include <iostream>
#include <cstring>
 
using namespace std;


    int name, wage, hours, gross_pay, net_pay;

    struct Info{
        int Name = name
        int wage = 0;
        int hours = 0;
        int gross_pay = gross_pay;
        int net_pay = net_pay;
    };
    
    int main(){
       
    cout << "What is your name?" << endl;
        cin >> name;
    cout << "How much do you earn an hour? " << endl;
        cin >> wage;
    cout << "what many hours did you work? " << endl;
        cin >> hours;

gross_pay = hours * wage;
net_pay = (gross_pay - 130);
net_pay = net_pay * .83;
  
    
    return 0 ;
    }
        
