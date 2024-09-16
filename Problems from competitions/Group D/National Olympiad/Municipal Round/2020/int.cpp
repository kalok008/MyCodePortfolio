#include <iostream>
using namespace std;

int proizvedenie(int x);
int main() {
    long long A, B;
    cin>>A>>B;

    int count = 0;

    for (long long i=A; i<=B; i++) {
        int product = proizvedenie(i);
        if (product != 0 && i % product == 0) {
            count++;
        }
    }

    cout<<count;

    return 0;
}

int proizvedenie(int x) {
    int product = 1;
    while (x > 0) {
        int digit = x % 10;
        if (digit == 0) return 0; 
        product *= digit;
        x /= 10;
    }
    return product;
}
