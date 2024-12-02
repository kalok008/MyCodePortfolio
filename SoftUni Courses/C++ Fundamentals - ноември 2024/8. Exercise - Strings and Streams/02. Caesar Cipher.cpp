#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    
    for(int i=0; i<line.length(); i++){
        
        line[i] += 3;
        
    }
    
    cout<<line;
    return 0;
}
