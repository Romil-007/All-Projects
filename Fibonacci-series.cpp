#include <iostream>

using namespace std;


//the main execution

int main() {

    //Naming the variables here

    int input  = 0 , b = 0 , c = 1 , series = 0;
    
    //Enter the Series
    cout <<"Welcome to fibonacci series\n";
    cout <<"Please enter the number of fibonacci you want  \n";
    cin >> input;

   


    //Loop for creating the series
    for (int i=1 ; i<input ; i++){




        //printing the start
        if (i==1){
        cout << "Here is the series \n" << b << " \n" << c << " \n";
        }



        //changing variable so it actually becomes FIBONACCI
        series = b + c;
        b = c;
        c = series ;
        
        //Series printing
        cout << series << " \n";

    }


    

    //the essential
    return 0;
}
