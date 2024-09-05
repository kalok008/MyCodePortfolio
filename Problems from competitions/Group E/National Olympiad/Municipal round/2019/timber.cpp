#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, X;
    cin>>N>>X;
    if((X-N)%2==0){
        cout<<X-N<<endl<<(X-N)/2<<' '<<(X-N)/2;
    }else{
        cout<<X-N<<endl<<(X-N)/2<<' '<<(X-N)/2 + 1;
    }
    return 0;
}
