#include <iostream>

using namespace std;



int main(){

    int n;

    cout<<"Enter no. of lines : \n";
    cin>>n;

    for (int i = n ; i>0 ; i--){
        for (int j = 0 ; j< i ; j++){
            cout<<" ";
            }
        if (i==n){cout<<"*\n";}
        else{
        }
    }
    return 0;
}