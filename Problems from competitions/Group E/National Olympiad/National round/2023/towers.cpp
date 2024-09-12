#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    long long a, b;
    cin >> x >> y >> a >> b;

    if (a > b) {
        swap(a, b);

    }
    
    if(a==b && x==y){
        cout<<2*a;
    }else if(a==b && x!=y){
        cout<<3*a;
    }else if(a!=b && x!=y){
        cout<<3*a + 1;
    }else if(a!=b && x==y){
        cout<<2*a + 1;
    }

    return 0;
}
