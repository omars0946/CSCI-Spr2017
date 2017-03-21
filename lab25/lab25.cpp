#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Bbook                  //declare class
{

    private:

    string _Title;
    string _Author;
    string _Copyright;
    
    public:

        //default constructors
        Bbook();
        Bbook(string t, string a, string c);

        //getters - setters
        void setTitle(string t);
        void setAuthor(string a);
        void setCopyright(string c);
       

        string getTitle() ;
        string getAuthor() ;
        string getCopyright() ;
    

        void print1(); 
       
};


//default constructor
Bbook::Bbook()
{
    string _Title;
    string _Author;
    string _Copyright;
}

//initialize the member variables to specific values
Bbook::Bbook(string t, string a, string c){
    _Title = t;
    _Author = a;
    _Copyright = c;
}
//setters
void Bbook::setTitle(string t){
        _Title = t;
    }

//conversions equal to _feet
void Bbook::setAuthor(string a){
        _Author = a;             
    }


void Bbook::setCopyright(string c){
        _Copyright = c;             
    }

//getters 
string Bbook::getTitle()  {
    return _Title;
}

string Bbook::getAuthor()  {
    return _Author;
}

string Bbook::getCopyright()  {
    return _Copyright;
}

void Bbook::print1(){
    cout << "The title of the book is: "<< _Title <<  endl; 
    cout << "The Author name is: "<< _Author <<  endl;
    cout << "The Copyright year is: "<< _Copyright <<  endl; //print values seperately
}


int main()
{
    string t;
    string a;
    string c;
    
    cout << "Please enter the name of the book" << endl;
    cin >> t;
    cout << "Please enter the name of the author" << endl;
    cin >> a;
     cout << "Please enter the copyright year" << endl;
    cin >> c;
    
    Bbook total;
  
    total.setTitle(t);
    total.setAuthor(a);
    total.setCopyright(c);
    total.print1();

    cout << endl;

    return 0;
}
