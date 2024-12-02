#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cin>>str;
    
    for(int i=1; i<str.length(); i++){
        
        if(str[i]==str[i-1]){
            str.erase(i, 1);
            i--;
        }
        
    }
    
    cout<<str;
    return 0;
}
