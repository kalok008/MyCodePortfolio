#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double d[3];
    int l[3];  

    for (int i = 0; i < n; i++) {
        cin >> d[i] >> l[i];
    }

    int bestIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (l[i] < l[bestIndex]) {
            bestIndex = i;
        } else if (l[i] == l[bestIndex] && d[i] < d[bestIndex]) {
            bestIndex = i;
        }
    }

    // Output the best path's index (1-based) and its incline
    cout << bestIndex + 1 << endl;
    cout << l[bestIndex] << endl;

    return 0;
}
