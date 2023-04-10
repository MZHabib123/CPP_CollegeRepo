#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){cout<<"this is a vehicle\n";};
};
class fourwheeler:public vehicle{
    public:
    fourwheeler()
    {
        cout<<"objects within 4 wheels are vehicles\n";
    }
};
class car:public fourwheeler{
    public:
    car(){cout<<"car has 4 wheels\n";}
};
int main()
{
    car obj;
    return 0;
}