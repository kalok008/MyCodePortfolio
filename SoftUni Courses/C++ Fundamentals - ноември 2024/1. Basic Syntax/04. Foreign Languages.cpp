#include <iostream>
using namespace std;

int main(){
  
  string name;
  cin>>name;
  
  if(name == "USA" || name == "England"){
     cout<<"English";
     }else if(name == "Mexico" || name == "Argentina" || name == "Spain"){
      cout<<"Spanish"; 
     }else{
		cout<<"unknown";
     }
 return 0; 
}
