#include <iostream>
#include <vector>
#include <set>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while(b!=0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    
    vector<pair<int, int>> fractions(n);
    
    for (int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        fractions[i] = {a, b};
    }
    
    set<int> sum;
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            int a1 = fractions[i].first;
            int b1 = fractions[i].second;
            int a2 = fractions[j].first;
            int b2 = fractions[j].second;
            
            int numerator = a1 * b2 + a2 * b1;
            int denominator = b1 * b2;
            
            int g = gcd(numerator, denominator);
            numerator /= g;
            denominator /= g;
            
            if (denominator == 1) {
                sum.insert(numerator);
            }
        }
    }
    
    cout<<sum.size();

    return 0;
}
