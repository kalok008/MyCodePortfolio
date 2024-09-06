#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1] && k == 2) {
            
            arr[i] = (arr[i-1] == '0') ? '1' : '0';
            count++;
        } else if (arr[i] == arr[i-1] && k > 2) {
            count++;
            for (int j = 0; j < k; j++) {
                char new_val = '0' + j;
                if (new_val != arr[i-1] && (i == n-1 || new_val != arr[i+1])) {
                    arr[i] = new_val;
                    break;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
