#include <iostream>
#include <vector>
using namespace std;

int largestDivisor(int N, int r);

int solve(int N, int K);

int main() {
    int T;
    cin>>T;

    vector<int> results;
    while(T--){
        int N, K;
        cin>>N>>K;
        results.push_back(solve(N, K));
    }

    for(int result : results){
        cout<<result<<endl;
    }

    return 0;
}

int largestDivisor(int N, int r){
    for(int i = r; i >= 1; i--){
        if(N % i == 0){
            return i;
        }
    }
    return 1;
}

int solve(int N, int K){
    int min_sum = K * (K + 1) / 2;

    if(min_sum > N){
        return -1;
    }else if(min_sum == N){
        return 1;
    }

    int r = N / min_sum;
    int largest_div = largestDivisor(N, r);

    return largest_div;
}
