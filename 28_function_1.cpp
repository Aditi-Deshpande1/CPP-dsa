#include<iostream>
using namespace std;

void even_odd(int a )
{
    if(a%2==0)
    {
        cout<<a<<" is even"<<endl;
    }
    else{
        cout<<a<<" is odd"<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    even_odd(n);
}