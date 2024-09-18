#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwapsToSort(vector<int>& arr){
    int n = arr.size();
    vector<pair<int, int>> arrPos(n);
    
    for(int i = 0; i < n; i++){
        arrPos[i] = {arr[i], i};
    }
    
    sort(arrPos.begin(), arrPos.end());
    
    vector<bool> visited(n, false);
    int swaps = 0;

    for(int i = 0; i < n; i++){
        if(visited[i] || arrPos[i].second == i){
            continue;
        }

        int cycle_size = 0;
        int j = i;

        while(!visited[j]){
            visited[j] = true;
            j = arrPos[j].second;
            cycle_size++;
        }

        if(cycle_size > 1){
            swaps += (cycle_size - 1);
        }
    }

    return swaps;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int result = minSwapsToSort(arr);
    cout<<result;

    return 0;
}
