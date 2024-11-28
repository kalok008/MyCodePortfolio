#include <iostream>
#include <cmath>
using namespace std;
int even(int a){
    int sum = 0;
    while (a){
        int b = a%10;
        if(b%2==0){
        sum += b;
        }
        a /= 10;
    }
    return sum;
}
int odd(int a){
    int sum = 0;
    while (a){
        int b = a%10;
        if(b%2==1){
        sum += b;
        }
        a /= 10;
    }
    return sum;
}

int main(){
	int n;
  cin>>n;
  n= abs(n);
  cout<<even(n)*odd(n);
    
	
return 0;
}
