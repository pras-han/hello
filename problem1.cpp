#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> prashan;
    cout<<"size is"<<prashan.size();
    prashan.push_back(1);
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;

    prashan.push_back(3);
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;

    prashan.push_back(4); 
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;

    prashan.push_back(5);
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;

    prashan.push_back(6);
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;

    prashan.push_back(7);
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;

    prashan.push_back(8);
    cout<<"size: "<<prashan.size()<<endl;
    cout<<"capacity: "<<prashan.capacity()<<endl;


}