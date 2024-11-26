#include <iostream>
using namespace std;

int main(){
  
  double a, b, c;
  cin>>a>>b>>c;
  int count = 0;
  
  if(a==0 || b==0 || c==0){
   	cout<<'+';
    return 0;
  }
   if(a<0){
     count++;
   }
  if(b<0){
     count++;
   }
  if(c<0){
     count++;
   }
  if(count%2==1){
		cout<<'-';
  }else{
    cout<<'+'; 
  }
 return 0; 
}
