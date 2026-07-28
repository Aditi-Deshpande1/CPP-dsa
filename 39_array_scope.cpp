#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout<<"INSIDE THE FUNCTION"<<endl;

    arr [0] = 120;
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Going back to the main function"<<endl;

}
int main(){
    int arr[3]={1,2,3};

    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // array me ap address dete ho toh update ye original value me he hota hai 
    // variable me copy ban jate hai.
    // yaha pe actual array me update hota hai so be cautious.

    return 0 ;
}