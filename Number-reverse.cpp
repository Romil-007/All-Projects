//including useful libraries in the code
#include <iostream>
#include <string.h>

//Standard namespace is being used here
using namespace std ;

//Executed to be first
int main(){

    //initializing and declaring some variables
    int b = 0 , reversed;

    cout<<"Input the number";
    cin>>b;

    //it is working on remainder algorithm
    while (b != 0){
        reversed = b % 10;
        cout<<reversed ;

        //making sure b is getting to zero at one point so it doesn't just infinetly loop
        b /= 10;
    }


    //Returning nothing to no one but essential
    return 0;

}   
