#include<iostream>
using namespace std;

void printArray(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}
int main()
{
   int num[15];

   cout<<"Value at index 15 "<<num[14]<<endl<<endl;

  int arr[3] = {1,2,3};

  cout<<"Value at index 2 "<<arr[2]<<endl<<endl;

    int third[15]={2,7};
    printArray(third,15);
    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"Size of third array : "<<thirdsize<<endl;

    int fourth[10]={0};
    printArray(fourth,10);

    int  fifth[10]={1};
    cout<<"Size of fifth array : "<<sizeof(fifth)<<endl;

    printArray(fifth,10);

    int sixth[10]={3};

  printArray(sixth,10);

  int fifthsize = sizeof(fifth)/sizeof(int);
  cout<<"Size of fifth array : "<<fifthsize<<endl;

  //char ch [5]= {'a','b','c','d','e'};
  //printArray(ch,5);
  //THIS WILL GIVE ERROR BECAUSE WE ARE PASSING CHAR ARRAY TO INT ARRAY FUNCTION.

}