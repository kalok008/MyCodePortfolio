#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

bool valid1(string line){
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
bool valid2(string line){
    int brackets = 0;
    for(char c : line){
        if(c=='{'){
            brackets++;
        }
        if(c=='}'){
            if(brackets<=0){
                return false;
            }else{
                brackets--;
            }
        }
    }
    
    return brackets == 0;
}
bool valid3(string line){
    int brackets = 0;
    for(char c : line){
        if(c=='['){
            brackets++;
        }
        if(c==']'){
            if(brackets<=0){
                return false;
            }else{
                brackets--;
            }
        }
    }
    
    return brackets == 0;
}
bool valid4(string line){
    int brackets = 0;
    for(char c : line){
        if(c=='(') brackets++;
        if(c == ')') brackets--;
        if(brackets>0 && (c == ']'  || c == '[')) return false;
    }
    return true;
}
bool valid5(string line){
    int brackets = 0;
    for(char c : line){
        if(c=='(') brackets++;
        if(c == ')') brackets--;
        if(brackets>0 && (c == '}'  || c == '{')) return false;
    }
    return true;
}
bool valid6(string line){
    int brackets = 0;
    for(char c : line){
        if(c=='[') brackets++;
        if(c == ']') brackets--;
        if(brackets>0 && (c == '}'  || c == '{')) return false;
    }
    return true;
}
int main()
{
    string line;
    getline(cin, line);
    
    if( valid1(line) && valid2(line)  && valid3(line) && valid4(line) && valid5(line) && valid6(line) ){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
    
    return 0;
}
