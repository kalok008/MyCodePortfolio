#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAXN = 1000000;
vector<int> numbersWith3PrimeDivisors;

void precompute() {
    vector<int> primeDivisorsCount(MAXN + 1, 0);
    
    for (int i = 2; i <= MAXN; i++) {
        if (primeDivisorsCount[i] == 0) {
            for (int j = i; j <= MAXN; j += i) {
                primeDivisorsCount[j]++;
            }
        }
    }

    for (int i = 2; i <= MAXN; i++) {
        if (primeDivisorsCount[i] == 3) {
            numbersWith3PrimeDivisors.push_back(i);
        }
    }
}

int countNumbersWith3PrimeDivisors(int a, int b) {
    int count = 0;
    for (int num : numbersWith3PrimeDivisors) {
        if (num >= a && num <= b) {
            count++;
        } else if (num > b) {
            break;
        }
    }
    return count;
}

int main() {

    precompute();

    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int a, b;
        cin >> a >> b;
        ans.push_back(countNumbersWith3PrimeDivisors(a, b));
    }

    for(int res : ans){
        cout<<res<<endl;
    }
    return 0;
}
