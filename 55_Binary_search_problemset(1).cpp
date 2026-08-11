#include<iostream>
using namespace std;

int first_and_last_occurence(int arr[],int n,int key){
    int start = 0 , end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            end = mid - 1; // Continue searching in the left half for the first occurrence
        }
        else if (key > arr[mid]){//Right me jao
           start = mid + 1;
        }
        else if (key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int even[5]={1,2,3,4,5};

    cout<<"First occurence of 3 is at  index "<<first_and_last-