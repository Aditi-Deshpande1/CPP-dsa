#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];//works on xor concept same = 0 and different = 1
    }
    return ans;
}
int main(){
    
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    int arr[100];

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The unique number : "<<findUnique(arr,n)<<endl;
}