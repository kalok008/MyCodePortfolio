#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int, int> sumCount;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++){
            int sum = arr[i] + arr[j];
            sumCount[sum]++;
        }
    }

    int maxFrequency = 0;
    int result = 0;

    for (auto &pair : sumCount) {
        if (pair.second > maxFrequency || (pair.second == maxFrequency && pair.first < result)){
            maxFrequency = pair.second;
            result = pair.first;
        }
    }

    cout<<result<<endl;

    return 0;
}
