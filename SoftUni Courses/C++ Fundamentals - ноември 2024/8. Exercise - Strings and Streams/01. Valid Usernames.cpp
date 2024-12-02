#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
bool valid (string username){
    
    if(username.length()>16 || username.length()<3){
        return false;
    }
    
    for(char c : username){
        
        if( c=='-' || c=='_' || (c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z') ){
            continue;
        }else{
            return false;
        }
    }
    
    return true;
}
int main()
{
    string line;
    getline(cin, line);
    
    while(line.length()){
        
        int pos = line.find(", ");
        string username;
        
        if(pos == -1){
            username = line;
            line = "";
        }else{
            username = line.substr(0, pos);
            pos+=2;
            line.erase(0, pos);
        }
        
        if(valid(username)){
            cout<<username<<endl;
        }
        
    }
    return 0;
}
