#include <iostream>
#include <iomanip>
using namespace std;
unsigned long long fac(int a){
    unsigned long long result = 1;
    for(int i = 2; i<=a; i++){
        result*=i;
    }
    return result;
}
int main(){
	int a, b;
    cin>>a>>b;
    unsigned long long aF = fac(a);
    unsigned long long bF = fac(b);

    cout<<setprecision(2)<<fixed<<aF/(double)bF;
	
return 0;
}
