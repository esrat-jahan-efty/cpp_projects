#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[100];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_count = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int k = a[i] * a[j];
                int y_values[101] = {0}; 

                int count = 0;
                for (int x = 0; x < n; x++) {
                    if (k % a[x] == 0) {
                        int y = k / a[x];

                        
                        if (y >= 1 && y <= 100 && y_values[y] == 0) {
                            y_values[y] = 1;
                            count++;
                        }
                    }
                }

                if (count > max_count)
                    max_count = count;
            }
        }

        cout << max_count << endl;
    }

    return 0;
}
