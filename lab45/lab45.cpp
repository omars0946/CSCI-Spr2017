#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

void option1(string firstname, string lastname){   //with input, create options for the user to choose     
  
    cout << firstname << firstname.length()<< lastname << lastname.length()<< endl;     //use string commands to create random variations 
    
}
void option2(string firstname, string lastname){

    
    cout << firstname.substr(firstname.length() - 4, 4) << lastname.substr(firstname.length() - 4, 3);
    
}
void option3(string firstname, string lastname){
   
    lastname.push_back('#');
    cout << firstname.substr(firstname.length() - 4, 1)  << lastname <<firstname.length()<< lastname.length()<<  endl;
}

int main(){
    void option1(string firstname, string lastname);//declare functions
    void option2(string firstname, string lastname);    
    void option3(string firstname, string lastname);  

   
   
    string firstname;
    string lastname;//declare strings
    
    cout << "Welcome to the website!" << endl;           //ask user input 
    cout <<"Enter your first and last name so we can create a username just for you" << endl;
    cout << "NOTE: The first name must be less than 10 characters, and the last name less than 20 characters." << endl;
        cin >> firstname;//ask for input
        cin >> lastname;

    std::string str1 (firstname);
    std::string str2 (lastname);
    
    if (str1.size() >10 || str2.size()>20){                         //check to see if input is valid
        cout << "Error, too many characters, please retry" << endl;
        cin >> firstname;
        cin >> lastname;
    }
   if(firstname == lastname){
       cout << "The first and last names cannot be the same, please retry" << endl;
        cin >> firstname;
        cin >> lastname;
   }
   cout <<"Your input: " << firstname <<" " << lastname << endl;           //print output options from given name
   cout << "Option 1:";
     option1( firstname,  lastname)  ;
   cout << "Option 2:";
   option2( firstname,  lastname);
   cout << endl;
   cout << "Option 3:";
   option3( firstname,  lastname);
   cout << endl;
   
   
   return 0;
}

