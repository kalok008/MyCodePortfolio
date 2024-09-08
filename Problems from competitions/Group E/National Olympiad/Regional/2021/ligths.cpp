#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<int> D(N), R(N), G(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> D[i] >> R[i] >> G[i];
    }

    int time = 0;
    int position = 0;  
    
    for (int i = 0; i < N; ++i) {
        time += D[i] - position;
        position = D[i];
        int cycle = time % (R[i] + G[i]);
        if (cycle < R[i]) {
            time += R[i] - cycle;
        }
    }

    time += L - position;
    cout << time << endl;

    return 0;
}
