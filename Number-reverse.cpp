#include <iostream>
#include <string.h>

using namespace std ;

int main(){

    int b = 0 , reversed;

    cout<<"Input the number";
    cin>>b;

    while (b != 0){
        reversed = b % 10;
        cout<<reversed ;

        b /= 10;
    }

}   
