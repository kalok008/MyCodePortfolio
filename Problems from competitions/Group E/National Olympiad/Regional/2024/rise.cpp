#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int maxx = 0;
    int curr = 0;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) {
            curr = 1; 
            int j = i + 1;
            while (j < n && arr[j] == arr[j - 1] + 1) {
                curr++;
                j++;
            }
            maxx = max(maxx, curr);
        }
    }
    
    cout << maxx << endl;
    
    return 0;
}
