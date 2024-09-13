#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct Move {
    int moveNum;
    int color;
    int start;
    int end;
};

int main() {
    int n; 
    cin >> n;

    vector<int> fence(n);
    for (int i = 0; i < n; ++i) {
        cin >> fence[i];
    }

    int moves = 0;
    int paintUsed = 0;
    vector<Move> moveDetails;

    int fence2[n];
    set<int> colors = { 0 };
    for(int i=0; i<n; i++){
        fence2[i] = fence[i];
    }
    
    for(int i=0; i<n; i++){
        if (fence2[i] == 0){
            continue;
        }

        int color = fence[i];

        if(colors.find(color) != colors.end()){
                continue;
        }else{
            colors.insert(color);
            int end = i + 1;
            
            for(int j = i + 1; j < n; j++){
                if(fence[j]==fence[i]){
                    end=j + 1;
                }
            }
        
            moves++;
            paintUsed += (end - i);
            moveDetails.push_back({moves, color, i + 1, end});
        }
    }

    cout << moves << " " << paintUsed << endl;

    for (const auto& move : moveDetails) {
        cout << "Move " << move.moveNum << ": " << move.color << " " << move.start << " " << move.end << endl;
    }

    return 0;
}
