#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){cout<<"this ia a vehicle\n";}
};
class fourwheeler{
    public:
    fourwheeler()
    {
        cout<<"this is a 4 wheeler vehicle\n";
    }
};
class car:public vehicle,public fourwheeler{
};
int main(){
    car obj;
    return 0;
}