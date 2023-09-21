#include <iostream>

//setting std scope for all functions
using namespace std;

//Executing at first sight
int main(){

    //initializing values
    int a , b , c;

    //streaming to get some input to work upon
    cout<<"Write 1st number ";
    cin>>a;
    cout<<"Write 2nd number ";
    cin>>b;
    cout<<"Write 3rd number ";
    cin>>c;

    //checking the which number is largest
    if (a>b && a>c){
        cout<<a << " is Largest";
    }
    else if (b>c && b>a){
        cout<<b<<" is Largest";
    }
    else {
        cout<<c<<" is Largest";
    }



    //closing the main loop before the braces
    return 0;
}