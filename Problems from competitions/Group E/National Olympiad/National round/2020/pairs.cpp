#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d, n, m;
    cin>>d;
    
    cin>>n;
    vector<int> first_remainders(d, 0);
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        first_remainders[x%d]++;
    }
    
    cin>>m;
    vector<int> second_remainders(d, 0);
    for (int i=0; i<m; i++) {
        int x;
        cin>>x;
        second_remainders[x % d]++;  
    }
    
    long long pairs = 0;
    
    pairs += (long long)first_remainders[0] * second_remainders[0];
    
    for (int r = 1; r < d; r++) {
        pairs += (long long) first_remainders[r] * second_remainders[d - r];
    }
    
    cout<<pairs<<endl;
    
    return 0;
}
