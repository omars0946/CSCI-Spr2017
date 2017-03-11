#include <iostream>
#include <iomanip>
using namespace std;


class Distance                  //declare class
{

    private:

    int _feet;
    
    public:

        //default constructors
        Distance();
        Distance(int f);

        //getters - setters
        void setfeet(long double f);
        void setinch(long double f);
        void setYards(long double f);
        void setMiles(long double f);

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
    _feet = 0;

}

//initialize the member variables to specific values
Distance::Distance( int f){

    _feet = f;

}
long double GlobalValue = 0;
//setters
void Distance::setfeet(long double f){
    cout << "How many feet do you wish to convert?" << endl;
    cin >> f;
        _feet = f;
        GlobalValue = _feet;
    }

//conversions equal to _feet
void Distance::setinch(long double f){
            f = GlobalValue * 12; 
            cout << std::setprecision(15) << f;
        _feet = f;
    }


void Distance::setYards(long double f){
            f = (GlobalValue/12) * .33333;
            cout << std::setprecision(15) << f;

        _feet = f;
    }

void Distance::setMiles(long double f){
            f = GlobalValue * 0.000568182;
            cout << std::setprecision(15) << f;
        _feet = f;
    }


//getters 
int Distance::getinch()  {
    return _feet;
}

int Distance::getFeet()  {
    return _feet;
}

int Distance::getYards()  {
    return _feet;
}
int Distance::getMiles()  {
    return _feet;
}

void Distance::print1(){
    cout << _feet << "ft. Is your value."  <<  endl; //print values seperately
}
void Distance::print2(){
    cout << "in. is your value in inches " <<  endl;
}
void Distance::print3(){
    cout << "yrds. is your value in yards " << endl;
}

void Distance::print4(){
    cout << "mi. is your value in miles " << _feet  << endl;
}

int main()
{
    Distance sum;
  
    sum.setfeet(1);
    sum.print1();
    sum.setinch(1);
    sum.print2();
    sum.setYards(1);
    sum.print3();
    sum.setMiles(1);
    sum.print4();

    cout << endl;

    return 0;
}
