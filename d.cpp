#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        const long long int max=10000;
        long long int n,d,x,y;
        cin>>n>>d>>x>>y;

        int x_i[max],y_i[max];
        for(int j=0;j<n;j++)
        {
            cin>>x_i[j]>>y_i[j];
        }

        float dist[max];
        int remain_b[max],l=0;

        for(int b=0;b<n;b++)
        {
            float r=((x_i[b]-x)*(x_i[b]-x))+((y_i[b]-y)*(y_i[b]-y));
            dist[b]=sqrt(r);
        }
int flag=0;
        for(int c=0;c<n;c++)
        {
            if(dist[c]>d)
            {
                remain_b[l]=c+1;
                l++;
                flag=1;
            }
        }

        if(flag==0)
        {
            cout<<"FE!N"<<endl;
        }
        else
        {
            cout<<l<<endl;
            for(int q=0;q<l;q++)
            {
                cout<<remain_b[q]<<" ";
            }
            cout<<endl;
        }  
    
    }
    

}