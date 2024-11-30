#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i<n-1; i++){
        bool ok = true;
        for(int j = i+1; j<n; j++){
            if(arr[i]<=arr[j]){
                ok = false;
                continue;
            }
        }
        if(ok){
            cout<<arr[i]<<' ';
        }
        
    }
    cout<<arr[n-1];
    return 0;
}
