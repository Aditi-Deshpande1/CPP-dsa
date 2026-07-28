#include<iostream>
using namespace std;

void minimum(int arr[], int n)
{
    int min = arr[0]; //while calculating max or min consider the first indexed element as zero and the apply the logic that whether the next element is greater or smaller according to that then store the value in the initialised variable
    for (int i=1;i<n;i++)
    {
         if(arr[i]<min){
            min = arr [i];
        }
    }
    cout<<"Minimum value is : "<<min;
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

    minimum(arr,n);

    return 0;
   

}