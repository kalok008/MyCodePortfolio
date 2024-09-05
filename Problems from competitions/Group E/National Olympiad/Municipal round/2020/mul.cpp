#include <iostream>
using namespace std;
int main(){
    int a, n;
    cin>>a>>n;
    
    while(n>0){
        int b = a*a;
        a = b % 1000;
        n--;
    }
    cout<<a;
    return 0;
}
