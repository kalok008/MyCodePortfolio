#include <iostream>
#include <cstring>
using namespace std;
int main() {
    
    string str;
    string str1;
    cin>>str>>str1;
    int n = str.length();
    int n1 = str1.length();

    
    for(int i = 0; i<n1; i++){
        
        if(str1[i] == str[0]){
            string str2 = str1.substr(i, n);
            if(str2==str){
                str1.erase(i, n);
                n1 = str1.length();
                i = -1;
            }
        }

    }
    
    
    cout<<str1;
    
    return 0;
}
