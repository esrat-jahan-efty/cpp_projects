#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        int flag=0;

        if(m*p==p*(n-p+1))
        {
            flag=1;
        }
        else 
        {
            flag=0;
        }

        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}