#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int num[10] = {0};
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        num[arr[i]]++;
    }
    
    int maxx = 0;
    for(int i=0; i<10; i++){
        maxx = max(maxx, num[i]);
    }

    for(int i = 0; i<10; i++){
        if(num[i]==maxx) cout<<i<<' ';
    }
    return 0;
}
