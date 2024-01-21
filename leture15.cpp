#include<iostream>
using namespace std;
bool isPossible(int array[] , int size,int e,int sta, int mid,int stu)
{
    int count = 1, pagesum=0;
    for (int i = 0; i < size; i++)
    {
        if (pagesum+array[i] <= mid)
        {
            pagesum += array[i];
        }
        else
        {
            count++;
            if (count>2 ||array[i]>mid)
            {
                return false;
            }
            else
            {
                pagesum=array[i];
            }
            
        }   
    }
    return true;

}
int book_allocation(int array[], int size, int e , int sta,int stu)
{
    int mid,term,term2,i;
    while (sta<=e)
    {
        i=0;
        mid= e + (sta-e)/2;
        if (isPossible(array,size,e,sta,mid,stu))
        {
            e = mid-1;
            return e;
        }
        else
        {
            sta = mid+1;
            return sta;
        }
        
        
    }
    return 0;
}
int main()
{   
    int stu = 2;
    int page[]={10,40, 196,200,206,250,300,300,301};
    int size= sizeof(page)/sizeof(page[1]);
    int num_std = 2, max, sta;
    int add,i;
    for(int i = (size/2)-1; i < size; i++)
    {
        add = add+page[i];
    }
    max = add;
    int e = max;
    sta= page[0];
    int ans = book_allocation(page, size, e, sta,stu);
    return 0;
}