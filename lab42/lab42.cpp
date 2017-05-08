#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print(string object[], double price[], int stock[], int SIZE, int a, int i, double outcome[], int quantity[], int qty){
    double sum[10];
    double total[10];//declare variables for print
    double receipt = 0;
    cout << "Printing Receipt" << endl;
    total[i] =total[i] - sum[i];
    receipt = receipt + sum[i];
    for(int m=0;m<SIZE;m++){//repeat until condition met
        sum[i]=price[i+1]*quantity[i+1];//repeat output with int i changing 
        cout <<"Item- " << m+1 <<" "<< object[i] << " price: "<< price[i+1] << " qty-" << quantity[i+1] <<" total- " << sum[i] << " quanitity left: "<<endl;
        
    }
    cout <<"Total is: " << receipt << endl;
}
void chooseObject(int a, int i, string object[], double price[], int stock[], double outcome[], int quantity[], int qty){
   
    cout <<"Choose a selection" << endl; 
    cin >> i;//ask for input
    object[i];
    price[i];
    stock[i];
            cout << object[i] <<" "<< price[i]<<  endl;
            cout << "How many of the selection would you like?"<< endl;
            cin >> a ;
            quantity[a];
          outcome[i] =  price[i]*quantity[a];  //print total outcome
          qty = stock[i] - quantity[a];
          cout << "Total for object:" << outcome[i]<<endl;
          cout << "Stock left "<< qty << endl;
}
int main(){
   
    int stock[10] = {10,10,10,10,10,10,10,10,10,10};
    double price[11] = {0,3.99,2.99,4.99,6.99,3.99,5.99,2.50,11.99,7.99,1.99};//define the arrays 
    string object [11] = {"Nothing", "Bread", "Milk", "Ice Cream", "Strawberries", "Sugar", "Pancake Mix", "Cereal", "Coffee", "Eggs(s)", "Carrots(s)" }; 
    int i;
    int a;
	int SIZE;               //declare and define the variables
	double outcome[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int sum;
    int qty;
    int quantity[11] = {0,1,2,3,4,5,6,7,8,9,10};
    
    cout << "Welcome to the online shopping cart!" << endl;
    cout << "       Please browse our menu" << endl;
    cout << "     __________________________" << endl;

    cout << "1) Bread - $3.99"<< endl;
    cout << "2) Milk - $2.99"<< endl;
    cout << "3) Ice Cream - $4.99"<< endl;                  //display store
    cout << "4) Strawberries - $6.99"<< endl;
    cout << "5) Sugar - $3.99"<< endl;
    cout << "6) Pancake Mix - $5.99"<< endl;
    cout << "7) Cereal - $2.50"<< endl;
    cout << "8) Coffee - $11.99"<< endl;
    cout << "9) Egg(s) - $7.99"<< endl;
    cout <<"10) Carrot(s) - $1.99"<< endl;
    cout << "How many objects are you purchasing?"<<endl;
    cin >> SIZE;
    for(int m=0;m<SIZE;m++){ 
    chooseObject( a,  i, object, price, stock, outcome, quantity, qty);
    
    }
    print( object,  price,  stock,  SIZE,  a,  i,  outcome, quantity, qty);//call functions
    
    return 0;
}
