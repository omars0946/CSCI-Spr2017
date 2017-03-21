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
        Distance(int f);

        //getters - setters
        void setfeet(long double f );
        void setinch(long double i, long double f);
        void setYards(long double y, long double f);
        void setMiles(long double m, long double f);

        int getinch() ;
        int getFeet() ;
        int getYards() ;
        int getMiles() ;

        void print1(); 
        void print2();   
        void print3();   
        void print4();   
};


//default constructor
Distance::Distance()
{
    feet_ = 0;

}

//initialize the member variables to specific values
Distance::Distance( int f){

    feet_ = f;

}

//setters
void Distance::setfeet(long double f){
        feet_ = f;
        
    }

//conversions equal to _feet
void Distance::setinch(long double i, long double f){
            i = f * 12; 
            
        feet_ = i;
    }


void Distance::setYards(long double y, long double f){
            y = (f/12) * .33333;
            

        feet_ = y;
    }

void Distance::setMiles(long double m, long double f){
            m = f * 0.000568182;
            
        feet_ = m;
    }


//getters 
int Distance::getinch()  {
    return feet_;
}

int Distance::getFeet()  {
    return feet_;
}

int Distance::getYards()  {
    return feet_;
}
int Distance::getMiles()  {
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
    cin >> f;
        
    Distance sum;
  
    sum.setfeet(f);
    sum.getFeet();
    sum.print1();
    sum.setinch(1,f);
    sum.print2();
    sum.setYards(1,f);
    sum.print3();
    sum.setMiles(1,f);
    sum.print4();

    cout << endl;

    return 0;
}
