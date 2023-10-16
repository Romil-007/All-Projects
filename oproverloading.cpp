#include <iostream>

using namespace std;

class Distance 
{
    public :
        int inch;
        void getdata(){
            int a;
            cout<<"Enter the inch : ";
            cin>>a;
            inch = a;
        }
        int operator + (Distance &a){
            Distance temp;
            inch = inch + a.inch;
            return inch;

        }
};

int main(){
    int input;

    
    

    Distance s1 , s2 , s3;

    
    s1.getdata();
    s2.getdata();

    cout<<s1+s2;

    return 0;
}