#include <iostream>
#include <cmath>
using namespace std;

long long sum_of_squares(long long k) {
    return k * (k + 1) * (2 * k + 1) / 6;
}

int main() {
    long long n;
    cin>>n;
    long long sum = 0;
    
    long long low = 0, high = sqrt(n) + 1, i = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;
        if (sum_of_squares(mid) <= n) {
            i = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    sum = sum_of_squares(i);
    i++;
    
    if( (n-sum) % i !=0){
        cout<<i*(i-1)/2 + (n-sum)/i + 1;
    }else{
        cout<<i*(i-1)/2 + (n-sum)/i;
    }
    return 0;
}
