#include <iostream>

using namespace std;

int main(){
    int   len, n ;
    string a  ;

    cout<<"Enter the string \n";
    cin>>a;

    
    len = a.size();
    n = len -1;

    


    for(int i=0;i<(len/2);i++){
    
    swap(a[i],a[n]);
    n = n-1;

  }

    
    cout<<a;
    

    return 0;
}