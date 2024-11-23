#include <iostream>
#include <cmath>
using namespace std;

int main(){
  
  int n;
  cin>>n;
  
  while(abs(n)%2==1){
   cout<<"Please write an even number."<<endl;
   cin>>n;
  }
  
  cout<<"The number is: "<<abs(n);
 return 0; 
}
