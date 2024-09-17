#include <iostream>
#include <vector>
using namespace std;

int getSingleDigit(int n){
    while (n >= 10){
        int sum = 0;
        while (n > 0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main(){
    
    int Q;
    cin>>Q;

    vector<int> results(Q);

    for(int i = 0; i < Q; i++){
        int S, F;
        cin>>S>>F;
        int sum = 0;

        for(int j = S; j <= F; j++){
            sum += getSingleDigit(j);
        }
        results[i] = sum;
    }

    for (int i = 0; i < Q; i++){
        cout << results[i] << endl;
    }

    return 0;
}
