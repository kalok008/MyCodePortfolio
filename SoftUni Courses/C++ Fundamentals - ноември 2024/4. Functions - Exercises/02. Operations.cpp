#include <iostream>
using namespace std;
int mi(int a, int b){
    return a-b;
}
int pl(int a, int b){
    return a+b;
}
int mul(int a, int b){
    return a*b;
}
int dive(int a, int b){
    return a/b;
}
int main(){
	int a, b;
  cin>>a>>b;
  char c;
  cin>>c;
    
	if(c=='+'){
	    cout<<pl(a, b);
	}else if(c=='-'){
	    cout<<mi(a, b);
	}else if(c=='*'){
	    cout<<mul(a, b);
	}else{
	    cout<<dive(a, b);
	}
	
return 0;
}
