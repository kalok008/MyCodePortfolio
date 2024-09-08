#include <iostream>
using namespace std;

int d(int x);

int main() {
    int a, b;
    cin>>a>>b;
    int count = 0;
    
    while(d(a)<=b){
        count++;
        a = d(a);
    }
    
    cout<<count + 1;
    
    return 0;
}

int d(int x){
    int sum = x;
    while(x>0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
