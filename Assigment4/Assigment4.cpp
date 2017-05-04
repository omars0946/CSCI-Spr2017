#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class grading{
    public:
    void setstudent(int choice, string student1[], string student2[], string student3[], string student4[], string student5[]);     //declare functions
    void comparison(int choice, string student1[], string student2[], string student3[], string student4[], string student5[], string key[]); 
};


void grading::setstudent(int choice, string student1[], string student2[], string student3[], string student4[], string student5[]){
  
   
 
   cout << " Test Results" << endl;
   cout << "_______________"<<endl;
  switch(choice) {
      case 1 :
      for (int i = 2; i<23;i++){                                //print array 23 times 
     cout << "Question " << i-1<< ": "<< student1[i] <<"    ";
      }
         break;
      case 2 :
         for (int i = 2; i<23;i++){ 
     cout << "Question " << i-1<< ": "<< student2[i] <<"    ";
      }
         break;
      case 3 :
         for (int i = 2; i<23;i++){ 
     cout << "Question " << i-1<< ": "<< student3[i] <<"    ";
      }
         break;
      case 4 :
         for (int i = 2; i<23;i++){ 
     cout << "Question " << i-1<< ": "<< student4[i] <<"    ";
      }
         break;
      case 5 :
        for (int i = 2; i<23;i++){ 
     cout << "Question " << i-1<< ": "<< student5[i] <<"    ";
      }
         break;
      default :
        cout << "Invalid " << endl;
        
   }
   cout << endl;
}

