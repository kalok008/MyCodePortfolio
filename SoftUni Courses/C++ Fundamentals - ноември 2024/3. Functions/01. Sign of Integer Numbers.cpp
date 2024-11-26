#include <iostream>
using namespace std;
void func(int a){
    if(a<0){
        cout<<"The number "<<a<<" is "<<"negative.";
    }else if(a>0){
        cout<<"The number "<<a<<" is "<<"positive.";
    }else{
        cout<<"The number "<<a<<" is "<<"zero.";
    }
}
int main(){
	int a;
  cin>>a;
	func(a);
	
return 0;
}
