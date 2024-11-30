#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    int average = sum/n;
    
    for(int i = 0; i<n; i++){
        if(arr[i]>=average) cout<<arr[i]<<' ';
    }
    return 0;
}
