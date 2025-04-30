#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long  long int a,b,c,sum,gor;
        cin>>a>>b>>c;
        
        sum=a+b+c;
        
        gor=sum/3;
        
        
        if(sum%3==0 && gor>=a && gor>=b && gor<=c )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
	return 0;
}
