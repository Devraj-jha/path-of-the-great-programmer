#include <iostream>
using namespace std; 


int  change ( int x ){
    x = 100; 
    return x; 
}
int add(int a , int b ); // a,b => parameter. 
void hi(){
    cout << "hi"; // void is the data type that function reutrn. 
    // this does not return anything just put things there 
}
int main(){

int x = 10; 
cout << change(x);
cout << x; 

hi();
cout << add(2,4); // 2,4 are the arguments passed in the function. 


}
//? there is pass by value , and there is pass by reference.
//* pass by value => the original can't be changed by the function. 
//! pass by reference => 

// defination of the function. 
int add(int a, int b){
    return a + b; 
}