#include<iostream>
using namespace std;

void displayinfo(string name,int age=18,string country="Bangladesh")
{
    cout<<"Name :"<<name<<endl;
    cout<<"Age  :"<<age<<endl;
    cout<<"Country:"<<country<<endl;
}
int main()
{
    displayinfo("Rahim",25,"USA");

    cout<<endl;

    displayinfo("Karim");
    return 0;
}