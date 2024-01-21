#include<iostream>
using namespace std;
int main()
{
    int array[]={2,4,3,8,1,34,6};
    int temp,a,b;
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < 7-i; j++)
        {
                if (array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }       
        }
        cout<<endl;
        for (int m = 0; m < 7; m++)
        {
            cout<<"     "<<array[m];
        }

        
        
    }
    cout<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<"     "<<array[i];
    }
    

}