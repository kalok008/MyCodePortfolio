#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin>>n;

	int x = floor(sqrt(n));

	if(x%2==0 && n<=x+1+x*x) {
	    
	    if(n-x*x!=0){
		    cout<<x+1<<' '<<n-x*x;
	    }else{
	        cout<<x<<' '<<1;
	    }
	    
	} else if(x%2==0 && n>x+1+x*x) {
		
		if((x+1)*(x+1)-n+1!=0){
		    cout<<(x+1)*(x+1)-n+1<<' '<<x+1;
	    }else{
		    cout<<1<<' '<<x;
	    }
	    
	} else if(x%2==1 && n<=x+1+x*x) {
		
		if(n-x*x!=0){
		    cout<<n-x*x<<' '<<x+1;
	    }else{
	        cout<<1<<' '<<x;
	    }
	    
	} else if(x%2==1 && n>x+1+x*x) {
		
		if((x+1)*(x+1)-n+1!=0){
		    cout<<x+1<<' '<<(x+1)*(x+1)-n+1;
	    }else{
		    cout<<x<<' '<<1;
	    }
	    
	}
	return 0;
}
