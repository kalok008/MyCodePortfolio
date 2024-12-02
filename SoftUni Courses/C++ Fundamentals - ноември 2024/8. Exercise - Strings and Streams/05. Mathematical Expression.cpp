#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

bool valid(string line){
    int brackets = 0;
    for(char c : line){
        if(c=='('){
            brackets++;
        }
        if(c==')'){
            if(brackets<=0){
                return false;
            }else{
                brackets--;
            }
        }
    }
    
    return brackets == 0;
}

int main()
{
    string line;
    getline(cin, line);
    
    if( valid(line) ){
        cout<<"correct";
    }else{
        cout<<"incorrect";
    }
    
    return 0;
}
