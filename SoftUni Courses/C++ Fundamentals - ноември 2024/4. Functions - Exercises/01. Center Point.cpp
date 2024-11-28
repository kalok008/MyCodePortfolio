#include <iostream>
#include <cmath>
using namespace std;
double func(int a, int b){
    double dis = sqrt(a*a+b*b);
    return (double)dis;
}
int main(){
	double a, b, c, d;
    cin>>a>>b>>c>>d;
	if(func(c, d) < func(a, b)){
	    cout<<'('<<c<<", "<<d<<')';
	}else{
	    cout<<'('<<a<<", "<<b<<')';
	};
	
return 0;
}
