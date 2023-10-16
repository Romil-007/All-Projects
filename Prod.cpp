   // prod[i]=Product();

#include <iostream>

using namespace std;

class Product{
    private:
        int stock , id;
        string productname;
        float price;
    public:

        Product(){
            stock = 0;
            id = 0000;
            price = 0.0;
            productname = "None";
        }

        Product(int idd , string pname = "None", int st = 0, int pr = 0){
            id = idd;
            productname = pname;
            stock = st;
            price = pr;
        }

        void setdetails(){
            cout<<"\n\n______________________________";
            cout<<"\nEnter the Product ID code";
            cin>>id;
            cout<<"Product's Name : ";
            cin>>productname;
            cout<<"Price : ";
            cin>>price;
            cout<<"No. of Stocks : ";
            cin>>stock;
        }

        void getdetails(){
            cout<<"\n_________________________________";
            cout<<"\nNAME : ";
            cout<<productname;
            cout<<"\nID : "<<id<<"\n"<<"PRICE : "<<price<<"          STOCK : "<<stock<<"\n";
        }

};

int main()
{
    int n , product_no;
    char y , x;

    cout<<"Enter the number of products ";
    cin>>n;
    
    Product prod[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Details of Product "<<i+1;
        prod[i].setdetails();
    }

    access:

    cout<<"Which product you want to access? ";
    cin>>product_no;

    prod[product_no-1].getdetails();

    cout<<"\nAny changes?(y/n)";
    cin>>y;
    if(toupper(y) == 'Y'){
        prod[product_no-1].setdetails();
    }
    

    cout<<"Do you want to access details ?";
    cin>>x;
    if(toupper(x) == 'N'){
        return 0;
    }
    else{
        goto access;
    }
    
    



    return 0;
}