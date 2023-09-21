//Communicating to the terminal using this
#include <iostream>

//Std scope to use in the below code
using namespace std;

//First things First
int main(){

    //Variable Naamkaran
    int n;

    
    cout<<"Which number's table you want ? \n";
    cin>>n;


    //Loop for generating the table
    for (int i = 1 ; i <= 10 ; i++){

        cout<<n<<" x "<<i<<" = "<< n * i << "\n";
    } 


    //karna padta 
    return 0;   
}