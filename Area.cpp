
//Including the required libraries
#include <iostream>
#include <iomanip>

//Standard Function space to be used
using namespace std;

//A class named shape for having functions area using function overloading
class Shape{
    public:

        //To calculate Area of circle
        void area(int r ){
            double area;
            area = (3.141592*r*r)/10000;
            cout<<"Area of Circle is : "<<
            fixed<<setprecision(2)<<area<<"\n";
        }

        void area(int base , int height){
           double area;
           area = (0.5 * base * height)/10000;
           cout<<"Area of triangle is : "<<fixed<<setprecision(2)<<area<<"\n";
        }

        void perimeter(int r){
            double circ;
            circ = (2 *(3.141592)   * r )/100;
            cout<<"Circumference of Circle is : "<<fixed<<setprecision(2)<<circ<<"\n";
        }

};


int main(){
    int input;
    float bt , ht , r;


    Shape circle;
    Shape triangle;

    cout<<"Do you want area of ?Type (1. Triangle 2. Circle)";
    cin>>input;

    if (input == 1){
        cout<<"Type the Base of triangle : \n";
        cin>>bt;
        bt = int(bt * 100);

        cout<<"Type the height of triangle : \n";
        cin>>ht;
        ht = int(ht * 100);

        triangle.area(bt , ht);
        }
        else{
            cout<<"Type the Radius : \n";
            cin>>r;
            r = int(r * 100);
            circle.area(r);
            circle.perimeter(r);
        }

    return 0;
}