#include<iostream>
using namespace std;
int pivot(int arr[], int end, int key)
{
    int start=0,mid,z,c;
    while (start<end)
    {
        mid = (start/2)+(end/2);
        if (arr[mid] = key)
        {
            
        }
        
        else if (arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        
        else
        {
            end = mid;
        }
        
    }
    mid = start;
    while (mid<end)
    {
        if (arr[start]=key)
        {
            return mid;
        }
        else if (key>arr[end] & key <arr[start-1])
        {
            
        }
        
    }
    
    
}
int main()
{
    int ar[]= {5,7,8,9,0,1,2,3,4};
    int size1,a,b;
    size1 = sizeof(ar)/sizeof(ar[1]); 
    a = pivot(ar,size1,1);
    cout<<"the pivot element is "<<a<<endl;
    return 0;
}