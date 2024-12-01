#include <iostream>
#include <cstring>
using namespace std;
int main() {
    
    string str;
    cin>>str;
    int n = str.length();
    
    for(int i = 0; i< n; i++){
        if(str[i]>='0' && str[i]<='9') cout<<str[i];
    }
    cout<<endl;
    
    for(int i = 0; i< n; i++){
        if( (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') ) cout<<str[i];
    }
    cout<<endl;
    
    for(int i = 0; i< n; i++){
        bool letter  = false;
        bool number = false;
        
        if( (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') ) letter=true;
        if(str[i]>='0' && str[i]<='9') number=true;
        if(letter==false && number==false) cout<<str[i];
    }
    return 0;
}
