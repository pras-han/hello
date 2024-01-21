#include<iostream>
using namespace std;
int main()
{
    int number,firstDigit,secondDigit,sum;
    cout<<"enter any 5 digit number"<<endl;
    cin>>number;
    firstDigit = number%10;
    number=number/10;
    secondDigit = number%10;
    sum = firstDigit + secondDigit;
    cout<<"the sum of two last digit is"<<sum<<endl;
    return 0;
}