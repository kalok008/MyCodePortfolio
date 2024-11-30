#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int a;
    cin>>a;
    while(a>n){
        a -= n;
    }
    
    for(int i = a; i<n; i++){
        cout<<arr[i]<<' ';
    }
    for(int i = 0; i<a; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}
