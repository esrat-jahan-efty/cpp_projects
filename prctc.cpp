#include<iostream>
using namespace std;
class coord
{
    int x,y;
    public:
    coord(){ x=0;y=0;}
    coord(int i,int j){ x=i;y=j;}
    void get_xy(int &i,int &j){ i=x;j=y;}
    coord operator -(coord &ob2);
    coord operator -();
    void p()
    {
        cout<<x<<" "<<y<<endl;
    }
};
coord coord :: operator -(coord &ob2)
{
    coord t;
    t.x=x-ob2.x;
    t.y=y-ob2.y;
    return t ;
}
coord coord :: operator -()
{
    x=x--;y=y--; return * this;
}
int main()
{
    coord o1(10,10),o2(5,3);
    int x,y;
    o1=o1-o2;
    o1.p();
    o1=-o1;o1.p();
    return 0;
}
