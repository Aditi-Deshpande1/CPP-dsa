#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int s = 0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    return s;
}

int main(){
    int n ;
    cout<<"size of an array : ";
    cin>>n;

    int arr[100];

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of the array : "<<sum(arr,n)<<endl;
}