#include<iostream>
using namespace std;
int mountain(int arrr[], int size0)
{
    int start=0, mid , ans;
    mid = (start/2)+(size0/2);
    while (start<size0)
    {
        if (arrr[mid]>arrr[mid-1] && arrr[mid]>arrr[mid+1])
        {
            return arrr[mid];
        }
        else if (arrr[mid]>arrr[mid-1] && arrr[mid]<arrr[mid+1])
        {
            start = mid+1;
        }
        else
        {
            size0 = mid-1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[]={2,3,3,5,5,7,4,3,0};
    int size1,a,b;
    size1 = sizeof(arr)/sizeof(arr[1]);
    int mount_element = mountain(arr,size1);
    cout<<endl;
    cout<<"the mountain element is "<<mount_element<<endl;
    return 0 ;

}

