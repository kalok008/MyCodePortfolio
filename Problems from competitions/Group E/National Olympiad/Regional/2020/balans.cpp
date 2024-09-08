#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int countAB = 0, countCD = 0;
    int max_length = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'b') {
            countAB++;
        } else if (s[i] == 'c' || s[i] == 'd') {
            countCD++;
        }

        if (countAB == countCD) {
            max_length = i + 1;
        }
    }

    cout << max_length << endl;

    return 0;
}
