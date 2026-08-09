#include<iostream>
using namespace std;

int array_intersection (int arr1[], int arr2[], int n ,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            } 
            else{
                cout<<"-1"<<" ";
            }
        }
    }
}

int main(){
    int n , m ;
    cout<<"Enter the size of the array : ";
    cin>>n>>m;

    int arr1[100],arr2[100];
    cout<<"Enter the first array : ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the second array : ";
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    array_intersection(arr1, arr2, n, m);
}