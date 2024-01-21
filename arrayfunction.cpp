
// Using function to short array in decending order.

#include<iostream>
using namespace std;

void  maximum(int arr[], int n )
{
int temp;
cout<<"Enter the toatal number of arrays to be inputed.";
cin>>n;
    for(int i=0; i<n; i++)  
    {
        cout<<"Enter the "<<i+1<<"st number";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {       
            if(arr[j]>arr[i])
            {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[50];
    int n;
    maximum(arr, n);
}