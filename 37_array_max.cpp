#include<iostream>
using namespace std;

void maximum(int arr[], int n)
{
    int max = arr[0]; //while calculating max or min consider the first indexed element as zero and the apply the logic that whether the next element is greater or smaller according to that then store the value in the initialised variable
    for (int i=1;i<n;i++)
    {
         if(arr[i]<max){
            max= arr [i];
            //maxi=max(maxi,arr[i])
        }
    }
    cout<<"Maximum value is : "<<max;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"\nEnter the array : ";

    for (int i=0;i<n;i++){
        cin>> arr[i];
    }

    maximum(arr,n);

    return 0;
   

}