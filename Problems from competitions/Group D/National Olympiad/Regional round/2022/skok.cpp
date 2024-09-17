#include <iostream>
#include <vector>
using namespace std;

bool is_rotten(int position, const vector<int>& rotten);

int min_jumps(int A, int B, const vector<int>& rotten);

int main() {
    int A, B, N;
    cin>>A>>B;
    cin>>N;

    vector<int> rotten(N);
    for(int i = 0; i < N; i++){
        cin>>rotten[i];
    }

    int result = min_jumps(A, B, rotten);
    cout<<result;

    return 0;
}

bool is_rotten(int position, const vector<int>& rotten){
    return binary_search(rotten.begin(), rotten.end(), position);
}

int min_jumps(int A, int B, const vector<int>& rotten) {
    int jumps = 0;
    int current_pos = A;

    while (current_pos < B) {
        if(current_pos + 2 <= B && !is_rotten(current_pos + 2, rotten)){
            current_pos += 2;  
        }else{
            current_pos += 1;
        }
        jumps++;
    }

    return jumps;
}
