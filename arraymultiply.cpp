#include<iostream>
using namespace std;
int main()
{
    int a[1][1],b[1][1],e[1][1];
    int c,d;
    cout<<"Enter first array element"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin<<a[i][j];
        }
    }
    cout<<"Enter the second array element"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j >= 0; j++)
        {
            cin<<b[i][j];
        }
    }
    cout<<endl;
    cout<<"multiplication of two enteted array is"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            e[i][j]=(a[i][j]*b[i][j]+a[i][j]*b[i][j]);
        }
        
    }
    







}