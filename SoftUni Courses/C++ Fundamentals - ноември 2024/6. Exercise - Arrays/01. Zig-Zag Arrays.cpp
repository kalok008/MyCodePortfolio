#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][2];
    for(int i = 0; i < n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++){
        if(i%2==0){
            arr1[i] = arr[i][0];
            arr2[i] = arr[i][1];
        }else{
            arr1[i] = arr[i][1];
            arr2[i] = arr[i][0];
        }
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<' ';
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr2[i]<<' ';
    }
    return 0;
}
