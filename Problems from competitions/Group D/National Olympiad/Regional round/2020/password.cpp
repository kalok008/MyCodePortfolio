#include <iostream>
#include <string>
#include <vector>

using namespace std;

char find_replacement(char prev, char next);

int main(){
    string password;
    cin>>password;

    int n = password.length();
    
    for(int i = 2; i < n; i++){
        if(password[i] == password[i - 1] && password[i] == password[i - 2]){
            char prev_char = '\0';
            if(i > 0){
                prev_char = password[i - 1];
            }

            char next_char = '\0';
            if(i + 1 < n){
                next_char = password[i + 1];
            }

            password[i] = find_replacement(prev_char, next_char);
        }
    }

    vector<int> freq(26, 0);
    for(int i = 0; i < n; i++){
        freq[password[i] - 'a']++;
    }

    for(int i = 0; i < n; i++){
        if(freq[password[i] - 'a'] > n / 2){
            char prev_char = '\0';
            if(i > 0){
                prev_char = password[i - 1];
            }

            char next_char = '\0';
            if(i + 1 < n){
                next_char = password[i + 1];
            }

            char replacement = find_replacement(prev_char, next_char);
            freq[password[i] - 'a']--;
            password[i] = replacement;
            freq[replacement - 'a']++;
        }
    }

    cout<<password;

    return 0;
}

char find_replacement(char prev, char next){
    for(char c = 'a'; c <= 'z'; c++){
        if(c != prev && c != next){
            return c;
        }
    }
    return 'a';
}
