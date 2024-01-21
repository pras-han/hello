#include<iostream>
using namespace std;

int main(){
    int arraySize,ans=0;
    cout<<"enter the no of array you want to enter"<<endl;
    cin>>arraySize;
    int sum[arraySize];
    cout<<"enter the array element";
    for (int i = 0; i < arraySize; i++)
    {
        cin>>sum[i];
        ans+=sum[i];
    }
    cout<<"the sum of entered array is "<<ans<<endl;
    
}