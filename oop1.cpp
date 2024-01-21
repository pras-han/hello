#include<iostream> 
using namespace std;
class Hero{
    private:
        NoOfBullet;
    public:
        int health;
        char level;
        int getBullet()
        {
            return NoOfBullet;
        }
        int setBullet()
        {
            
        }


    };


int main()
    {
        Hero ramesh,suresh;
        ramesh.health = 20;
        suresh.health = 21;
        ramesh.level = 'a';
        suresh.level = 'c';
        cout<<"health is: "<<ramesh.health << endl;
        cout<<"health is: "<<suresh.health << endl; 
        cout << "Level is: "<<ramesh.level<< endl;
        cout << "Level is: "<<suresh.level<< endl;
        return 0;
    }