#include<iostream>
using namespace std;


int first_occurence(int arr[],int n,int key){
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
int last_occurence(int arr[],int n,int key){
    int start = 0 , end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start = mid + 1; // Continue searching in the right half for the last occurrence
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
    int even[8]={1,2,3,3,3,3,5,4};
    cout<<"First occurence of 3 is at index "<<first_occurence(even, 8, 3)<<endl;
    cout<<"Last occurence of 3 is at index "<<last_occurence(even, 8, 3)<<endl;

    int total_occurence = last_occurence(even,8,3) - first_occurence(even,8,3) + 1;
    cout<<"Total occurences of 3 is "<<total_occurence<<endl;
}