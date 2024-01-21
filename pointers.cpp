#include<iostream>
using namespace std;
int main()
{
    int sum = 5;
    int *ptr = &sum;
    cout<<"the sum is "<<sum<<endl;
    cout<<"the sum is "<<*ptr<<endl;
    (*ptr)++;
    cout<<"the sum after sum"<<*ptr<<endl;
    cout<<"the sum is "<<ptr<<endl;
    int *q = ptr;
    cout<<"*q="<<*q<<endl;
    cout<<"q="<<q<<endl;


}