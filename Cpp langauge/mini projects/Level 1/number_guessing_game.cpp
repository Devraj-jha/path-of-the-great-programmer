// generate the random number 
// ask user for the input 
// checks if that is higher or lower than our input
//print higher and lower. 
// give him chanches till he guess. 

#include <iostream>
#include <random> //mordern way to genrate the number

using namespace std; 
int main (){
    random_device rd; //computer can't guess thing, this acts like a spark a starting point. 
    //
   
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0,10);

    int rndnum = distr(gen);
    cout << "---- NUMBER GUESS GAME ----\n";

    while(true){
    
    cout << "Enter your number: " ;   
    int guess; 
    cin >> guess; 
    if(guess == rndnum){
        cout << "You win !!";
        break;
    }else if( guess < rndnum){
        cout << "Low !!\n ";

    }else{
        cout << "high !! \n";
    }

    }
   

}