#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    
    vector<bool> border(m + 1, false);
    
    for(int i=0; i<n; i++){
        int pos;
        cin>>pos;
        
        border[pos] = true;
        if(pos<m){
            border[pos + 1] = true;
        }
    }
    
    int count = 0;
    for(int i=2; i<=m; i++){
        if(!border[i]){
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}
