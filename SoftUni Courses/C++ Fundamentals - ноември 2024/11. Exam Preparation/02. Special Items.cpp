#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    string line;
    string output = "";
    getline(cin, line);
    output += line[0];
    for(int i = 1; i < line.length(); i++){
        if(line[i] == line[i-1] && line[i] != 'a' && line[i] != 'e' 
        && line[i] != 'i' && line[i] != 'o'  && line[i] != 'u'){
            continue;
        }else{
            output += line[i];
        }
    }
    
    cout<<output;
    return 0;
}
