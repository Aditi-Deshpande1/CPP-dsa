#include<iostream>
using namespace std;

int findDuplicate(int arr[],int n,int start,int end){
    int ans = 0 ;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    for(int i=start;i<end;i++){
        ans = ans ^ i;

    }
    return ans;
}
int main()
{
    int n ;
    cout<<"enter the size : ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int start;
    cout<<"enter the start : ";
    cin>>start;

    int end;
    cout<<"enter the end : ";
    cin>>end;

    cout<<"The duplicate number is : "<<findDuplicate(arr,n,1,n)<<endl;


}