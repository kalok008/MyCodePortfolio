#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    if(a==6){
        a=9;
    }
    if(b==6){
        b=9;
    }
    if(a>=b){
        cout<<10*a+b;
    }else{
        cout<<10*b+a;
    }
    return 0;
}
