#include <iostream>


using namespace std;

int main(){
    int n , a = 0;
    cout<<"Enter the number of words/numbers you want to enter : ";
    cin>>n;
    int search ;
    int arr[n];

    for (int i = 0 ; i < n ; i++){
        int input = 0;
        cout<<"Input the word/number for "<<i+1<<" word/number \n";
        cin>>input;
        arr[i]=input;

    }

    cout<<"Type what you want to search ";
    cin>>search;

    for(int i = 0 ; i < n ; i ++){
        if(arr[i] == search){
            cout<<search<<" is there at"<<i+1 << " number you entered ";
            a = 1;
            
        }
        else if (i == (n-1)){
            if(arr[i] != search){
                if(a != 1){
                    cout<<"Not here"; 
                }
            }
        }
    }

    return 0;
}