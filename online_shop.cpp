#include <iostream>

using namespace std;

class Product{
    private:
        string prod_name;
        int quantity;
        float price;
    public:
        Product(int qn , float pr , string pn){
            prod_name = pn;
            quantity = qn;
            price = pr;
        }


        
    
};

int showmenu(int choice){
    int menu_choice;
    switch(choice){
        case 1:
            reask1:
            cout<<"\n\n                  APPARELS               \n\n";
            cout<<"1.Menswear                        2.Womenswear\n\n3.Kidswear                        4.Prev menu\n\n";
            cin>>menu_choice;
            if(menu_choice>4 || menu_choice<0){
                cout<<"\nWrong input";
                goto reask1;
            }
            if(menu_choice == 4){
                return 1;
            }
            else
            {

            }
            break;
        case 2:
            reask2:
            cout<<"\n\n                  TECH               \n\n";
            cout<<"1.Laptop                        2.Tablet\n\n3.Phone                        4.Prev menu\n\n";
            cin>>menu_choice;
            if(menu_choice>4 || menu_choice<0){
                cout<<"\nWrong input";
                goto reask2;
            }
            if(menu_choice == 4){
                return 1;
            }
            else
            {

            }
            break;
        case 3:
            reask3:
            cout<<"\n\n                        DAILYNEEDS              \n\n";
            cout<<"1.Toilet Paper (₹140 /roll)                  2.Toothpaste( 200gm  ₹99/pc)\n\n3.Soap(₹120 / pack of 4)                    4.Salt( 1kg ₹24/per packet )\n\n5.Prev Menu\n\n";
            cin>>menu_choice;
            if(menu_choice>5 || menu_choice<0){
                cout<<"\nWrong input";
                goto reask3;
            }
            if(menu_choice == 5){
                return 1;
            }
            else
            {

            }
            break;
        case 4:
            reask4:
            cout<<"\n\n                         TOYS                      \n\n";
            cout<<"1.RC CAR(₹999)                       2.RC FIGHTER JET(₹2999)\n3.Teddy(₹800 3ft height)                    4.Prev menu";
            cin>>menu_choice;
            if(menu_choice>4 || menu_choice<0){
                cout<<"\nWrong input";
                goto reask4;
            }
            if(menu_choice == 4){
                return 1;
            }
            else
            {

            }
            break;
        case 5:
            reask5:
            cout<<"\n\n                        FITNESS                \n\n";
            cout<<"1.Hand grip (80kg limit ₹400/pc)                           2.Hand wrist(₹40/pair)\n\n3.Weights (2kg ₹700/pair)                4.Prev Menu";
            cin>>menu_choice;
            if(menu_choice>4 || menu_choice<0){
                cout<<"\nWrong input";
                goto reask5;
            }
            if(menu_choice == 4){
                return 1;
            }
            else
            {

            }
            break;

        case 6:
            reask6:
            cout<<"\n\n                         MISC                         \n\n";
            cout<<"1.Set of 10pc Water bottle(₹200/set)                             2.Prev menu";
            cin>>menu_choice;
            if(menu_choice>4 || menu_choice<0){
                cout<<"\nWrong input";
                goto reask6;
            }
            if(menu_choice == 4){
                return 1;
            }
            else
            {

            }
            break;
        default:
            cout<<"\nWrong choice ";

            return 1;

    }   
}


void apparels_menu(int choice){
    int cart_add;
    switch(choice){
        case 1:
            cout<<"1.Jeans(₹800/pc)                      2.Shirt(₹1100)\n\n3.Activewear combo(₹1100/combo)                       4.Prev menu";
            cin>>cart_add;
            break;
        case 2:
            cout<<"1.Jeans(₹1100/pc)                        2.Top (₹799/pc)";
}
}

int main(){
    int menu_choice , flow;




    cout<<"\nWELCOME TO ONLINE SHOPPING MARKET OF EYERTHING ";
    cout<<"\n\n\n                A M A Z O N                   \n\n";

    cout<<"What are you interested in?";
    cout<<"\n\n1.Apparels                              2.Tech\n\n3.DailyNeeds                            4.Toys\n\n5.Fitness                               6.Misc\n\n";
    cout<<"Choose the number you want to look out for?  ";
    cin>>menu_choice;

    flow = showmenu(menu_choice);
    if(flow == 1){
        return main();
    }

    

    
}