#include<iostream>
using namespace std;

void fibo_series(int n){
    int a=0, b=1 , c;
    if (n>=1){
        cout<<a<<" ";
    }
    if(n>=2){
        cout<<b<<" ";
    }
    for (int i=2;i<n;i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Fibonacci series: ";
    fibo_series(n);

    return 0;
}
    