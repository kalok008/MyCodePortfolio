#include <iostream>
using namespace std;
int spec_d (int x);
int main() {
    int a, b, sum = 0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        sum+=spec_d(i);
    }
    cout<<sum;
    return 0;
}
int spec_d (int x){
    int count = 0;
    for(int i = 2 ; i*i<x; i++){
        if((x-i)/ i > i && x%i==0){
            count++;
        }
    }
    return count + 1;
}

