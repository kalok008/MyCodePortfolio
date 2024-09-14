#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool palin(const string &s);

int main() {
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        if(palin(s)){
            cout<<1;
        }else{
            cout<<0;
        }
    }

    return 0;
}

bool palin(const string &s){
    unordered_map<char, int> char_count;
    
    for(char ch : s){
        char_count[ch]++;
    }

    int odd_count = 0;
    
    for (const auto &pair : char_count){
        if (pair.second % 2 != 0){
            odd_count++;
        }
    }

    return odd_count <= 1;
}
