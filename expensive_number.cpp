#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string n;
        cin>>n;
        int len=n.length();
        int zero_count=0;
        int max_zero_count=0;

        for(int i=0;i<len;i++)
        {
            if(n[i]=='0')
            {
                zero_count++;
            }
            else{
                max_zero_count=zero_count+1;
            }
        }

        cout<<len-max_zero_count<<endl;
    }
    return 0;
}
