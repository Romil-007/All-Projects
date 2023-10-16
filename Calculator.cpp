#include <iostream>

using namespace std;

class Calc{
    private:
        int a , b;
        char opr;
        double sum;

    public:
        void getnum()
        {
            cout<<"Enter first number : ";
            cin>>a;

            cout<<"Enter Second number : ";
            cin>>b;
            rerun:
            cout<<"Enter the Operation you want to perform : (+,-,*,/,%) : ";
            cin>>opr;

            switch(opr){
                case '+':
                    sum =addition(a,b);
                    cout<<"ADDITION OF TWO NUM : "<<a<<" + "<<b<<" = "<<sum;
                    break;
                case '-':
                    sum = subtraction(a,b);
                    cout<<"SUBTRACTION OF TWO NUM : "<<a<<" - "<<b<<" = "<<sum;
                    break;
                case '*':
                    sum = multiplication(a,b);
                    cout<<"MULTIPLICATION OF TWO NUM : "<<a<<" x "<<b<<" = "<<sum;
                    break;
                case '/':
                    sum = division(a,b);
                    cout<<"DIVISION OF TWO NUM : "<<a<<" / "<<b<<" = "<<sum;
                    break;
                case '%':
                    sum = modulus(a,b);
                    cout<<"REMAINDER OF TWO NUM DIVISON : "<<a<<" & "<<b<<" = "<<modulus(a,b);
                    break;
                default : 
                    cout<<"WRONG INPUT \n\n";
                    goto rerun;
            }
        }

        double addition(double a , double b){
            return a+b;
        }

        double multiplication(double a , double b){
            int c , d ;
            double mult;

            c = a*1000;
            d = b*1000;

            mult = (c*d)/1000000;
            return mult;

        }

        double division(double a , double b)
        {
            int c , d ;
            double mult;

            c = a;
            d = b;

            mult = int (c/d);
            return mult;

        }

        double subtraction(double a , double b)
        {
            return a - b;
        }

        double modulus(double a , double b)
        {
            return int(a) % int(b);
        }

        void showhistory()
        {
            cout<<"\n"<<a<<" "<<opr<<" "<<b<<" = "<<sum;
        }

         

};

int main(){
    int n , i=0;

    cout<<"Enter the number of calc you want to do? ";
    cin>>n;

    Calc cal[n];
    char x , y;

    
        
        
        do{

            
            
            cal[i].getnum();
            i++;
            cout<<"\nDo you want to do some more calc?";
            cin>>y;
            if(toupper(y) == 'N'){ 
                break;
            }
        } while(i<n);


        cout<<"\n\nCalc HISTORY : ";
        for(int j = 0 ; j < i ; j++ ){
            cal[j].showhistory();
        }

}