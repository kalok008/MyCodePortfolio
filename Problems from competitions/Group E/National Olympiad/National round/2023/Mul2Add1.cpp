#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> operations;
    while (N > 0) {
        if (N % 2 == 1) {
            operations.push_back(2);
            N = (N - 1) / 2;
        } else {
            operations.push_back(1);
            N = N / 2;
        }
    }
  
    cout << operations.size() << endl;
    for (int i = operations.size() - 1; i >= 0; i--) {
        cout << operations[i] << " ";
    }
    
    return 0;
}
