#include<iostream>
#include<string.h>
using namespace std;
string vote(int age)
{
    string reasult;
    if (age >= 18)
    {
        reasult= "you can vote";
    }
    else
    {
        reasult = "you can't vote";
    }
    return reasult;
}
int main()
{
    int check;
    cout<<endl;
    cout<<"enter your age to check you can vote or not"<<endl;
    cin>>check;
    string answer = vote(check);
    cout<<answer<<endl;
    return 0;
}