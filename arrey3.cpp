#include<iostream>
using namespace std;
int main()
{
    // int number[7];
    // int count;
    // for (int i = 0; i < 7; i++)
    // {
    //     number[i]=i+1;
    // }
    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = i ; j < 7; j++)
    //     {
    //         if ((number[i]+number[j])==7)
    //         {
    //             count=count+1;
    //         }
            
    //     }
        
    // }
    // cout<<"the total no of pairs are "<<count<<endl;

// Another way
//     int number[]={2,4,5,3}, length, count=0;
//     length = sizeof(number)/sizeof(number[2]);
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = i; j < length; j++)
//         {
//             if ((number[i]+number[j])==7)
//             {
//                 count=count+1;
//             }
            
//         }
        
//     }  
//     cout<<endl;
//     cout<<"the no of pairs are "<<count<<endl;


// Find the triplets whose sum is equal to 10.
    int number[]={0,1,2,3,4,5,6,7,8,9,10};
    int count=0, a, b, length;
    length = sizeof(number)/sizeof(number[1]);
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            for (int k = j+1; k < length; k++)
            {
                if ((number[i]+number[j]+number[k])==10)
                {
                    count = count+1;
                }
                
            }
            
        }
        
    }
    cout<<endl;
    cout<<"the no of triplets to make sum 10 are "<<count<<endl;
}