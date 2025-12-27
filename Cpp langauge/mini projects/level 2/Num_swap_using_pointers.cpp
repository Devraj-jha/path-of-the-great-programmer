#include <iostream>
using namespace std; 

int main(){
// lets' seee, 
// there are 2 numbers and i have to swap them using pointers. 
//? how. 

int a,b; 
cin >> a >> b; 

int *pa = &a; 
int *pb = &b; 
//. i have memoery adress of both of these. 
// i can sawp the memory adress by taking the 
int temp = *pa;  
*pa = *pb;      
*pb = temp;      // b = old a
 

cout << *pa; 
cout << *pb; 
    
}