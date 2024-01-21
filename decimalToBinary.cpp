#include<iostream>
using namespace std;
int main()
{
    int number,counter,i,j,a,b;
    cout<<"enter the number you want to convert into binary"<<endl;
    cin>>number;
    b =0;
    do
    {
        a = number%2;
        b = b*10 + a;
        number = number/2;
    } while (number >= 1);
    j=0;
    do
    {
        i = b%10;
        j = j*10 +i;
        b = b/10;
    } while (b >= 1 );
    cout<<"the binary number is"<<j<<endl; 
}