#include <iostream>
#include<string.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
	    {
	        string s,t;
	    getline(cin,s);
	    
	    t=t+s[0];
	    
	    int len=s.length();
	    
	    for(int i=1;i<len;i++)
	    {
	        if(s[i]==' ')
	        {
	            t=t+s[i+1];
	        }
	    }
	   
	    cout<<t<<endl;
	   
	    }

}