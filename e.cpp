#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;

    long long int a[n],b[n];
    for(long long int i=0;i<n;i++){cin>>a[i];}
    for(long long int i=0;i<n;i++){cin>>b[i];}
long long int remain[n];
    for(long long int j=0;j<n;j++)
    {
        remain[j]=b[j]-a[j];
    }

    sort(remain,remain+n,greater<int>());

    long long int sum=0;

    for(int e=0;e<k;e++)
    {
        sum=sum+remain[e];
    }

    cout<<sum<<endl;


}