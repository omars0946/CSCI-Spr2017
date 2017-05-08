#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;


void option1( char firstname[], char lastname[]){
    char c;
    char a;
    int i=0;
   
  while (firstname[i])
  {
    c=firstname[i];
    if (islower(c)) c=toupper(c);           //create unique variants using C strings
    putchar (c);        //uppercase firstname
    i++;
  }
  cout << "_"; //put underscore
    while (lastname[i])
  {//lowercase lastname
    a=lastname[i];
    putchar (tolower(a));
    i++;
  }
}
  void option2( char firstname[], char lastname[]){
  char c;
    char a;
    int i=0;
   
  while (firstname[i])
  {
    a=firstname[i];
    putchar (tolower(a));
    i++;
  }
cout << isalpha(lastname[i]) ;
}
void option3( char firstname[], char lastname[]){
   char c;
    char a;
    int i=0;
   int l =0;
  while (firstname[i])
  {
    c=firstname[i-3];
    if (islower(c)) c=toupper(c);
    putchar (c);
    i++;
}
 while (lastname[l])
  {
    a=lastname[l];
    putchar (tolower(a));
    l++;
  }
}
int main(){
    void option1(char firstname[], char lastname[]);
    void option2(char firstname[], char lastname[]);    
    void option3(char firstname[], char lastname[]);  

    const int MAX_fname = 10;      // Max string length
    const int MAX_lname = 20;
   
   
    char firstname[MAX_fname];
    char lastname[MAX_lname];
    
    cout << "Welcome to the website!" << endl;           //ask user input 
    cout <<"Enter your first and last name so we can create a username just for you" << endl;
    cout << "NOTE: The first name must be less than " << MAX_fname <<" characters, and the last name less than "<< MAX_lname << " characters." << endl;
        cin >> firstname;
        cin >> lastname;
   if(firstname == lastname){
       cout << "The first and last names cannot be the same, please retry" << endl;
        cin >> firstname;
        cin >> lastname;
   }
   cout <<"Your input: " << firstname <<" " << lastname << endl;           //output options from given name
   cout << "Option 1:";
   option1(firstname, lastname);
   cout << endl;
   cout << "Option 2:";
   option2(firstname, lastname);
   cout << endl;
   cout << "Option 3:";
   option3(firstname, lastname);
   cout << endl;
   
   
   return 0;
}

