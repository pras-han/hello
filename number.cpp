#include<iostream>
using namespace std;
int main()
{
    int number[]={2,2,3,3,4,6,4,5,6};
    int length,a=0,b;
    length = sizeof(number)/sizeof(number[0]);
    cout<<endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (number[i]==number[j])
            {
                a=a+1;
            }
        }
        if (a==0)
        {
            cout<<number[i]<<" ";
        } 
    }
    
}