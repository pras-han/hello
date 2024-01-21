#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int b,c,d;
    int size;
    size = sizeof(a)/sizeof(a[1]);
    cout<<"enter the number to find tripplet sum"<<endl;
    cin>>b;
   // cout<<size;
    cout<<"the number of possible triplet sum are";
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = j; k < size; k++)
            {
                if ((a[i]+a[j]+a[k])==b)
                {
                    cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<endl;
                }
                
            }
            
        }
        
    }
    
}