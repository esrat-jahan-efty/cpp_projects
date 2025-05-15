//overloading operator practice

#include<iostream>
using namespace std;
class Distance
{
    public:
    int feet,inch;

    Distance()
    {
        this->feet=0;
        this->inch=0;
    }

    Distance(int f,int i)
    {
        this->feet=f;
        this->inch=i;
    }

    Distance operator+(Distance const &d2)
    {
        Distance c3;
        c3.feet=this->feet+d2.feet;
        c3.inch=this->inch+d2.inch;
        return c3;
    }
    void print()
    {
        cout<<feet<<"'"<<inch<<endl;
    }

};
int main()
{
    Distance d1(8,9),d2(10,2);
    Distance d3;
    d3=d1+d2;
    d3.print();
    return 0;
}