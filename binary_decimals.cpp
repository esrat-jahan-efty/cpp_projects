#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n, maxDigit = 0;
        cin>>n;
        int temp = n;
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digit > maxDigit) maxDigit = digit;
            temp /= 10;
        }
        
        cout<<maxDigit<<endl;
    }
    return 0;
}
