#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int arr[6]={a+b+c,a*b*c,(a+b)*c,(a*b)+c,a+(b*c),a*(b+c)};

    int max=arr[0];
    for(int i=0;i<6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;

}