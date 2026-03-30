#include<iostream>
using namespace std;

int main ()
{
    // arithmetic operators
    int a = 5, b=10;

    cout<<"sum : "<<a+b<<endl;
    cout<<"difference : "<<a-b<<endl;
    cout<<"product : "<<a*b<<endl;
    cout<<"division : "<<a/b<<endl;
    cout<<"modulo : "<<a%b<<endl;

    
    cout<<(5/(double)2)<<endl;
    

    //relational operators

    cout<<(3<5)<<endl;
    cout<<(3>5)<<endl;
    cout<<(3==5)<<endl;
    cout<<(3!=5)<<endl;
   
    

    //logical operator
    cout<<((3>1)&&(5>2))<<endl;
    cout<<((3>1)||(5>2))<<endl;

    //unary operator
    int x= 5;
    int y = ++x;// update --> kaam
    cout << "y = " << y << endl;
    cout << "x = " << x << endl;

    int c= 5;
     int d = c++; //kaam-->update
    cout << "d = " << d << endl;
    cout << "c = " << c << endl;
    
    // similar for decrement operator
    int m = 5;
    int n = --m; // update --> kaam
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;  
    return 0;
}