#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    bool isprime=true;
    cout<<"enter the number : ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        // if(n%i==0)
        // {
        //     cout<<"Not prime"<<endl;
        //     break;
        // }
        // else{
        //     cout<<"Prime"<<endl;
        // }
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    }
    return 0;
}