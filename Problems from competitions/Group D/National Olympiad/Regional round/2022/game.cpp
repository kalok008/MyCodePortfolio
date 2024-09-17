#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<vector<int>> grid(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>grid[i][j];
        }
    }

    int sum1 = 0, sum2 = 0;
    bool addToSum1 = true;
    vector<bool> used(n, false);

    for(int k = 0; k < n * n; k++){
        int minOfMax = 101;
        int chosenRow = -1;
        int chosenCol = -1;

        for(int i = 0; i < n; i++) {
            int maxInRow = 0;
            int maxCol = -1;

            for(int j = 0; j < n; j++) {
                if(grid[i][j] != -1 && grid[i][j] > maxInRow){
                    maxInRow = grid[i][j];
                    maxCol = j;
                }
            }

           
            if(maxCol != -1 && maxInRow < minOfMax){
                minOfMax = maxInRow;
                chosenRow = i;
                chosenCol = maxCol;
            }
        }

        if(addToSum1){
            sum1 += minOfMax;
        }else{
            sum2 += minOfMax;
        }

        grid[chosenRow][chosenCol] = -1;

        addToSum1 = !addToSum1;
    }

    cout<<sum2<<' '<<sum1;

    return 0;
}
