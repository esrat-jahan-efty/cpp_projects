#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,m,n;
        cin>>k>>m>>n;
        long long int total_m=k*m;
        long long int day=n/7;
        long long int total=n-day;
        cout<<total_m*total<<endl;
    }

}