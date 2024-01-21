// selection sort
#include<iostream>
using namespace std;
int main()
{
    int array[7]={3,8,10,45,1,9};
    int min,temp,location;
    for (int i = 0; i < 7; i++)
    {
        min = i;
        for (int j = i+1; j < 7 ; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }   
        }
        temp = array[min];
        array[min]= array[i];
        array[i]=temp;
        
    }
    for (int i = 0; i < 7; i++)
    {
    cout<<endl<<array[i];    
    }
    



}