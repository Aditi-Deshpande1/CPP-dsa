#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
   int left = 0 , right = n-1 ;
   int step = 0;
   while(left < right){
    cout<<"step"<<step<<endl;
    print_array(arr,n);
    cout<<endl;
      
    while (arr[left] == 0 ){
        left ++;
    }
    while(arr[right]==1){
        right--;
    }

    swap(arr[left],arr[right]);
    left++;
    right--;
   }

           
        
}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,n);
    print_array(arr,n);
}
