#include <iostream>

using namespace std;

int main(){

    int a , b , c;

    cout<<"Write 1st number ";
    cin>>a;

    cout<<"Write 2nd number ";
    cin>>b;

    cout<<"Write 3rd number ";
    cin>>c;

    if (a>b && a>c){
        cout<<a << " is Largest";
    }
    else if (b>c && b>a){
        cout<<b<<" is Largest";
    }
    else {
        cout<<c<<" is Largest";
    }



    return 0;
}