#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int sum;
    cin>>sum;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<' '<<arr[j]<<endl;
                continue;
            }
        }
    }
    
    return 0;
}
