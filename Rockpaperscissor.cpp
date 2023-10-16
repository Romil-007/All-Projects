#include <iostream>

using namespace std;

int nr = 0 , np = 0, ns = 0 , turn = 0;
float pr , pp , ps;



int game(int turn , int user ){
    int a = 0;
    label:
    switch (user)
    {
     case 1:
        cout<<"User : ROCK";
        nr += 1;
        
        break;
     case 2:
        cout<<"User : Scissor";
        ns += 1;
        break;
     case 3:
        cout<<"User : Paper";
        np += 1;
        break;
    }

    if (turn > 6){
        turn = 1;
        goto label;
    }
    return (a = rand() % 3);
}

int computer(int comp){
    label:
    
    if(turn < 4){
        switch (comp)
        {
            case 1:
                return 1;

            case 2:
                
            
                return 2;
            case 3:
                
                return 3;
        }
    }
    else
    {
        pr = nr/turn*100;
        ps = ns/turn*100;
        pp = np/turn*100;

        cout<<"\nPROBABILITY OF ROCK : "<<pr<<" SCISSOR : "<<ps<<" PAPER : "<<pp<<"\n\n";

        if(ps>pp && ps> pr){
            
            return 1;
        }
        if(pp>ps && pp>pr){
            return 2;
        }
        else{
            return 3;
        }
        
    }
    
}



int main(){
    

    int user,comp;
    int point;
    char y;

    int *score = &point;

    cout<<"HEY WELCOME TO ROCK PAPER SCISSOR GAME : \n\n\n";
    
    game :
        srand((unsigned int) time(NULL));
        // cout<<*score;
        cout<<"What do you want to choose (1.ROCK , 2. SCISSOR , 3. PAPER\n";
        cin>>user;

        if(user>3 && user < 1){
            cout<<"Wrong input .. Please choose carefully\n\n";
            goto game;
        }
        else{
            turn++;
        }

    comp = (rand() % 3)+1;
    game(turn , user);
    comp = computer(comp);
    if (comp == 1){
        cout<<"      comp choice  : rock";
    }
    else if (comp == 2){
        cout<<"       comp choice : scissor";
    }
    else{
        cout<<"       comp choice :  paper";
    }

    cout<<"\n\nPlay again?  (y for yes n for no :) )\n";
    cin>>y;

    if(y == 'y'){
        goto game;
    }

    return 0;
}