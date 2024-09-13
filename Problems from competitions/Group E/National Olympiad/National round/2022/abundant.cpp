#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long sumDivisors = 0;

    for(long long i = 2; i*i<=n; i++){
        if(n%i == 0 && i*i!=n){
            sumDivisors += i;
            sumDivisors += n/i;
        }else if(i*i==n){
            sumDivisors += i;
        }
    }
    sumDivisors++;
    
    cout<<sumDivisors<<endl;

    if(sumDivisors > n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
