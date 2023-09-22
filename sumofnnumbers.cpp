//using standard i/o method
#include <iostream>

//Standard scope for the code
using namespace std;

//Returning integer on the main entry function
int main(){
    int a,b = 0 , i = 1;


    cout<<"How many natural numbers sum you want : \n";
    cin>>a;


    while(i <= a){

        b = b + i;
        ++i;
    }
    cout<<"sum is "<<b <<"\n";

    return 0;
}

int main(){
    cout<<"Hey";

    return 0;
}


/*
#include <iostream>

using namespace std;

int main(){
    int a,b = 0;


    cout<<"How many natural numbers sum you want : \n";
    cin>>a;


    for(int i = 1 ; i <=a ; i++){

        b = b + i;
    }
    cout<<"sum is "<<b <<"\n";

    return 0;
    */