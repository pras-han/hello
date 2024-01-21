#include<iostream>
using namespace std;
int main()

// print the number which was repeated 

{
    int size, Length,c=1 ;
    int array[]={1,5,1,6,8,8,5,20,6};
    Length = sizeof(array)/sizeof(array[0]);
    int array2[9];
    cout<<Length<<endl;
    for (int i = 0; i < Length; i++)
    {
        for (int j = i+1; j < Length; j++)
        {
            if (array[i] == array[j])
            {
                array2[i] = 2;
                array2[j] = 2;
            }
        }
    }
    for (int i = 0; i < Length; i++)
    {
        if (array2[i]!=2)
        {
            cout<<array[i];
        }
        
    }
    return 0;
}

// {
//     int size, Length;
//     int array[]={1,4,1,1,8,2,4};
//     Length = sizeof(array)/sizeof(array[0]);
//     int array2[Length];
//     cout<<arra



// }

