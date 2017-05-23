#include <iostream>
#include <fstream>
#include <string>
#include<math.h>
using namespace std;

class PM{//ProjectileMotion
    public:
    void setTime(double TotalTime);
    void setDistance(double TotalDistance);
    void setMaxHeight(double MaxHeight);
    
    double getTime();
    double getDistance();
    double getMaxHeight();
    
    PM();
    PM(double, double, double);
    private:
    double TotalTime_;
    double TotalDistance_;
    double MaxHeight_;
};
PM::PM() {  // Default constructor
   TotalTime_  = 0.0;    // Default time
   TotalDistance_  = 0.0;    // Default distance   
   MaxHeight_  = 0.0;    // Default MaxHeight
   return;
}
PM::PM(double TotalTime,double TotalDistance, double MaxHeight) {  //  constructor
   TotalTime_  = TotalTime;    //  time
   TotalDistance_  = TotalDistance;    //  distance   
   MaxHeight_  = MaxHeight;    //  MaxHeight
   return;
}

void PM::setTime(double TotalTime){
    TotalTime_ = TotalTime;
}
void PM::setDistance(double TotalDistance){
    TotalDistance_ = TotalDistance;
}
void PM::setMaxHeight(double MaxHeight){
    MaxHeight_ = MaxHeight;
}
double PM::getTime(){
    return TotalTime_;     
 }
double PM::getDistance(){
    return TotalDistance_;     
 }
double PM::getMaxHeight(){
    return MaxHeight_;     
 }

int main() {
double const pi = 3.14159265;
int choice;
double gravity = 0.0;
string userPlanet;
double Height, degrees, velocity;

    ifstream inFS;
    ofstream outFS;
   inFS.open("Gravity.txt");
   
   if (!inFS.is_open()) {
      cout << "Could not open file Gravity.txt" << endl;
      return 1;
   }
    // Output file stream
   outFS.open("Display.txt");   //checking files
   
   if (!outFS.is_open()) {
      cout << "Could not open file Display.txt." << endl;
      return 1;
   }
   string Planet1,Planet2,Planet3,Planet4,Planet5,Planet6,Planet7,Planet8,Planet9,Planet10; //create variables for planets and gravity inputs
   double g1,g2,g3,g4,g5,g6,g7,g8,g9,g10;
  
inFS>>Planet1>>g1>>Planet2>>g2>>Planet3>>g3>>Planet4>>g4>>Planet5>>g5>>Planet6>>g6>>Planet7>>g7>>Planet8>>g8>>Planet9>>g9>>Planet10>>g10;
  
   
   cout << "Welcome to the projectile motion simulator" << endl;
   cout << "1) " << Planet1 << endl;
   cout << "2) " << Planet2 << endl;
   cout << "3) " << Planet3 << endl;
   cout << "4) " << Planet4 << endl;
   cout << "5) " << Planet5 << endl;    //display planets fron input file
   cout << "6) " << Planet6 << endl;
   cout << "7) " << Planet7 << endl;
   cout << "8) " << Planet8 << endl;
   cout << "9) " << Planet9 << endl;
   cout << "10) " << Planet10 << endl;
   cout << "Which planet would you like to do this simulation on" << endl;
   cin >> choice;

  switch(choice) {
      case 1 :
      gravity = g1;
      userPlanet = Planet1;
         break;
      case 2 :
      gravity = g2;
      userPlanet = Planet2;     //output planet list
         break;
        case 3 :
      gravity = g3;
      userPlanet = Planet3;
         break;
        case 4 :
      gravity = g4;
      userPlanet = Planet4;
         break;
        case 5 :
      gravity = g5;
      userPlanet = Planet5;
         break;
        case 6 :
      gravity = g6;
      userPlanet = Planet6;
         break;
      case 7 :
      gravity = g7;
      userPlanet = Planet7;
         break;
        case 8 :
      gravity = g8;
      userPlanet = Planet8;
         break;
        case 9 :
      gravity = g9;
      userPlanet = Planet9;
         break;
        case 10 :
      gravity = g10;
      userPlanet = Planet10;
         break;
    default :
        cout << "Invalid " << endl;
        break;
   }
inFS.close();
 cout << userPlanet <<": gravity "<< gravity << endl;
 cout << "Height from the ground(m):";
 cin >> Height;                                                 //asking for input data
 cout << "What angle your are launching your projectile from:";
 cin >> degrees;
 cout << "Whats the intitial velocity(m/s):";
 cin >> velocity;
 
double y,a,x,b;
double MaxHeight, Time1, TotalTime, TotalDistance;
    
    a = degrees * pi / 180.0;   //convert to radians
    y = velocity * sin(a);  //input to formula
    Time1=y/gravity;        //first time or half of the arc
    
    b = degrees * pi / 180.0;   //convert to radians
    x = velocity * cos(a);  //input to formula
          
    
    
    MaxHeight = y / Time1 - (0.5 * gravity * pow(Time1,2));     //calculating max height
    MaxHeight =sqrt(MaxHeight) + Height;// add height from initial input
    
    TotalTime = (gravity) / (MaxHeight * 2);        
    TotalTime =  sqrt(TotalTime) + Time1;
    
    TotalDistance = x * TotalTime;
    
  
    
    PM Final;
    
    Final.setMaxHeight( MaxHeight);
    Final.setDistance(TotalDistance);
    Final.setTime(TotalTime);
    
    outFS << "Your max height is:" << Final.getMaxHeight() << "m (including initial " << Height << "m)" << endl;
    outFS << "Your Total Distance is: " << Final.getDistance() << "m" << endl;
    outFS << "Your total time is:" << Final.getTime() << "s"<< endl;
    
     inFS.close();
     outFS.close();
    

   return 0;
}

