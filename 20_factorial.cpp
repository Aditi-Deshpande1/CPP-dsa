#include<iostream>
using namespace std;
int main()
{
    int f=1;
    for(int i=5;i>=1;i--)
    {
        f = f * i ;

    }
    cout<<"Factorial :  "<<f<<endl;
    return 0;
}