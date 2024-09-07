#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    int br = N.length();

    for (int i = 0; i < br; ++i) {
        int left = 0, right = 0;

        for (int j = 0; j <= i; ++j) {
            left += N.at(j) - '0';
        }

        for (int j = i + 1; j < br; ++j) {
            right += N.at(j) - '0';
        }

        if (left == right) {
            cout << N.at(i) << " " << i + 1;
            return 0;
        }
    }

    cout <<'0'<< endl;
    return 0;
}
