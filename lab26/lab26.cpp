#include <iostream>
#include <iomanip>
using namespace std;


class TemperatureConverter                  //declare class
{

    private:

    int _kelvin;
    int _celsius;
    int _farenheit;
    
    public:

        //default constructors
        TemperatureConverter();
        
        TemperatureConverter(int k);

        //getters - setters
        void SetTempFromKelvin(int k);
        void SetTempFromCelsius(int c);
        void SetTempFromFahrenheit(int f);

        int GetTempFromKelvin() ;
        int GetTempAsCelsius() ;
        int GetTempAsFahrenheit() ;
        
        void PrintTemperatures();
};


//default constructor
TemperatureConverter::TemperatureConverter()
{
        _kelvin = 0;
        _celsius = 0;
        _farenheit = 0;
}

//set constructor
TemperatureConverter::TemperatureConverter( int k){

        _kelvin = k;

}

//setters
void TemperatureConverter::SetTempFromKelvin(int k){
        _kelvin = k;
    }                                                           //set value to kelvin

void TemperatureConverter::SetTempFromCelsius(int c){
    int k = 0;
     k = c + 273.15;
            _celsius = k;                                       //given equations
    }


void TemperatureConverter::SetTempFromFahrenheit(int f){
    int k = 0;
     k = (5 * (f -32)/9) + 273.15;                              //given equations
            _farenheit = k; 
    }

//getters 

int TemperatureConverter::GetTempFromKelvin()  {
    return _kelvin;
}

int TemperatureConverter::GetTempAsCelsius()  {
    return _celsius;
}
int TemperatureConverter::GetTempAsFahrenheit()  {
    return _farenheit;
}

void PrintTemperatures(int _kelvin, int _celsius, int _farenheit){
    cout << "Kelvin is " << _kelvin << endl;
    cout << "Celsius is " << _celsius << endl;
    cout << "Fahrenheit is " << _farenheit << endl;
    return;
}
int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}