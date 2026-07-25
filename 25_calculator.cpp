#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout << "Enter two numbers : ";
    cin>>a>>b;
    // int num;
    // cout<<"Enter your choice : ";
    // cin>>num;

    // switch(num)
    // {
    //     case 1: cout<<"Addition : "<<a+b<<endl;
    //             break;
    //     case 2 :cout<<"Substraction : "<<a-b<<endl;
    //             break;
    //     case 3 :cout<<"Multiplication : "<<a*b<<endl;
    //             break;
    //     case 4: cout<<"Division : "<<a/b<<endl;
    //             break;    
    //     default : cout<<"Invalid choice"<<endl;                              
    // }

    

char op;
cout<<"Enter the operation u want :"<<endl;
cin>>op;

switch(op)
{
    case '+': cout<<"Addition : "<<a+b<<endl;
              break;
    case '-':cout<<"Substraction : "<<a-b<<endl;
              break;
    case '*':cout<<"Multiplication : "<<a*b<<endl;
              break;
    case '/':cout<<"Division : "<<a/b<<endl;
              break;
}

cout<<endl;

return 0;
}
