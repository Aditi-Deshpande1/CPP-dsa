#include<iostream>
using namespace std;

void triplet_sum(int arr[], int n , int sum){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1 ; k<n-2;k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<sum<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"Total of duplicate : "<<count<<endl;
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
    int sum;
    cout<<"Enter the sum : ";
    cin>>sum;
    triplet_sum(arr, n, sum);
}