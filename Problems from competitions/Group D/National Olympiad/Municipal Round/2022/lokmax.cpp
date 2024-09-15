#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> localMaxindex;
    
    for(int i=1; i<n-1; i++){
        if(arr[i] == 0){
            break;
        }
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            localMaxindex.push_back(i);
        }
    }

    if(localMaxindex.size() < 2){
        cout<<0;
        return 0;
    }

    int minDistance = n;
    for(int i = 1; i < localMaxindex.size(); i++) {
        minDistance = min(minDistance, localMaxindex[i] - localMaxindex[i-1]);
    }

    cout<<minDistance-1;

    return 0;
}
