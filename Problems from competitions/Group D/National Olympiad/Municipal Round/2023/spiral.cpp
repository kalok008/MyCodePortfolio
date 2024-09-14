#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>>& table, int M, int N);

int main() {
    int M, N, P;
    cin>>M>>N>>P;
    
    vector<vector<int>> table(N, vector<int>(N));
    
    spiral(table, M, N);
    
    int sum = 0;
    for (int i=0; i<N; i++){
        sum += table[P-1][i];
    }
    
    cout<<sum;

    return 0;
}

void spiral(vector<vector<int>>& table, int M, int N) {
    int left = 0, right = N - 1, top = 0, bottom = N - 1;
    int num = M;

    while(left<=right && top<=bottom){
        
        for(int i=left; i<=right; i++){
            table[top][i] = num++;
        }
        top++;
        
        for(int i=top; i<=bottom; i++){
            table[i][right] = num++;
        }
        right--;
        
        if(top <= bottom){
            for(int i=right; i>=left; i--) {
                table[bottom][i] = num++;
            }
            bottom--;
        }
        
        if(left <= right){
            for(int i=bottom; i>=top; i--) {
                table[i][left] = num++;
            }
            left++;
        }
    }
}

