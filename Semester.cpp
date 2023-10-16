//Including the library
#include <iostream>

//Standard namespace to be used
using namespace std;

//Class for getting data and maintaining the objects
class Student{

    private:

        //Initializing some value
        float sem1 , sem2 , sem3 , sem4 , sem5  ;
        float average;

    public:
        string name ;
        int roll_no;

        //Will take inputs from user and store it 
        void getdata (){
            cout<< "Name : \n";
            cin>> name;
            
            cout<<"Roll No : \n";
            cin>>roll_no;

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

            average =(sem1+sem2+sem3+sem4+sem5)/5.0;
        }

        //Checking eligiblity if the student is pass or not
        bool eligiblitycheck(){

            if (average>=70.00 && sem1 >= 60.00 && sem2 >= 60.00 && sem3 >= 60.00 && sem4 >= 60.00 && sem5 >= 60.00){
                return true;
            }
            else{
                return false;
            }
        }


        //Displaying data of the object
        void displaydata(){
            cout<<"\nName    : " << name <<"\n";
            cout<<"Roll No : "<<roll_no<<"\n";
            cout<<"Average : " << average <<"\n";
            cout<<"---------------------------\n";
        }


};


//Main loop or entry function
int main(){

    //initializing value
    int n , search;
    char a;

    //Taking how many object we have to enter
    cout<<"How many Data you want to enter : ";
    cin>>n;
    Student stud[n];

    //Creating A loop to get the desired amount of data
    for(int i = 0 ; i<n ; i++){
        stud[i].getdata();
    }

    //To get the Data on the screen 
    for(int i = 0 ; i<n ; i++){

        stud[i].displaydata();
        stud[i].eligiblitycheck();
    }
    
    cout<<"Do you want to Check some student's eligiblity \n";
    cin>>a;

    if (a == 'y' || a == 'Y'){
        cout<<"Write the Roll No. you want to look for \n";
        cin>>search;

        for (int i = 0 ; i < n ; i ++){
            if (search == stud[i].roll_no){
                 if (stud[i].eligiblitycheck() == true){
                    stud[i].displaydata();
                    cout<<"\n"<<stud[i].name<<" IS ELIGIBLE FOR THE NEXT SEMESTER"<<"\n";
                    }
                else {
                    stud[i].displaydata();
                    cout<<"\n"<<stud[i].name<<" IS NOT ELIGIBLE FOR THE NEXT SEMESTER"<<"\n";
                }
            }
            else{
                continue;
            }
        }
    }

    //Essential
      return 0;
}