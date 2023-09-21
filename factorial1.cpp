#include <iostream>

using namespace std;

//Main execution
int main() {

    //Declaring variables
    int a , fact = 1 ;

    cout << "Enter the number you want factorial of \n";
    cin >> a;


    //Loop for factorial of the number
    do {
        
        fact = fact * a ;
        a--;

        }while(a>1);
    cout<<fact<<"\n";

    return 0;

}