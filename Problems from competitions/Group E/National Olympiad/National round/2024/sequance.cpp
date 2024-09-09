#include <iostream>
#include <vector>
using namespace std;

int sumDigits(long long num);

int main() {
    int N;
    cin>>N;
    
    vector<long long> sequence(N);
    vector<int> transformed(N);
    
    for (int i = 0; i < N; i++) {
        cin>>sequence[i];
        transformed[i] = sumDigits(sequence[i]);
    }
    
    int maxLength = 1, currentLength = 1, startIdx = 0, maxStartIdx = 0;
    
    for (int i=1; i<N; i++) {
        if (transformed[i]>=transformed[i - 1]) {
            currentLength++;
        } else {
            if (currentLength>maxLength) {
                maxLength = currentLength;
                maxStartIdx =startIdx;
            }
            startIdx = i;
            currentLength = 1;
        }
    }
    
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIdx = startIdx;
    }
    
    cout << maxLength << endl;
    for (int i = maxStartIdx; i < maxStartIdx + maxLength; i++) {
        cout << transformed[i] << " ";
    }
    
    return 0;
}

int sumDigits(long long num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
