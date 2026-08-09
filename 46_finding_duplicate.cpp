#include<iostream>
using namespace std;

void duplicate(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                count++;
                cout<<"The duplicate number is : "<<arr[i]<<endl;
            }
        }
    }
    cout<<"Total duplicates found: "<<count<<endl;
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
    duplicate(arr,n);
}