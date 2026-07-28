#include<iostream>
using namespace std;

void linear_search(int arr[], int n ){
    for (int i=0;i<n;i++){
        if(arr[i]==5){
            cout<<"Number Found 5 found at index "<<i<<endl;
            break;
        }    
     }
          cout<<endl;

    }

int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    linear_search(arr,n);




}