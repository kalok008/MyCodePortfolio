#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> prefixSumSquares(n, 0), suffixSum(n, 0);

    prefixSumSquares[0] = arr[0] * arr[0];
    for (int i = 1; i < n; i++) {
        prefixSumSquares[i] = prefixSumSquares[i - 1] + (arr[i] * arr[i]);
    }

    suffixSum[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        suffixSum[i] = suffixSum[i + 1] + arr[i + 1];
    }

    long long maxProduct = 0;
    for (int i = 0; i < n - 1; i++) {
        long long product = prefixSumSquares[i] * suffixSum[i];
        maxProduct = max(maxProduct, product);
    }

    cout << maxProduct << endl;

    return 0;
}
