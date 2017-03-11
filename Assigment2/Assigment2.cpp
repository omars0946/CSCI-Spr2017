#include <iostream>
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
        void setfeet(int f);
        void setinch(int f);
        void setYards(int f);
        void setMiles(int f);

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
Distance::Distance(int f){

    _feet = f;

}
//setters
void Distance::setfeet(int f){
    cout << "How many feet do you wish to convert?" << endl;
    cin >> f;
        _feet = f;
        
    }

//conversions equal to _feet
void Distance::setinch(int f){
            f = f * 12; 
        _feet = f;
    }


void Distance::setYards(int f){
            f = f * 33333;
        _feet = f;
    }

void Distance::setMiles(int f){
            f = f * 5280;
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
    cout << "Your value in feet is:" << _feet <<  endl; //print values seperately
}
void Distance::print2(){
    cout << "Your value in inches are: " << _feet  << endl;
}
void Distance::print3(){
    cout << "Your value in yards are: ." << _feet  << endl;
}

void Distance::print4(){
    cout << "Your value in miles are: " << _feet  << endl;
}

int main()
{
    Distance sum;
  
    sum.setfeet(1);
    sum.print1();
    sum.setinch(int f);
    sum.print2();
    sum.setYards(2);
    sum.print3();
    sum.setMiles(2);
    sum.print4();

    cout << endl;

    return 0;
}
