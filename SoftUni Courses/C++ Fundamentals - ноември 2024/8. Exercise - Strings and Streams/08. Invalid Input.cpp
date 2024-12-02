#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string line, finds, replaces;
    getline(cin, line);
    
    istringstream istr(line);
    string buf;
    ostringstream words;
    int result = 0;
    
    while(istr >> buf){
        
        istringstream convertStream(buf);
        int digit;
        convertStream >> digit;
        
        if(!(bool)convertStream){
            words<<buf<<' ';
        }else{
            result+=digit;
        }
    }
    
    cout<<result<<endl<<words.str();
    
    return 0;
}
