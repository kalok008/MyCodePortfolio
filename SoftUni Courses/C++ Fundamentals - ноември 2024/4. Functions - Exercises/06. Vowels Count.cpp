#include <iostream>
#include <cstring>
#include <unordered_set>
using namespace std;
int count(string a){
    int count = 0;
    unordered_set<char> letters = {'a', 'A', 'o', 'O', 'u', 'U', 'e', 'E', 'i', 'I'};
    int n = a.length();
    for(int i=0; i<n; i++){
        if(letters.find(a[i]) != letters.end()){
            count++;
        }
    }
    return count;
}

int main(){
	string n;
  cin>>n;
  cout<<count(n);

  return 0;
}
