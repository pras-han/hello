#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;
    cout<<"enter the number you want to find power"<<endl;
    cin>>a;
    cout<<"enter the power you want to find "<<endl;
    cin>>b;
    c = 1;
    for ( i = 0; i < b; i++)
    {
        c = c*a;
    }
    cout<<"the power is "<<c<<endl;

}