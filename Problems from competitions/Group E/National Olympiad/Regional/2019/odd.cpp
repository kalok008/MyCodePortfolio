#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    long long x = ceil(sqrt(a));
    
    long long y = floor(sqrt(b));
    
    cout << y-x + 1;
    return 0;
}
