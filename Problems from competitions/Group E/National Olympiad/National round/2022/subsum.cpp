#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, w;
    cin>>n>>w;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int minLength = INT_MAX;  
    int currentSum = 0;       
    int left = 0;
    
    
    for(int right = 0; right < n; right++){
        currentSum += arr[right];

        while(currentSum > w){
            minLength = min(minLength, right - left + 1);
            currentSum -= arr[left];
            left++;
        }
    }
    
    if (minLength == INT_MAX){
        cout<<0<<endl;
    }else{
        cout<<minLength<<endl;
    }
    
    return 0;
}
