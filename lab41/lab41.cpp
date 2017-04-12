#include <iostream>
using namespace std;


class ArrayTools
{
private:

public:

ArrayTools();
ArrayTools(int);
void Print(int);
void Find_min(int i, int b);
void Find_max(int i, int b);
void Find_sum(int, int);
void Search(int, int, int );
void Is_sorted();
};

ArrayTools::ArrayTools{
    int i = 0;
    
}
void ArrayTools::Print(int SIZE){
    for (int i = 0; i <  SIZE; i++) {
        int myArray[i];
        
      cout << "Values: " << myArray[i]<< endl;
    }    
}
void ArrayTools::Find_min (int i, int b){
    int myArray[i];
    double min =  myArray[0];
    for (int i = 1; i < b; i++) {
        if (myArray[i]  <min){
            min = myArray[i];
        } 
}
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
}
void ArrayTools::Find_sum(int i, int SIZE){
    int myArray[i];
    double sum = 0;
    for (int i = 1; i < SIZE; i++) {
        sum+=myArray[i];
}
cout << sum << endl;
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
}
void Is_sorted(int i){
    int myArray[i];
    double max =  myArray[0];
    for (int i = 1; myArray[1] >= myArray[2]; i++) {
        cout << "No."<<endl;
           
            
}
}
int main(){
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
}