#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, L;
    cin>>a>>b>>L;

    set<int> sums;
    
    for(int i = 1; i <= L/a; i++){
        for(int j = 1; j <= (L-a*i)/b; j++){
            int sum = a*i+b*j;
            if(sum<=L) sums.insert(sum);
        }
    }

    cout<< L - sums.size();

    return 0;
}
