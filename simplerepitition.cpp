#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;

        long long y = 0;
        int digits = 0;
        int temp = x;

        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }

        for (int i=0; i<k; i++)
        {
            y = y*pow(10, digits)+x;
        }

        if (y <= 1)
        {
            cout << "NO" << endl;
            continue;
        }
        int flag=1;
        for (long long a=2; a*a<=y; a++)
        {
            if (y%a == 0)
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            cout <<"YES"<< endl;
        else
            cout <<"NO"<< endl;
    }

    return 0;
}
