#include <iostream>

using namespace std;

int main(){
    int n = 0;
    
    cout<<"Enter the number of students you want to enter : \n";
    cin>>n;

    int arr[n];
    int marks = 0;
    int average = 0;




    for (int i = 0 ; i < n ; i++){

        cout<<"Enter the marks of Roll No : "<<i+1<<"\n";
        cin>>marks;
        average = average + marks;
        arr[i] = marks;
    }

    for (int i = 0 ; i<n ; i++){
        cout<<"Marks of Roll No. "<<i+1<<" : " << arr[i]<<"\n";
    }


    cout<<"AVERAGE : "<<average/n;
    return 0;
}
