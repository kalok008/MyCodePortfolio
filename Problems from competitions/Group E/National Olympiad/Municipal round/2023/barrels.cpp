#include <iostream>
using namespace std;

int main()
{
    int n1, n2, k;
    char c1, c2;
    cin>>n1>>c1;
    cin>>n2>>c2;
    cin>>k;
    if(c1=='A' && k>n1){
        cout<<n1;
    }else if(c1=='A' && k<=n1){
        cout<<k;
    }else if(c1=='B' && k<=n1){
        cout<<0;
    }else{
        cout<<k-n1;
    }
    return 0;
}
