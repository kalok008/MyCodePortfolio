#include <iostream>
using namespace std;
int main()
{
    int n, d, k;
    cin>>n>>d>>k;
    int pos = 1, sum = 1;
    while(k>0){
        pos += d;
        while(pos>n){
            pos -= n;
        }
        sum += pos;
        k--;
    }
    cout<<sum;
    return 0;
}
