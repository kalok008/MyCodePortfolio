#include <iostream>
using namespace std;
int main(){
	int n, n2;
  cin>>n;
  n2=n;
  
  int sum=0;
  while(n!=0){
	  int a = n%10;
    int fac=1;
    for(int i=2; i<=a; i++){
      fac*=i;
    }
    sum+=fac;
    n/=10;
  }
  
  if(sum==n2){
    cout<<"yes";
  }else{
   cout<<"no"; 
  }

return 0;
}
