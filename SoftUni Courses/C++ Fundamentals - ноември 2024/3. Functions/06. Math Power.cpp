#include <iostream>
using namespace std;
int func(int a, int b){
    int result = 1;
    while(b){
        result *= a;
        b--;
    }
    
    return result;
}
int main(){
	int a, b;
  cin>>a>>b;
	cout<<func(a, b);
	
return 0;
}
