

#include <iostream>

using namespace std;

int main(){

    int  a = 1;
    int alt = 1;

    while(a!=0){
        

        cout<<"Altitude : \n";
        cin>>alt;

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
            a = 0;
        }
    };

    return 0;
}