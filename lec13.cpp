#include<iostream>
using namespace std;
int binarySearch(int[] , int , int);
int main()
{
    int arr[]={1,5,8,3,3,9,23,4};
    int size1,size2,temp;
    size1= sizeof(arr)/sizeof(arr[1]);
    for (int i = 0; i < size1-1; i++)
    {
        for (int j = i+1; j < size1-1; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    cout<<endl;
    for (int i = 0; i < size1-1; i++)
    {
       cout<<arr[i]; 
    }
    
    int ans = binarySearch(arr, size1, 3);
    cout<< "the output is"<<ans<<endl;

}
int binarySearch(int arr[], int size1, int key)
{
    int e=0,mid;
    while (e<= size1)
    {
        mid = ((e/2) +(size1/2));
        if (arr[mid] == key)
        {
            if(arr[mid-1]==key)
            {
                return mid-1;
            }
            else
            {
                return mid;
            }
        }
        else if(arr[mid]>key)
        {
            size1 = mid-1;
        }
        else
        {
            e = mid+1;
        }
        
    }
    
}