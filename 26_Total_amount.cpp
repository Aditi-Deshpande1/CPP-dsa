#include<iostream>
using namespace std ;

int main(){

    int amount ;

    cout<<"Enter the value of your amount : ";

    cin>>amount;

    cout<<"The total amount is : "<<amount<<endl;

    int note ;

    while(amount>0)
    {
        if(amount>=100)
        {
           note=100;
        }
        else if (amount>=50)
        {
            note = 50;
        }
        else if (amount>=20){
            note = 20;
        }
        else{
            note = 1 ;
        }

        switch(note)
          {
            case 100 : cout<<"100 note is : "<<amount/100<<endl;
                       amount = amount%100;
                       break;
            case 50 : cout<<"50 note is : "<<amount/50<<endl;
                       amount = amount%50;
                       break;
            case 20 : cout<<"20 note is : "<<amount/20<<endl;
                       amount = amount%20;
                       break;
            case 1 : cout<<"1 note is :"<<amount/1<<endl;
                     amount = amount%1;
                     break;
          }

    }
    return 0 ;
}