#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=0

        if(a[0]==0)
        {
            for(int i=1;i<n;i++)
            {
                if(a[i]==1 && a[i+1]==1)
                {
                    flag=1;
                }
            }
        }
        

    }   

    return 0;
}