#include <iostream>
using namespace std;

int main() {
   int birthRate_seconds = 85780618/8;
   int deathRate_seconds = 85780618/11;
   int currentPopulation = 324473000;
   int yearly = birthRate_seconds - deathRate_seconds;
   int user_yearDifference  = user_yearchoice - 2017;
   int projected population = yearly * user_yearDifference + currentPopulation;
     
     cout << "Based on the rate of the growing pupulation, we can approximate the growing population in the US" endl;
     cout << "Choose the year you wish to view";
     cin >> user_yearchoice;
     cout << "Since the current population is approximately 324,473,000" as of 2017.";
     cout << "The population in " << user_yearDifference << "years, or in " << user_yearchoice; <<  "will be: " << projected population;
     
    
 
 return 0;    
 }
 