#include <iostream>

using namespace std;


int calcleap(int from , int to ){

    int day = 0;
    
     
    for(int i = from ; i<to ; i++){
        if((i% 4 == 0 && i % 100 != 0)||i % 400 == 0){
            day++;
        }
    }
    return day;


}


bool check(int date , int month , int year){
    if (date > 31 || date < 1 || month < 1 || month > 12 || year < 1000){
            cout<<"Non existing input for date/month PLEASE REENTER";
            return false;
    }else if (date > 29 && month == 2){
        cout<<"February has only upto 29 inputs PLEASE REENTER";
        return false;
    }else if (date > 30){
        if (month == 1 || month == 3 ||month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            return true;
        }else{
            cout<<"Your entry exceeds month's last date PLEASE REENTER";
            return false;
        }
    }else{
        return true;
    }
}





int month(int dt , int from , int  to)
{
    int sumf = 0 , sumt = 0;


   
    
    switch(from)
    
    {
        case 1:
            sumf += 334;
            break;
        case 2:
            sumf += 306;
            break;
        case 3:
            sumf += 275;
            break;
        case 4:
            sumf += 245;
            break;
        case 5:
            sumf += 214;
            break;
        case 6:
            sumf += 184;
            break;
        case 7:
            sumf += 153;
            break;
        case 8:
            sumf += 122;
            break;
        case 9:
            sumf += 92;
            break;
        case 10:
            sumf += 61;
            break;
        case 11:
            sumf += 31;
            break;
        case 12:
            sumf += 0;
            break;
     }

     switch (to){
        case 1 :
            sumt += dt;
            break;
        case 2:
            sumt += dt + (30 -1);
            break;
        case 3:
            sumt += dt +( 61 -1);
            break;
        case 4:
            sumt += dt +( 92 -1);
            break;
        case 5:
            sumt += dt + (122 -1);
            break;
        case 6:
            sumt += dt + (153 -1);
            break;
        case 7:
            sumt += dt + (184 -1);
            break;
        case 8:
            sumt += dt + (214 -1);
            break;
        case 9:
            sumt += dt + (245 -1);
            break;
        case 10:
            sumt += dt + (275 -1);
            break;
        case 11:
            sumt += dt + (306 -1);
            break;
        case 12:
            sumt += dt + (334 -1);
            break;
    }
    return sumt + sumf;
}



int main (){    
    int datef,monthf,yearf,datet,montht,yeart;
   
    int diff = 0 , totald = 0;
    int leapd = 0;

    cout<<"Welcome to date calculator it will calculate the days between two date you provide";
    start:
    cout<<"\nFROM DATE (DD/MM/YYYY) : \n";
    cin>>datef>>monthf>>yearf;
    if (check(datef,monthf,yearf) == false){
        goto start;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    }
    
    

    cout<<"TO DATE (DD/MM/YYYY) : \n";
    cin>>datet>>montht>>yeart;
    if (check(datet,montht,yeart) == false){
        goto start;
    }


    if (yeart>yearf){
    diff=(yeart-yearf)-1;
    }else{diff = -((yearf-yeart)-1);}


    leapd = calcleap(yearf ,yeart );


    if (monthf >= 2){
        if (monthf == 2){
            if (datef < 29){
                leapd -- ;
            }
        }
        
    }else{leapd ++;}

    if (montht <= 2){
        if (!(datet == 29 && montht == 2)){
            leapd -- ;
        }
    }


    if (monthf == 3 || monthf == 5 || monthf == 1 || monthf == 7 || monthf == 8 || monthf == 10 || monthf == 12){
        totald += (31 - (datef+1));
    }
    else if(monthf == 2){
        totald += (28 - (datef+1));
    }
    else{
        totald += (30 - (datef+1));
    }



    
    totald += month(datet , monthf , montht);
    totald += (diff*365) ;
    totald += leapd;
    
    cout<<totald;

    return 0;
}