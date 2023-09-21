//Including header files
#include <iostream>

//using standard scope for functions
using namespace std;


//Our main loop
int main(){

    //initializing variables
    int  a = 1;
    int alt = 1;

    //Loop which will work till we land
    while(a!=0){
        

        cout<<"Altitude : \n";
        cin>>alt;


        //All conditions checking
        if (alt > 10000){
            cout<<"Go around \n";
        }
        else if(alt >= 5000 && alt <= 10000){
            cout<<"Get more Lower for landing \n";
        
        }
        else if(alt < 5000 && alt >= 2000 ){
            cout<<"Landing standby \n";
        }
        else if(alt < 2000 && alt> 1000){
            cout<<"Landing gear Initiate \n";
        }
        else if(alt<=1000){
            cout<<"Apply thrust and start landing \n";
            //making the loop break below 
            a = 0;
        }
    };

    //returning int value for our int main functn
    return 0;
}