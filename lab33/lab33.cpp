#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){
    
int Guess = 0;    
int Generatednumber = 0;
int count = 0;

cout << "This is a guessing game! The program will generate a random number and you have to guess it!" << endl;
cout << "Input a number between 1 and 50" << endl;      //displaying info and getting input
cin >> Guess;

srand (time(NULL));

Generatednumber = rand()%50+1; //random numbe generator


while(Guess != Generatednumber){ //will loop is guess does not equal random number
    
    if(Guess < Generatednumber){ 
    cout << "Too Low, pick another number" << Generatednumber << endl;
    cin >> Guess;
    1+count++ ;
}

    else if(Guess > Generatednumber){ 
cout << "Too High, pick another number" <<Generatednumber<< endl;
cin >> Guess;
1+count++ ;
}
       
}
for ( int display = 0; display <= count; 1 + display++ ){       //added for loop to display attempts
      cout << display<< " Attempt(s)" << endl;
      
  } 
cout << "Correct! Your total times attempted were: " << count ;      //display total without showing attempta
return 0;    
}