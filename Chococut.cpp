#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int total = n * m;
        int then_alice, alice_max = 0;

        if (k == 0) // jodi bob kono kicu e na chay
        {
            cout << total << endl;
        }
        else
        {
            // horizontally kati
            for (int i = 1; i < n; i++)
            {
                int bobgetsup = i * m;          // 1x4 =4 piece
                then_alice = total - bobgetsup; // alice pabe 12-4=8 piece

                if (bobgetsup >= k &&  then_alice > alice_max)
                {
                    alice_max = then_alice;
                }

                int bobgetsdown = (n - i) * m;    // 2x4=8 piece
                then_alice = total - bobgetsdown; // alice pabe 12-8=4 piece

                if (bobgetsdown >= k  && then_alice > alice_max)
                {
                    alice_max = then_alice;
                }
            }

            // vertically kati
            for (int j = 1; j < m; j++)
            {
                int bobgetsleft = j * n;          // 1x3=3 piece
                then_alice = total - bobgetsleft; // 12-3=9;
                if (bobgetsleft >= k  && then_alice > alice_max)
                {
                    alice_max = then_alice;
                }

                int bobgetsright = (m - j) * n;    // 3*3=9 piece
                then_alice = total - bobgetsright; // 12-9=3
                if (bobgetsright >= k && then_alice > alice_max)
                {
                    alice_max = then_alice;
                }
            }

            cout << alice_max << endl;
        }
    }
}