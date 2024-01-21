#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int c,d,swap;
    int length = sizeof(a)/sizeof(a[0]);
    int actLength=length-1;
    cout<<"enter the term by which you want to rotate"<<endl;
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        for (int j = actLength; j >= 1; j--)
        {
            swap=a[j];
            a[j]=a[j-1];
            a[j-1]=swap;
        }      
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<endl;
    }
}