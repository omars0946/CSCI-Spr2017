// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class grading{
    public:
    void setstudent(int choice, string student1[]);
   // int getstudent(); const;
  
};

void grading::setstudent(int choice, string student1[]){

    int i;
    char qw;
    cout << "Which student do you wish to view? "<< endl;
  cin >> choice;
  switch(choice) {
      case 1 :
         
         break;
      case 2 :
         cout << "Well done" << endl;
         break;
      case 3 :
         cout << "You passed" << endl;
         break;
      case 4 :
         cout << "Better try again" << endl;
         break;
      case 5 :
         cout << "Better try again" << endl;
         break;
      default :
        cout << "Invalid " << endl;
   }
}


int main () {
    
 int choice;   
   grading  output;
ifstream inFS;

int q1, q2;
inFS.open("studentanswers.txt");

cout << "Checking for file..." << endl;

  if(!inFS.is_open()){
      cout << "No file present" << endl;
      return 1;
  }
   cout << "File detected " << endl;
   string student1[30];
   output.setstudent(choice, student1);
  
  return 0;
}