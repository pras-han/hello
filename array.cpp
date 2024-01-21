#include<iostream>
using namespace std;
int main(){
    int noOfArray;
    cout<<"enter the no of array you want to get";
    cin>>noOfArray;
    char array[noOfArray];
    for(char &prashan:array)
    {
        cin>>prashan;
    }
    int lengthOfArray= sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < lengthOfArray; i++)
    {
        cout<<array[i]<<endl;
    }
    
}