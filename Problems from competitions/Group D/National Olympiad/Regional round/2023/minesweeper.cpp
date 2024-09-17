#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod){
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int N;
    cin>>N;

    long long pow2N = mod_pow(2, N, MOD);

    if (N % 3 == 0 || N % 3 == 1) {
        cout<<pow2N;
    }else{
        int k = (N - 2) / 3;
        long long pow2k = mod_pow(2, k, MOD);
        long long result = (pow2N - pow2k + MOD) % MOD;
        cout<<result;
    }

    return 0;
}
