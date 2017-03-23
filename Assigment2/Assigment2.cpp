#include <iostream>
#include <iomanip>
using namespace std;


class Distance                  //declare class
{

    private:

    int feet_;
    
    public:

        //default constructors
        Distance();
        Distance(long double f);

        //getters - setters
        void setfeet(long double f);
        void setinch(long double f);
        void setYards(long double f);
        void setMiles(long double f);

        double getinch( long double f) ;
        double getFeet( long double f) ;
        double getYards( long double f) ;
        double getMiles( long double f) ;

        void print1(); 
        void print2();   
        void print3();   
        void print4();   
};


//default constructor
Distance::Distance()
{
    feet_ = 0.0;
}

//initialize the member variables to specific values
Distance::Distance( long double f){

    feet_ = f;

}

//setters
void Distance::setfeet(long double f){
        feet_ = f;
        
    }

//conversions equal to _feet
void Distance::setinch( long double f){
              
            
        feet_ = f ;
    }


void Distance::setYards( long double f){
        

        feet_ = f ;
    }

void Distance::setMiles( long double f){
            
        feet_ = f;
    }


//getters 
double Distance::getinch( long double f)  {
    feet_ = f * 12;
    return feet_;                       //return private variable
}

double Distance::getFeet( long double f)  {
    
    return feet_;
}

double Distance::getYards( long double f)  {
    feet_ = f * .33333;
    return feet_;
}
double Distance::getMiles( long double f)  {
    feet_ = f * 0.000189394;
    return feet_;
}

void Distance::print1(){
    cout << feet_ << "ft. Is your value."  <<  endl; //print values seperately
}
void Distance::print2(){
    cout << feet_ << "in. is your value in inches " <<  endl;
}
void Distance::print3(){
    cout << feet_ <<"yrds. is your value in yards " << endl; 
}

void Distance::print4(){
    cout << feet_ <<"mi. is your value in miles " << endl;
}

int main()
{
    long double f = 0.0;
    cout << "How many feet do you wish to convert?" << endl;
    cin >> f;                       //ask user for input
        
    Distance sum;
  
    sum.setfeet(f);
    sum.getFeet(f);                      //set print after every mutator due to changing value of 'feet_'
    sum.print1();
    
    sum.setinch(f);                   //set input and initial value in parameters
    sum.print2();
    
    sum.setYards(f);
    sum.print3();
    
    sum.setMiles(f);
    sum.print4();

    cout << endl;

    return 0;
}
