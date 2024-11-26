#include <iostream>
using namespace std;
void func(int a){
    for(int i = 1; i<=a; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    for(int i = a-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
}
int main(){
	int a;
  cin>>a;
	func(a);
	
  return 0;
}
