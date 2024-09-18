#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace std;

int main(){
  
   using namespace boost::multiprecision;
  
   int n;
   cin>>n;
  
   int1024_t m;
   cin>>m;
  
   int1024_t result = 1;

   for(int i = 0; i < n; i++)
      result *= 2;

   cout<<result - m;
   
   return 0;
}
