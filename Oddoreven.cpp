#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter the number to check odd or even : ";
    cin>>n;

    if(n%2 == 0){
        cout<<n<<" is Even \n";
    }
    else{
        cout<<n<<" is Odd \n";
    }


    return 0;
}