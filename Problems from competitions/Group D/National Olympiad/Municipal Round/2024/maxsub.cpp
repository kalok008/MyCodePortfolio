#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> freq(26, 0);
    
    for(char c : s){
        freq[c - 'a']++; 
    }
    
    char best_char = 'a';
    int max_freq = 0;
    
    for(int i=0; i<26; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            best_char = 'a' + i;
        }
    }
    
    for(int i=0; i<max_freq; i++){
        cout<<best_char;
    }

    return 0;
}
