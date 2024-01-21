#include<iostream>
using namespace std;
int main()
{
    int size,swap;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
        cout<<" ";

    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i]<array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
            
        }
        
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
}