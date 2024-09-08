#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string S;

    cin >> n;
    cin >> S;

    string result(n, ' ');
    int blue_count_parity = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (S[i] == '1') {
            
            if (blue_count_parity == 0) {
                result[i] = 'b';
                blue_count_parity = 1;
            } else {
                result[i] = 'r';
            }
        } else {
            
            if (blue_count_parity == 1) {
                result[i] = 'b';
                blue_count_parity = 0;
            } else {
                result[i] = 'r';
            }
        }
    }

    cout << result << endl;

    return 0;
}
