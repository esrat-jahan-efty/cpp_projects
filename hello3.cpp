#include<iostream>
using namespace std;
//Using Default arguments in c++ (Presentation)
int area(int length,int width=0)
{
    if (width==0) return length*length;
    else return length*width;
}

int main()
{
    cout<<"Square Area: "<<area(5)<<endl;
    cout<<"Rectangle Area: "<<area(5,3)<<endl;
    return 0;
}