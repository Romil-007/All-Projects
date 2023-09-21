//including the standard library to communicate with user and backend
#include <iostream>

//Using std namespace to code for future
using namespace std;


//Main loop
int main(){

    //Naamkaran
    int n;

    //Taking the number from user
    cout<<"Enter the number to check odd or even : ";
    cin>>n;

    //Checking if remainder while being divided from 2 is zero or not
    if(n%2 == 0){
        cout<<n<<" is Even \n";
    }
    else{
        cout<<n<<" is Odd \n";
    }

    //zaruri hai 
    return 0;
}