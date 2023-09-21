#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;


int main(){

    string c , result;
    srand((unsigned int) time(NULL));
    int a = rand() % 2;


    cout<<"Do you want to start coin toss(y/n)?";
    cin>>c;

    if(c=="y"){
    
    sleep(2);
    result = (a==0)? "Heads":"Tails";
    cout<< result;
    }
    

    return 0;
}