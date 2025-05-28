#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=1;i<=n;i++){cin>>a[i];}

    int tom[1001],jerry[1001],j=0,t=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            jerry[j]=a[i];
            j++;
        }
        else{
            tom[t]=a[i];t++;
        }
    }

    int s_t=0,s_j=0;

    for(int jj=0;jj<j;jj++)
    {
        s_j=s_j+jerry[jj];
    }
    for(int tt=0;tt<t;tt++)
    {
        s_t=s_t+tom[tt];
    }


    if(s_t>s_j)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}