#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin>>a>>b>>n;
    int arr[n];
    int a_ = 0;
    int bth = 0;
    int b_ = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<=a){
            a_++;
        }else if(arr[i]>b){
            bth++;
        }else{
            b_++;
        }
    }
    if(a_<=b_){
        cout<<b_+bth;
    }else{
        cout<<(n-bth) / 2 + (n-bth) % 2 + bth;  
    }
    return 0;
}
