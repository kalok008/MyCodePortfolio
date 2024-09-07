#include <iostream>
using namespace std;

int main() {
    long long girls, boys;
    cin >> girls >> boys;
    
    if (girls > boys) {
        swap(girls, boys);
    }

    if (boys >= 2 * girls) {
        cout << girls << endl;
    } else {
        cout << (girls + boys) / 3 << endl;
    }

    return 0;
}
