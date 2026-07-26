#include<iostream>
using namespace std;

void dummy(int n )
{ n++;
  cout<<"Value of n inside function : "<<n<<endl;
  }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    dummy(n);
    cout<<"Value of n inside main : "<<n<<endl;
}