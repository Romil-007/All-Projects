#include <iostream>

using namespace std;

int main(){
    unsigned int n , a ;
    cout<<"Enter the number of numbers you want : ";
    cin>>n;

    int arr[n];
    

    for (int i = 0 ; i<n ; i++){
        cout<<"Enter "<<i+1<<" number : \n";
        cin>>a;
        arr[i] = a;

    }

    unsigned int max = arr[0];

    for(int i = 0 ; i<n ; i++){
        
        if (arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max = "<<max;


    return 0;
}2203947043
 4294967295