#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2;
    cin>>str1>>str2;
    int a = str1.length();
    int b = str2.length();
    bool edno;
    if(a>b){
        swap(a, b);
        edno = true;
    }
    
    int total = 0;
    
    for(int i=0; i<a; i++){
        int mull = 0;
        mull=str1[i]*str2[i];
        total += mull;
    }
    
    for(int i=a; i<b; i++){
        if(edno){
            total += str1[i];
        }else{
            total += str2[i];
        }
    }
    
    cout<<total;
    return 0;
}
