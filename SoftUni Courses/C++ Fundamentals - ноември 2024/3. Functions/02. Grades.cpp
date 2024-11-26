#include <iostream>
using namespace std;
void func(double a){
    if(a<3){
        cout<<"Fail";
    }else if(a<3.5){
        cout<<"Poor";
    }else if(a<4.5){
        cout<<"Good";
    }else if(a<5.5){
        cout<<"Very good";
    }else {
        cout<<"Excellent";
    }
}
int main(){
	double a;
  cin>>a;
	func(a);
	
return 0;
}
