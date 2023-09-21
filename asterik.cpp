#include <iostream>
#include <sstream>

using namespace std;

int main(){

    int n = 0;
    string a = " * ";

    cout<<"Enter the rows ";
    cin>>n;

    for (int i = 1 ; i <= n ; i++){
        cout<<(string(i, i) + "  ");
        cout<<"\n";
    }

    return 0;
}