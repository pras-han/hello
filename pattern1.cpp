#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < i; j++)    
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for ( i = 0; i <7 ; i++)
    {
        for ( j = i+1; j <=7; j++)
        {
            cout<<j;
        }
        for ( k = 1; k < i+1; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    cout<<endl;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i%2==0)
            {
              for ( k = 1; k < 3; k++)
                {
                    cout<<k;
                }  
            }
            else
            {
                for ( k = 2; k > 0; k--)
                {
                    cout<<k;
                }
                
            }
            
        }
      cout<<endl;  
    } 
    cout<<endl;
    k = 4;
    int l;
    for ( i = 0; i < 4; i++)
    {
        cout<<setw(k);
        for ( j = 1; j <=i ; j++)
        {
            cout<<j; 
        }
        for ( l = i+1; l > 0 ; l--)
        {
            cout<<l;
        } 
        k=k-1;
        cout<<endl;
    }
cout<<endl;
cout<<endl;
return 0;  
}  
