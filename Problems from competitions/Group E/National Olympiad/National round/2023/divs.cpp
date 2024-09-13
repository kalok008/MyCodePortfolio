#include <iostream>
#include <vector>

using namespace std;

vector<int> computeDivisors(int n);

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> divisors = computeDivisors(n);

    int count = 0;

    for (int x = 1; x <= n; x++) {
        for (int y = x; y <= n; y++) {
            if (k * divisors[x] * divisors[y] == x * y) {
                count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}

vector<int> computeDivisors(int n) {
    vector<int> divisors(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divisors[j]++;
        }
    }
    
    return divisors;
}
