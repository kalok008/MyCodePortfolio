#include <iostream>
#include <cstring>
using namespace std;
int main() {
    
    do{
        string str;
        cin>>str;
        if(str=="end"){
            break;
        }else{
            int n = str.length();
            cout<<str<<" = ";
            for(int i = n; i>=0; i--){
                cout<<str[i];
            }
            cout<<endl;
        }
        
        
    }while(true);
    
    return 0;
}
