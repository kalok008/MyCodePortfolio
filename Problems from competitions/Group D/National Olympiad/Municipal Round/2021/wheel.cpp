#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, K;
    cin>>N>>K;

    vector<char> wheel(N, '?');
    int currentPosition = 0;
    bool inconsistent = false;
    map<char, int> assignedLetters;

    for(int i = 0; i < K; i++){
        int S;
        char letter;
        cin>>S>>letter;

        currentPosition = (currentPosition - S % N + N) % N;

        if(wheel[currentPosition] == '?'){
            wheel[currentPosition] = letter;
            if(assignedLetters.count(letter) && assignedLetters[letter] != currentPosition) {
                inconsistent = true;
            }else{
                assignedLetters[letter] = currentPosition;
            }
        } else if(wheel[currentPosition] != letter){
            inconsistent = true;
        }
    }

    if(inconsistent){
        cout << '!';
    }else{
        for(int i = 0; i < N; i++){
            cout<<wheel[(currentPosition + i) % N];
        }
    }

    return 0;
}
