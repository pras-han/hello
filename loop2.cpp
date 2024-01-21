#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int number,number2,counnt,a,number3,number4;
//     counnt=0;
//     cout<<endl;
//     cout<<endl;
//     cout<<"enter the number"<<endl;
//     cin>>number;
//     number2=number;
//     number3=number;
// // count the number of digit
//     do
//     {
//         number = number/10;
//         counnt = counnt + 1;

//     } while (number >= 1);
//     cout<<"the total no of digit is"<<counnt<<endl;
// // find the sum of digit in a given number
//     a = 0;
//     do
//     {
//         a=a+(number2%10);
//         number2=number2/10;
//     } while (number2 >=1);
//     cout<<"the sum of entered digit is "<<a<<endl;
// // print number in reverse
//     a=0;
//     do
//     {
//         a = a*10 + (number3%10);
//         number3 = number3/10;
//     } while (number3 > 0);
//     cout<<"the reverse is "<<a<<endl;
// // Print the following searies 
// // S = 1-2+3-4+n
    int noOfTerm,i,j,s;
//     cout<<"enter number of term you want to print";
//     cin>>noOfTerm;
//     s=0;
//     for ( i = 1; i <= noOfTerm; i++)
//     {
//         if (i%2==0)
//         {
//             s = s-i;
//         }
//         else
//         {
//             s= s+i;
//         }
        
//     }
//  find the factorial of entered number 
    // cout<<"the sum to the given term is"<<s<<endl;
    int factorial, countt;
    cout<<"enter the number you want to find factorial"<<endl;
    cin>>factorial;
    for ( i = 1; i <= factorial; i++)
    {
        countt = countt*i;
    }
    cout<<"the factorial of entered number is "<<countt<<endl;

return 0;

}