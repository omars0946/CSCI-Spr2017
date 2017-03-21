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

//set constructors
Bbook::Bbook(string t, string a, string c){
    _Title = t;
    _Author = a;
    _Copyright = c;
}
//setters
void Bbook::setTitle(string t){
        _Title = t;
    }

//equL to inputs
void Bbook::setAuthor(string a){
        _Author = a;             
    }


void Bbook::setCopyright(string c){
        _Copyright = c;             
    }


string Bbook::getTitle()  {
    return _Title;
}

string Bbook::getAuthor()  {            //accessor functions
    return _Author;
}

string Bbook::getCopyright()  {
    return _Copyright;
}

void Bbook::print1(){
    cout << "The title of the book is: "<< _Title <<  endl; 
    cout << "The Author name is: "<< _Author <<  endl;
    cout << "The Copyright year is: "<< _Copyright <<  endl;
    cout << endl;//print values seperately
}


int main()
{
    string t;
    string a;
    string c;
    string t2;
    string a2;
    string c2;
    string t3;
    string a3;      //declaring all the variables that are goingto be used
    string c3;
    string t4;
    string a4;
    string c4;
    string t5;
    string a5;
    string c5;
    
    cout << "Please enter the name of the book, the author, and copyright year" << endl;
    cin >> t;
    cin >> a;
    cin >> c;
    cout << "Please enter the name of the book, the author, and copyright year" << endl;
    cin >> t2;
    cin >> a2;          //asking your inputs to be put in the function
    cin >> c2;
     cout << "Please enter the name of the book, the author, and copyright year" << endl;
    cin >> t3;
    cin >> a3;
    cin >> c3;
     cout << "Please enter the name of the book, the author, and copyright year" << endl;
    cin >> t4;
    cin >> a4;
    cin >> c4;
     cout << "Please enter the name of the book, the author, and copyright year" << endl;
    cin >> t5;
    cin >> a5;
    cin >> c5;
    
    Bbook total;
  
    total.setTitle(t);
    total.setAuthor(a);
    total.setCopyright(c);                      //setting same functions with a different input
    total.print1();
    
    total.setTitle(t2);
    total.setAuthor(a2);
    total.setCopyright(c2);
    total.print1();
    
    total.setTitle(t3);
    total.setAuthor(a3);
    total.setCopyright(c3);
    total.print1();
    
    total.setTitle(t4);
    total.setAuthor(a4);
    total.setCopyright(c4);
    total.print1();
    
    total.setTitle(t5);
    total.setAuthor(a5);
    total.setCopyright(c5);
    total.print1();
    
    cout << endl;

    return 0;
}
