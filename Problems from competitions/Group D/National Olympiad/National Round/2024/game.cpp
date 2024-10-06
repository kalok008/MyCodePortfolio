#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int largestPowerOf2(int n);

bool isWinner(int n, int p);

int main() {
    int m, p;
    cin >> m >> p;

    vector<int> valid_n_values;
    for (int n = p; n <= m; n++) {
        if (isWinner(n, p)) {
            valid_n_values.push_back(n);
        }
    }

    cout << valid_n_values.size() << endl;
    for (int n : valid_n_values) {
        cout << n - 1 << ' ';
    }

    return 0;
}

int largestPowerOf2(int n) {
    return 1LL << (63 - __builtin_clzll(n));
}

bool isWinner(int n, int p) {
    int largestPower = largestPowerOf2(n);
    int lastStanding = (n - largestPower) * 2 + 1;
    return lastStanding == p;
}
