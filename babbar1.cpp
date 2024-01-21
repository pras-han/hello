// Lecture 4: Solving patterns problem 
#include<iostream>
using namespace std;
int main()
{
    cout<<endl;
    for (int  i = 1; i < 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    char a=65;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a;
        }
        cout<<endl;
        a=a+1;
    }
    
}