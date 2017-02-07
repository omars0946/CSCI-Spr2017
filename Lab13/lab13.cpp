#include <iostream>
using namespace std;

int main() {
   int birthRate = 85780618/8;
   int deathRate = 85780618/11; 
   
   int currentPopulation = 324473000;
   int yearly = birthRate - deathRate;
   int user_yearDifference  = user_yearchoice - 2017;
   int projected_population = yearly * user_yearDifference + currentPopulation;
     
     cout << "Based on the rate of the growing pupulation, we can approximate the growing population in the US"; endl
     cout << "Choose the year you wish to view"; endl
     cin >> user_yearchoice;
     cout << "Since the current population is approximately 324,473,000 as of 2017."; endl
     cout << "The population in "<< user_yearchoice; <<  "will be: " << projected_population; 
     
    
 
 return 0;    
 }
 