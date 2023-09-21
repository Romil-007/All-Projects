#include <iostream>

using namespace std;

//Main execution
int main() {

    //Declaring variables
    int a , fact = 1 , b=0 ;

    cout << "Enter the number you want factorial of \n";
    cin >> a;


    //Loop for factorial of the number
    for (int i =a ; i>1 ; i--) {

        fact = fact * i ;

        }

    //Loop for representing the solution

    for (int i=a ; i>=1 ; i--){

       //To Make The last variable not end with "X"
        if (i==1){
            cout << a << " = " << fact ;
            
        }

        else {
        cout << a << " x ";
        a -= 1 ; 
        }

    }

    //Printing the answer
    cout << "\nFactorial is " << fact ;

    return 0; 
}