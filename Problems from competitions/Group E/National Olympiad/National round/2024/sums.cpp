#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int arr1[n], arr2[n];
    long long sum1 = 0, sum2 = 0;
    
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    
    for(int i=0; i<n; i++){
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    
    cout<<sum1*n + sum2;
    
    return 0;
}

