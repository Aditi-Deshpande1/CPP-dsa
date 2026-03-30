#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int sum = 0;
    for(i=1;i<10;i++)
    {
        if(i%2!=0)
        {
            sum = sum + i;
        }
    }
    cout<<"sum of odd numbers : "<<sum<<endl;
    return 0;
}