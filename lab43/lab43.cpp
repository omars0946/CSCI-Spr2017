#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




class Cart{
    private:
    
    string object_ ;
    double price_ ;
    int quantity_ ;
    double sum_;//
    public:
    
    void setObject( int i,double price[], string object[], int quantity[]);
    string getObject();
    void setPrice( int i,double price[], string object[], int quantity[]);//state mutator functions
    double getPrice();                                                          //accessor functions
    void setQuantity( int i,double price[], string object[], int quantity[]);
    int getQuantity();
    void setSum( int i,double price[], string object[], int quantity[], double sum[]);
    double getSum();
    
    void print();
    Cart();
};

Cart::Cart(){
    
    object_ = "No Chosen Object";
    price_ = 0.0;
    quantity_ = 0;
    return;
}


void Cart::setObject( int i,double price[], string object[], int quantity[]){
    object_ = object[i];
}
string Cart::getObject(){
    return object_;
}
void Cart::setPrice(int i,double price[], string object[], int quantity[]){
    price_ = price[i];
}
double Cart::getPrice(){
    return price_;
}
void Cart::setQuantity(int i,double price[], string object[], int quantity[]){
    quantity_ = quantity[i];
}
int Cart::getQuantity(){
    return quantity_;
}
void Cart::setSum(int i,double price[], string object[], int quantity[], double sum[]){
    sum_ = object[i] * quantity[i];
}
double Cart::getSum(){
    return sum_;
    
}

void Cart::print(){

cout <<"Item-" <<" "<< getObject() << " price: "<< getPrice() << " qty-" << getQuantity() <<" total- " << getSum() << qendl;
    }

int main(){
int  i;  
int SIZE;
int quantity[11] = {0,10,10,10,10,10,10,10,10,10};
double price[11] = {0,3.99,2.99,4.99,6.99,3.99,5.99,2.50,11.99,7.99,1.99};
string object [11] = {"Nothing", "Bread", "Milk", "Ice Cream", "Strawberries", "Sugar", "Pancake Mix", "Cereal", "Coffee", "Eggs(s)", "Carrots(s)" }; 
double sum[11] = {0,0,0,0,0,0,0,0,0,0};
       Cart show;
    cout << "Welcome to the online shopping cart!" << endl;
    cout << "       Please browse our menu" << endl;
    cout << "     __________________________" << endl;

    cout << "   1) Bread - $3.99" << endl;
    cout << "   2) Milk - $2.99"<< endl;
    cout << "   3) Ice Cream - $5.00"<< endl;
    cout << "   4) Strawberries - $6.99"<< endl;                //display menu
    cout << "   5) Sugar - $3.99"<< endl;
    cout << "   6) Pancake Mix - $5.99"<< endl;
    cout << "   7) Cereal - $2.50"<< endl;
    cout << "   8) Coffee - $11.99"<< endl;
    cout << "   9) Egg(s) - $7.99"<< endl;
    cout <<"  10) Carrot(s) - $1.99"<< endl;
    cout <<"How many objects did you wish to purchase today" << endl;
    cin >>SIZE;
     for(int m=0;m<SIZE;m++){
    cout << "Please choose an item to purchase" << endl;
    cin>>i;                                                 //ask for input in main
    
    show.setObject(  i, price,  object,  quantity);
    show.getObject();
    show.setPrice(  i, price,  object,  quantity);      //call functions
    show.getPrice();
    show.setObject(  i, price,  object,  quantity);
    show.getObject();
    show.setSum(  i, price,  object,  quantity, sum);
    show.getSum();
    }
    show.print();//print
    
    
    
    
   cout << "Thanks for Shopping" << endl;
    return 0;

}