#include<iostream>
using namespace std;
class student
{
    private:
    int eng,mth;
    public:
    student(int e,int m)
    {
        eng=e;mth=m;
    }
    student& operator=(student& s)
    {
        if (this != &s)
        {
            eng=s.eng;
            mth=s.mth;
        }
        return *this;
    }

    void m()
    {
        cout<<"ENG:"<<eng<<" "<<"MTH:"<<mth<<endl;
    }
};
int main()
{
    student s1(6,2),s2(5,10);
    s1.m();
    s2.m();
    s1=s2;
    s1.m();
    s2.m();
    return 0;
}