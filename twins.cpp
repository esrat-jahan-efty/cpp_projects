#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int c[101];
    for(int i=0;i<n;i++){ cin>>c[i];}

    sort(c,c+n,greater<int>());
    for(int i=0;i<n;i++){ cout<<c[i]<<"" ;}

    //sort(c,c+n);
    
    
    /*int total=0;
    for(int i=0;i<n;i++)
    {
        total=total+c[i];
    }

    for(int i=0;i<n;++i)
    {
        int max=i;
        for(int j=i+1;j<n;++j)
        {
            if(c[j]>c[max]) max=j;
        }

        int t=c[i];
        c[i]=c[max];
        c[max]=t;
    }


    int sum=0,count=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+c[i];
        count++;

        if(sum>(total-sum))break;

    }

    cout<<count<<endl;*/

    

}