#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }
    
    bool identical =  true;
    int sum = 0, index = 0;
    for(int i = 0; i<n; i++){
        if(arr1[i]==arr2[i]){
            sum += arr1[i]; 
        } else {
            identical = false;
            index = i;
            break;
        }
    }
    
    if(identical){
        cout<<"Arrays are identical. Sum: "<<sum;
    }else{
        cout<<"Arrays are not identical. Found difference at "<<index<<" index.";
    }
    return 0;
}
