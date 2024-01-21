#include<iostream>
using namespace std;
int main()
{
    int array[]={1,4,7,2,3,9,8,0,3};
    int a,b=7,c,length,d;
    length=sizeof(array)/sizeof(array[0]);
    cout<<"enter the position of array to keep it constant";
    cin>>c;
    d=c-1;
    cout<<length;
    for (int i = 0; i < length/2; i++)
    {
        
        if (i!=d || length-(i+1)!=d)
        {
            a=array[i];
            array[i]=array[length-(i+1)];
            array[length-(i+1)]=a;
        }
        
    }
    cout<<endl;
    cout<<"After roataion"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<array[i]<<endl;
    }
    
    
}