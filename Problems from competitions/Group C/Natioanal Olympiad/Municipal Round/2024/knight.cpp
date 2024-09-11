#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, count = 1;
    cin >> n >> m >> i >> j;
    bool arr[n][m];
 
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
           arr[a][b] = 0;
        }
    }
    i--;
    j--;
    arr[i][j] = 1;

    bool hod = true;

    while (hod) {
        if (i - 2 >= 0 && j - 1 >= 0 && arr[i - 2][j - 1] == 0) {
            arr[i - 2][j - 1] = 1;
            i = i - 2;
            j = j - 1;
            count++;
            continue;
        } else if (i - 2 >= 0 && j + 1 < m && arr[i - 2][j + 1] == 0) {
            arr[i - 2][j + 1] = 1;
            i = i - 2;
            j = j + 1;
            count++;
            continue;
        } else if (i - 1 >= 0 && j - 2 >= 0 && arr[i - 1][j - 2] == 0) {
            arr[i - 1][j - 2] = 1;
            i = i - 1;
            j = j - 2;
            count++;
            continue;
        } else if (i - 1 >= 0 && j + 2 < m && arr[i - 1][j + 2] == 0) {
            arr[i - 1][j + 2] = 1;
            i = i - 1;
            j = j + 2;
            count++;
            continue;
        } else if (i + 1 < n && j - 2 >= 0 && arr[i + 1][j - 2] == 0) {
            arr[i + 1][j - 2] = 1;
            i = i + 1;
            j = j - 2;
            count++;
            continue;
        } else if (i + 1 < n && j + 2 < m && arr[i + 1][j + 2] == 0) {
            arr[i + 1][j + 2] = 1;
            i = i + 1;
            j = j + 2;
            count++;
            continue;
        } else if (i + 2 < n && j - 1 >= 0 && arr[i + 2][j - 1] == 0) {
            arr[i + 2][j - 1] = 1;
            i = i + 2;
            j = j - 1;
            count++;
            continue;
        } else if (i + 2 < n && j + 1 < m && arr[i + 2][j + 1] == 0) {
            arr[i + 2][j + 1] = 1;
            i = i + 2;
            j = j + 1;
            count++;
            continue;
        } else {
            hod = false;
        }
    }

    cout << count << endl;

    return 0;
}
