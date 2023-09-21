//Including the library
#include <iostream>

//Standard namespace to be used
using namespace std;


//Class for getting data and maintaining the objects
class Student{

    public:

        //Initializing some value
        int a  ;

        int sem1 , sem2 , sem3 , sem4 , sem5  ;
        float average;

        string name;

        //Will take inputs from user and store it 
        void getdata (){
            cout<< "Name : \n";
            cin>> name;

            cout << " Semester - 1 Marks -   \n";
            cin >>sem1;

            cout<< " Semester - 2 Marks -   \n";
            cin >>sem2;

            cout<< " Semester - 3 Marks -   \n";
            cin >>sem3;

            cout<< " Semester - 4 Marks -   \n";
            cin >>sem4;

            cout<< " Semester - 5 Marks -   \n";
            cin >>sem5;

            average =(sem1+sem2+sem3+sem4+sem5)/5;
        }

        //Checking eligiblity if the student is pass or not
        bool eligiblitycheck(){

            if (average>=70.00 && sem1 >= 60 && sem2 >= 60 && sem3 >= 60 && sem4 >= 60 && sem5 >= 60){
                return true;
            }
            else{
                return false;
            }
        }


        //Displaying data of the object
        void displaydata(){
            cout<<"Name :" << name <<"\n";
            cout<<"Average : " << average <<"\n";
        }


};


//Main loop or entry function
int main(){

    //initializing value
    int n;

    cout<<"How many Data you want to enter : ";
    cin>>n;
    Student stud[n];

    for(int i = 0 ; i<n ; i++){

        stud[i].getdata();

        

    }

    for(int i = 0 ; i<n ; i++){

        stud[i].displaydata();
        stud[i].eligiblitycheck();
    }

    for(int i = 0 ; i<n ; i++){

        if (stud[i].eligiblitycheck() == true){

            cout<<stud[i].name<<" is eligible for next semester"<<"\n";
        }
        else {

            cout<<stud[i].name<<" is Not eligible"<<"\n";
        }

    }
    
      return 0;
}