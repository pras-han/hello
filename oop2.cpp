#include<iostream>
using namespace std;
class Distance
{
    int meter;
    int centimeter;
    public:
    int getMeter(){
        return meter;
    }
    int getCmeter(){
        return centimeter;
    }
    void setMeter(int x)
    {
        meter = x;
    }
    void setCmeter(int x)
    {
        centimeter = x;
    }
    int addMeter(int a, int b);
    int addCmeter(int c, int d);

};
int Distance::addMeter(int a, int b)
{
    return a.meter+b.meter
}
int Distance::addCmeter(int a, int b)
{
    return a.centimeter+b.centimeter;
}
int main()
{
    Distance d1,d2,d3;
    int firstm,secondm,firstc,secondc;
    cout<<endl<<"first distance meter"<<endl;
    cin>>firstm;
    cout<<endl<<"first distance centimeter"<<endl;
    cin>>firstc;
    cout<<endl<<"first distance meter"<<endl;
    cin>>secondm;
    cout<<endl<<"first distance meter"<<endl;
    cin>>secondc;
    d1.setMeter(firstm);
    d1.setCmeter(firstc);
    d2.setMeter(secondm);
    d2.setCmeter(secondc);
    d3.setMeter(addMeter);
    d3.setCmeter(addCmeter);
    cout<<"the total distance is"<<d3.getMeter<<"meter "<<d3.getCmeter<<endl;



}