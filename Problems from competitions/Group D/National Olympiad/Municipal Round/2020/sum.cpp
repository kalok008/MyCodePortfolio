#include <iostream>
using namespace std;

int main() {
    int X;
    cin>>X;

    int count = 0;

    for(int A = 1; A <= X / 4; A++){
        for (int B = A; B <= (X - A) / 3; B++){
            for (int C = B; C <= (X - A - B) / 2; C++){
                int D = X - A - B - C;
                if (D >= C) {
                    count++;
                }
            }
        }
    }

    cout<<count;

    return 0;
}
