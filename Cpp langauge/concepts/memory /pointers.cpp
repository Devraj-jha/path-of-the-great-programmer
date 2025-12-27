#include <iostream>
#include <memory>

using namespace std; 

// Example causing excessive memory usage

int main(){
    int x = 10; //this is stored in stack. 

    cout << &x << endl; //this is adress of operator this tells the adress of the variable. in ram

    int * p = &x; //this makes when the star is put next to data types it tells that this isn't an integer it holds an adress for an interger.
    cout << p <<endl; // this hold memory adress.
    cout << *p <<endl; // this points towards that adress. 
    cout << &p << endl; // pointer has its own memeory adress. 


    int& k = x; // this is like giving nickname to the exisitng variable.  
    cout << k << endl; 
}
// A pointer -> a variable that stores a memeory adress. 
//copying happen when we pass the value. inside a function. 
// I 