#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> b(n);
    for(int &bi : b){
        cin>>bi;
    }

    vector<int> t(n);
    for(int i = 0; i < n; i++){
        t[i] = i + 1;
    }

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        int idx = t.size() - b[i] - 1;
        a[i] = t[idx];
        t.erase(t.begin() + idx);
    }

    for(int i = 0; i < n; i++){
        cout<<a[i];
        if(i < n - 1) cout<<' ';
    }

    return 0;
}
