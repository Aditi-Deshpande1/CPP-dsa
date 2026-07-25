#include <iostream>
using namespace std;

int main ()
 {
//     int  num = 2;

//     cout<<endl;

//     switch(num)
//     {
//         case 1:
//             cout<<"First"<<endl;
//             break;
        
//         case 2 :
//             cout<<"Second"<<endl;
//             break;
            
//         default : 
//             cout<<"It is a default case"<<endl;
//     }

//     cout<<endl;

    // char ch = '1';

    // cout<<endl;

    // switch (ch){
    //     case 1:
    //         cout<<"First"<<endl;
    //         break;
    //     case '1':
    //         cout<<"Character 1"<<endl;
    //         break;    
    // }

    // cout<<endl;


    int  num = 1;
    char ch='1';

    switch(ch)
    {
        case 1 : cout<<"First"<<endl;
                 break;

        case '1':switch(num)
        {
            case 1 : cout<<"Value of nume is "<< num <<endl;
                     break;
        }  
        break;
        
        default : cout<<"It is a default case"<<endl;
         
    }

    return 0;



}