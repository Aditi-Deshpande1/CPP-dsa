#include<iostream>
using namespace std;

bool isunique(int arr[],int n){
    int count;
    for(int i=0;i<n;i++){
         count = 0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
    }
    return count == 1;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[100];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(isunique(arr,n)){
        cout<<"The array has unique elements."<<endl;
    }
    else{
        cout<<"The array does not have unique elements."<<endl;
    }    

}
