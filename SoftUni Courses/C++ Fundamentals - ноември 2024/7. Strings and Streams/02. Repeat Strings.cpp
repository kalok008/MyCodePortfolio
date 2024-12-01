#include <iostream>
#include <cstring>
using namespace std;
int main() {
    
    string str;
    getline(cin, str);
    int n = str.length();
    int i = 0;
    string res;
    while(i<=n){
        while(str[i]!=' ' && str[i]!=0){
            res += str[i];
            i++;
        }
        int x = res.length();
        for(int j = 0; j<x; j++){
            cout<<res;
        }
        res.erase (0,x); 
        i++;
    }
    
    
    return 0;
}
