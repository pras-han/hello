#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int binaryNumber,i,j,count,a,b;
    cout<<"enter the binary number"<<endl;
    cin>>binaryNumber;
    a=0;
    count=0;
    do
    {
        count += (pow(2,a))*(binaryNumber%10);
        binaryNumber = binaryNumber/10;
        a = a+1;
    } while (binaryNumber > 0);
    cout<<"the decimal number is "<<count<<endl;
    return 0;
}