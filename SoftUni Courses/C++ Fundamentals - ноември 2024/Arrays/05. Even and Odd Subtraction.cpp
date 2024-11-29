#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int sumEven = 0;
    int sumOdd = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]%2==0){
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    
    cout<<sumEven - sumOdd;
    return 0;
}
