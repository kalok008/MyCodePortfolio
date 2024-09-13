#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<double> a(n), b(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    for (int i=0; i<n; i++) {
        cin>>b[i];
    }

    double maxCocktails = a[0] / b[0];
    for(int i=1; i<n; i++) {
        maxCocktails = min(maxCocktails, a[i]/b[i]);
    }

    for (int i=0; i<n; i++) {
        a[i] -= maxCocktails*b[i];
    }

    cout<<fixed<<setprecision(2);
    for (int i = 0; i<n; i++) {
        cout<<a[i]<<' ';
    }
    
    return 0;
}
