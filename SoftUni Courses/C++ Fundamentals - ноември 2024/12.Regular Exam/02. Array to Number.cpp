#include <iostream>
#include <vector>

using namespace std;

int condenseArray(vector<int> &arr){
    while(arr.size() > 1){
        vector<int> newArr;
        for(int i = 0; i < arr.size() - 1; i++){
            newArr.push_back(arr[i] + arr[i + 1]);
        }
        arr = newArr;
    }
    return arr[0];
}

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = condenseArray(arr);
    cout << result << endl;

    return 0;
}
