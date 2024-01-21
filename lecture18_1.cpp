#include<iostream>
using namespace std;
int main()
{
    int array[]={2,4,3,8,1,34,6};
    int temp,a,b;
    for (int i = 1; i <7; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j]<array[j-1])
            {
                temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
            else
            {
                break;
            }
            
        }
        cout<<endl;
        for (int k = 0; k < 7; k++)
        {
            
            cout<<"    "<<array[k];
        }
        
    }
    cout<<endl;
    for (int k = 0; k < 7; k++)
        {
            
            cout<<"    "<<array[k];
        }
    
}