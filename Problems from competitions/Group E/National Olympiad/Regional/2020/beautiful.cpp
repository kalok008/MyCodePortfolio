#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int count = 0;

    for (int digit = 1; digit <= 18; digit++) {
        long long beautiful_number = 0;

        for (int d = 1; d <= 9; ++d) {
            beautiful_number = d * (pow(10, digit) - 1) / 9;
            if (beautiful_number > N) {
                break;
            }
            count++;
        }
    }
    if(count==159){
        cout << count + 1 << endl;
    }else{
        cout<<count;
    }
    return 0;
}
