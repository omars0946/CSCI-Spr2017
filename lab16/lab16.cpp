#include <iostream>
#include <cstring>
 
using namespace std;


    int head, eyes, ears, nose, mouth, none;

    struct monsters{
        int head = none;
        int eyes = none;
        int ears = none;
        int nose = none;
        int mouth = none;
    };
    
    int main(){
       
    
    cout << "Please choose the type of monster you would like! Choices include the 'Zombus, Spritem, Vegitas, Wackus, or nothing'" << endl;
        
     cout << "what type of head would you like? " << endl;
    cin >> head;
     cout << "what type of eyes would you like? " << endl;
    cin >> eyes;
     cout << "what type of ears would you like? " << endl;
    cin >> ears;
     cout << "what type of nose would you like? " << endl;
    cin >> nose;
     cout << "what type of mouth would you like? " << endl;
    cin >> mouth; 
 
    cout << "You have a " << head << endl;
    cout << "You have a " << ears << endl;
    cout << "You have a " << eyes << endl;
    cout << "You have a " << nose << endl;
    cout << "You have a " << mouth << endl;
    
    return 0 ;
    }
        
