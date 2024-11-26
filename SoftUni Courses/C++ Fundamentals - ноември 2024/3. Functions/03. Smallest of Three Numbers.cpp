#include <iostream>
using namespace std;
void func(int a, int b, int c){
    int minn = a;
    if(minn>b){
        minn=b;
    }
    if(minn>c){
        minn=c;
    }
    
    cout<<minn;
}
int main(){
	int a, b, c;
    cin>>a>>b>>c;
	func(a, b, c);
	
return 0;
}
