#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)  {cin>>a[i];}
	    
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	    }
	    
	    if(sum%3==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    
	    else
	    {
	        int s=0,flag=0;
	        for(int i=0;i<n;i++)
	        {
	            ////subset toiri kore segulo 3 dhara vag jay ki na check korbo 
				//need to use bitmask(probably) 
	        }
	        if(flag==1) cout<<"Yes"<<endl;
	        else cout<<"No"<<endl;
	    }
	}

}
