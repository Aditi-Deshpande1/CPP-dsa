#include<iostream>
using namespace std;

int binary_search(int arr[] , int n , int key ){
    int start = 0 ,end = n - 1;

    int mid = (start + end) / 2;

    while(start <= end){

        if(arr[mid]==key){
            return mid ;
        }

        if(key>arr[mid] ){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;//this is the optimized way to calculate mid to avoid integer overflow.
    } 
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};

    int evenindex = binary_search(even,6,10);
    int oddindex = binary_search(odd,5,5);

    cout<<"Index of 10 is "<<evenindex<<endl;
    cout<<"Index of 5 is "<<oddindex<<endl;
}
    
