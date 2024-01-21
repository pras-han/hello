#include<iostream>
using namespace std;
int main()
{
    int number[10];
    int a,b;
    cout<<endl<<"enter the array element to find seond greatest number"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>number[i];
        cout<<endl;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (number[i]<number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
            
        }
    }
    cout<<"the second greatest number is "<<number[1];
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<number[i]<<" ";
    }
    
    
    
}