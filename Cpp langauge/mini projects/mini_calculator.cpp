// takes input => 
// takes operator 
// do stuff produces out put
#include <iostream> // this library for input output function

using namespace std; // generally not a good pratice as it improts everything frm the standard lbirary


int main(){
    double a,b; 
    char op; 
    cout <<"------Calculator--------\n";
    cout << " Enter your number 1: \n" ;
    cin >> a; 
    cout << "Enter your number 2: \n";
    cin >> b;
    cout << " choose operator (+,-,*,/): \n";
    cin >> op ;

    switch (op){
        case '+':
            cout << "sum is : " << a+ b <<"\n"; 
            break;
        case '-':
            cout << "sub is : " << a - b; 
            break; 
        case '*':
            cout << "multi is : " << a * b; 
            break;
        case '/':
            cout << "division is : " << a /b ; 
            break; 
        default: 
            cout << "Enter something correct: ";
            break;


    }
}