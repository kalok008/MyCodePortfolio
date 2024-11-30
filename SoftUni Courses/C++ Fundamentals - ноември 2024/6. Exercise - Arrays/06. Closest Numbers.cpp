#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int minn = 10000000;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int curr = abs(arr[i]-arr[j]);
            minn = min(minn, curr);
        }
    }
    
    if(n==1){
        cout<<0;    
    }else{
        cout<<minn;
    }
    
    return 0;
}
