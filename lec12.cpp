// binary search 
// search 34
#include<iostream>
using namespace std;
int binary(int arr[],int size, int key)
{
    int i=0,a,b;
    while (i<=size)
    {
        a=(i+size)/2;
        if (arr[a]==key)
        {
            return key;
        }
        else if (arr[a]<key)
        {
            i=a+1;
        }
        else
        {
            size = a-1;
        }
    }
    return key+1;

    

}
int main()
{ 
    int odd[5]={1,3,5,7,9};
    int even[8]={2,6,8,18,22,28,30,34};
    int size =8-1;
    int key = 32;
    int ans = binary(even,size,key);
    if(ans == key)
    {
        cout<<"the num is found";
    }
    else
    {
        cout<<"number is not found";
    }
    return 0;
    }