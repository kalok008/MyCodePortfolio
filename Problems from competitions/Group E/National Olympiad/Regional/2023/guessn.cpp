#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin>>a>>b>>c;
	int swap;
	if(a>=b) {
		swap=a;
		a=b;
		b=swap;
	}
    if(a>=c){
        swap=a;
        a=c;
        c=swap;
    }
    if(b>=c){
        swap=b;
        b=c;
        c=swap;
    }
    
    if(c-b == b-a){
        int diff = b-a;
        if(a-diff>0){
        cout<<a-diff<<' '<<c+diff;
        }else{
            cout<<c+diff;
        }
    }else if(c-b > b-a){
        int diff = b-a;
        cout<<c-diff;
    }else if(c-b < b-a){
        int diff = c-b;
        cout<<a+diff;
    }
    
	return 0;
}
