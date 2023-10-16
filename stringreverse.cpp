#include <iostream>

//Standard namespace Used
using namespace std;

//Main Entry Function
int main(){
    int   len, n ;
    string a  ;

    cout<<"Enter the string \n";
    cin>>a;

    //Taking length of the string    
    len = a.size();
    n = len -1;

    

    //Using swap function in For loop for half the length of string
    for(int i=0;i<(len/2);i++)
    {
      swap(a[i],a[n]);
    n = n-1;

    }

    //Printing the reversed string
    cout<<a;
    
    //Returning an Integer value
    return 0;
}