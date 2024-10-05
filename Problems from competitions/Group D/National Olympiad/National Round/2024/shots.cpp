#include <iostream>
using namespace std;

int gcd (int a, int b);

int main()
{
    int m, n;
    cin>>n>>m;
    
    int count = 2;
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if( gcd(i, j) == 1) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

int gcd(int a, int b) {
    
    if (b < a) {
        swap(a, b);
    }

    while (a != 0) {
        int r = b % a;
        b = a;
        a = r;
    }
    return b;
}
