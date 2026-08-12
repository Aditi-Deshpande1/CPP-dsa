#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;


    while(s < e){
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
       
    }

return s;
}

int main(){
    int arr[5]={0,5,10,5,2};
    cout<<"Peak index is "<<peak(arr, 5)<<endl;
    return 0;
}