#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string line, finds, replaces;
    getline(cin, line);
    getline(cin, finds);
    getline(cin, replaces);
    
    int index = line.find(finds);
    
    while(index != line.npos){
        line.replace(index, finds.length(), replaces);
        index = line.find(finds, index + replaces.length());
    }
    
    cout<<line;
    return 0;
}
