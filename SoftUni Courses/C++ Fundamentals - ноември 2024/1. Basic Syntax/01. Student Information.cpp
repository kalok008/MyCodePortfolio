#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 
  string name;
  int age;
  double grade;
  cin>>name>>age>>grade;
  cout<<"Name: "<<name<<", Age: "<<age<<", Grade: "<<setprecision(2)<<fixed<<grade<<endl;
  return 0;
}
