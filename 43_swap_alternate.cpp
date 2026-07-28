#include<iostream>
using namespace std ;

void swap_alternate(int arr[], int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp; 
        }
    }
}


void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,2,3,7,8,5};
    int brr[5]={1,2,3,4,5};

    swap_alternate(arr,6);
    swap_alternate(brr,5);

    print_array(arr,6);
    print_array(brr,5);

    return 0;
}