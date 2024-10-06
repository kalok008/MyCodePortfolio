#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countSubstrings(const string& s, char ch) {
    int count = 0;
    if (s[0] == ch) {
        count++;
    }
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == ch && s[i-1] != ch) {
            count++;
        }
    }
    return count;
}

int main() {
    
    string bitString;
    cin >> bitString;
    
    int a = countSubstrings(bitString, '0');
    int b = countSubstrings(bitString, '1');

    int t;
    cin >> t;

    vector<string> commands(t);
    cin.ignore();

    for (int i = 0; i < t; i++) {
        getline(cin, commands[i]);
    }

    for(const string& command : commands) {
        if(command[0] == 'I') {
            
            string substring = command.substr(4);
            int i = stoi(substring) - 1;
            bitString[i] = (bitString[i] == '0') ? '1' : '0';
            
            if (i == 0 && bitString[0] != bitString[1]) {

                if(bitString[0] == '0'){
                    a++;
                }else{
                    b++;
                }
                continue;
                
            } else if (i == 0  && bitString[0] == bitString[1]) {

                if (bitString[0] == '0') {
                    b--;
                } else {
                    a--;
                }
                continue;
                
            } else if (i == bitString.length() - 1  && bitString[i-1] == bitString[i]) {

                if (bitString[i] == '0') {
                    b--;
                } else {
                    a--;
                }
                continue;
                
            } else if (i == bitString.length() - 1  && bitString[i-1] != bitString[i]) {
                if (bitString[i] == '0') {
                    a++;
                } else {
                    b++;
                }
                continue;
                
            } else if (bitString[i] == bitString[i+1] && bitString[i]
            == bitString[i-1]) {
                a--;
                b--;
                continue;
                
            } else if (bitString[i] != bitString[i+1] && bitString[i]
            != bitString[i-1]) {
                a++;
                b++;

                continue;
            }
            
            
            
        } else {
            int x = command[6] - '0';
            if (x == 0) {
                cout<<a<<endl;
            } else {
                cout<<b<<endl;
            }
        }
    }

    return 0;
}
