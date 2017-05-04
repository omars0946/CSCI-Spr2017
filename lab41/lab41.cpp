#include <iostream>
using namespace std;


class ArrayTools
{
public:

ArrayTools();
ArrayTools(int);                    //declaring constructors
void Print(int);
void Find_min(int i, int b);            //setting functions in class
void Find_max(int i, int b);
void Find_sum(int, int);
void Search(int, int, int );
void Is_sorted();
};
ArrayTools::ArrayTools(){
    int i;
    i = 0;
}
ArrayTools::ArrayTools(int){
    int i = 0;
}
void ArrayTools::Print(int SIZE){
    for (int i = 0; i <  SIZE; i++) {//printing values
        int myArray[i];
        
      cout << "Values: " << myArray[i]<< endl;
    }    
    return;
}
void ArrayTools::Find_min (int i, int b){
    int myArray[i];                         //declaring Array
    double min =  myArray[0];       //setting array to variable
    for (int i = 1; i < b; i++) {//between numbers, the function will execute it til it bevcomes true
        if (myArray[i]  <min){ //catchrs whether statment is true
            min = myArray[i];   //equals it to variable
        } 
        cout << min << endl;    //prints variable
        return;
}

void ArrayTools::Find_max (int i, int b){
    int myArray[i];
    double max =  myArray[0];
    for (int i = 1; i < b; i++) {
        if (myArray[i] >max){
            max = myArray[i];
        }
            cout << max << endl;
}
return;
}
void ArrayTools::Find_sum(int i, int SIZE){
    int myArray[i];
    double sum = 0;
    for (int i = 1; i < SIZE; i++) {
        sum+=myArray[i];
}
cout << sum << endl;
return;
}
void ArrayTools::Search(int value, int i, int SIZE){
    int Searching = 0;
    int myArray[i];
    if(value >-1 && value <= SIZE ){
    Searching =  myArray[value]  ;
    cout << Searching << endl;
} 
else {
    cout << endl;
}
return;
}
void Is_sorted(int i, int SIZE){
    i = 2
    int myArray[i];
 y
    if (myArray[1] >= myArray[i]) {
        cout << "No."<<endl;
        i++ ;
    }
        else if  (myArray[1] >= myArray[i]) {
        cout << "No."<<endl;
        i++ ; }
         for (int i = 1; i < SIZE; i++) {
             cout << "Yes."
         }
            
}
}
int main(){
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print(int);
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
}
