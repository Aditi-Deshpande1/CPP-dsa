#include<iostream>
using namespace std;

void pair_sum(int arr[], int n ,int sum)
{
    int count = 0;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum && i!=j){
                count++;
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl;
            }
        }
    }
    cout<<"Total no of pairs : "<<count<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[100];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the sum : ";
    cin>>sum;
    pair_sum(arr, n, sum);

}