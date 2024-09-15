#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int N;
    cin>>N;
    string symbols;
    cin>>symbols;

    vector<int> heights(N, N);
    int minn_element = N, current = heights[0];
    
    for(int i=0; i<N-1; i++){
        if(symbols[i]=='<'){
            current++;
        }else{
            current--;
        }
        minn_element = min(minn_element, current);
    }
    
    heights[0] -= minn_element;
    current = 0;
    
    cout<<heights[0]<<' ';
    for(int i = 0; i<N-1; i++){
        if(symbols[i]=='<'){
            current++;
        }else{
            current--;
        }
        
        cout<<heights[i+1]+current-minn_element<<' ';
    }
    return 0;
}