void grading::comparison(int choice, string student1[], string student2[], string student3[], string student4[], string student5[], string key[]){
ifstream inFS;
  int correct = 1;//declare local variables and set to output 
  double incorrect = .25;
  double grade = 0;
  
     
    switch(choice) {
      case 1 :
      
      for(int i = 0;i<23;i++){//repeats 23 times
      if(student1[i]=="?"){
          cout << "+0pts. Answer ommited" << endl;//output variations of  what the user got depending on if the variables match up to they key 
          grade = grade;
          
          }
          if(student1[i+2]!=key[i]){
            cout << "+1/4pts. Incorrect"<< endl;
                      grade = grade+ incorrect;//adding to itself so it will also change
                       
      }
          if(student1[i+2]==key[i]){
            cout << "+1pts. Correct"<< endl;//outputting scores
            grade = grade +correct;
            
          }
      }
         break;
      case 2 :
          
      for(int i = 0;i<23;i++){
      if(student2[i]=="?"){
          cout << "+0pts. Answer ommited" << endl;
          grade = grade;
          
          }
          if(student2[i+2]!=key[i]){
            cout << "+1/4pts. Incorrect"<< endl;
                      grade = grade+ incorrect;
                       
      }
          if(student2[i+2]==key[i]){
            cout << "+1pts. Correct"<< endl;
            grade = grade +correct;
            
          }
      }
         break;
      case 3 :
          
      for(int i = 0;i<23;i++){
      if(student3[i]=="?"){
          cout << "+0pts. Answer ommited" << endl;
          grade = grade;
          
          }
          if(student3[i+2]!=key[i]){
            cout << "+1/4pts. Incorrect"<< endl;
                      grade = grade+ incorrect;
                       
      }
          if(student3[i+2]==key[i]){
            cout << "+1pts. Correct"<< endl;
            grade = grade +correct;
            
          }
      }
         break;
      case 4 :
 
      for(int i = 0;i<23;i++){
      if(student4[i]=="?"){
          cout << "+0pts. Answer ommited" << endl;
          grade = grade;
          
          }
          if(student4[i+2]!=key[i]){
            cout << "+1/4pts. Incorrect"<< endl;
                      grade = grade+ incorrect;
                       
      }
          if(student4[i+2]==key[i]){
            cout << "+1pts. Correct"<< endl;
            grade = grade +correct;
            
          }
      }         break;
      case 5 :
         
      for(int i = 0;i<23;i++){
      if(student5[i]=="?"){
          cout << "+0pts. Answer ommited" << endl;
          grade = grade;
          
          }
          if(student5[i+2]!=key[i]){
            cout << "+1/4pts. Incorrect"<< endl;
                      grade = grade+ incorrect;
                       
      }
          if(student5[i+2]==key[i]){
            cout << "+1pts. Correct"<< endl;
            grade = grade +correct;
            
          }
      }
         break;
      default :
        cout << "Invalid " << endl;//default
        

}
cout <<"Final Grade:"<< grade; //output grade
}
int main () {

ifstream inFS;


inFS.open("studentanswers.txt");            //check if open and status of file

cout << "Checking for file..." << endl;

  if(!inFS.is_open()){
      cout << "No file present" << endl;        //ends if no file present
      return 1;
  }
   cout << "file: studentanswers.txt detected " << endl;        //notify user
   
    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23;
    string b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23;          //declare files into individual strings
    string c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23;
    string d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23;
    string e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,e20,e21,e22,e23;
   
   
    inFS>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10>>a11>>a12>>a13>>a14>>a15>>a16>>a17>>a18>>a19>>a20>>a21>>a22>>a23;         //output txtfile to the delcared strings
      inFS>>b1>>b2>>b3>>b4>>b5>>b6>>b7>>b8>>b9>>b10>>b11>>b12>>b13>>b14>>b15>>b16>>b17>>b18>>b19>>b20>>b21>>b22>>b23;
      inFS>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15>>c16>>c17>>c18>>c19>>c20>>c21>>c22>>c23;
      inFS>>d1>>d2>>d3>>d4>>d5>>d6>>d7>>d8>>d9>>d10>>d11>>d12>>d13>>d14>>d15>>d16>>d17>>d18>>d19>>d20>>d21>>d22>>d23;
      inFS>>e1>>e2>>e3>>e4>>e5>>e6>>e7>>e8>>e9>>e10>>e11>>e12>>e13>>e14>>e15>>e16>>e17>>e18>>e19>>e20>>e21>>e22>>e23;
   
   string student1[24] = {a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23};      //place the values into own arrays depending on location
   string student2[24] = {b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23};
   string student3[24] = {c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23};
   string student4[24] = {d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23};
   string student5[24] = {e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,e20,e21,e22,e23};
 inFS.close();
 
 inFS.open("answerkey.txt");    //open text

cout << "Checking for file 'answerkey'" << endl; //notify user what the program is doing

  if(!inFS.is_open()){
      cout << "No file present" << endl;    //exits program
      return 1;
  }
   cout << "file: answerkey.txt  detected " << endl; 
   
   string k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k20,k21,k22,k23;               //declare, take input, and put into array
   inFS>>k1>>k2>>k3>>k4>>k5>>k6>>k7>>k8>>k9>>k10>>k11>>k12>>k13>>k14>>k15>>k16>>k17>>k18>>k19>>k20>>k21>>k22>>k23;
   string key[24] = {k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k20,k21,k22,k23};
   

   int choice;
   grading  output;
    cout << "Which student do you wish to view? "<< endl;               
    cout <<"Student 1: "<< student1[0] <<" "<< student1[1] << endl;
    cout <<"Student 2: "<< student2[0] <<" "<< student2[1] << endl;//display student names
    cout <<"Student 3: "<< student3[0] <<" "<< student3[1] << endl;
    cout <<"Student 4: "<< student4[0] <<" "<< student4[1] << endl;
    cout <<"Student 5: "<< student5[0] <<" "<< student5[1] << endl;
     cin >> choice;                                                 // get choice in main so it can be used easily in other functions
    output.setstudent(choice, student1, student2, student3, student4, student5);//call functions
    output.comparison( choice,  student1,  student2,  student3,  student4,  student5,  key);
  return 0;
}