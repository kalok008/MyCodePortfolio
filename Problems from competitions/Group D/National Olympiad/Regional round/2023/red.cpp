#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin>>N;
    
    vector<int> arr(N + 1);
    for (int i = 1; i <= N; i++){
        cin>>arr[i];
    }

    vector<int> left(N + 1, 0), right(N + 1, 0);
    
    unordered_map<int, int> lastSeenLeft;  
    for (int i = 1; i <= N; i++){
        int currentVal = arr[i];
        if(lastSeenLeft.count(currentVal)){
            left[i] = lastSeenLeft[currentVal];
        }else{
            left[i] = 0; 
        }
        lastSeenLeft[currentVal] = i; 
    }

    unordered_map<int, int> lastSeenRight;
    for(int i = N; i >= 1; i--) {
        int currentVal = arr[i];
        if(lastSeenRight.count(currentVal)) {
            right[i] = lastSeenRight[currentVal];
        }else{
            right[i] = 0;
        }
        lastSeenRight[currentVal] = i;  
    }

    int T;
    cin>>T;

    while(T--){
        int K;
        cin>>K;
        cout<<left[K]<<' '<<right[K]<<endl;
    }

    return 0;
}
