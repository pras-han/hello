#include<iostream>
using namespace std;
int ispossible(int start,int end,int mid,int size,int partion[])
{

}
int main()
{
    int stu = 2;
    int mid;
    int ans;
    int partion[]={10,40, 196,200,206,250,300,300,301};
    int size= sizeof(partion)/sizeof(partion[1]);
    int start=0,end;
    for (int  i = 0; i < size; i++)
    {
        end += partion[i];
    }
    while (end>=start)
    {
        mid = (start+end)/2;
        if(ispossible(start,end,mid,size,partion))
        {
            ans = mid;
            end = mid +1;
        }
    }
    
    
} 