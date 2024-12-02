#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

string capitalizeLine (const string & line){
    
    ostringstream ostr;
    bool capitalize = true;
    
    for(char c : line){
        
        if(capitalize){
            c = toupper(c);
            capitalize = false;
        }
        
        ostr << c;
        capitalize = !isalpha(c);
    }
    
    return ostr.str();
    
}

int main()
{
    string line;
    getline(cin, line);
    
    cout<<capitalizeLine(line);
    
    return 0;
}
