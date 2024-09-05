#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin>>x>>y>>z;
    if(x<=z && z<=y){
        cout<<y<<z<<x;
        
    }else if(x<=y && y<=z){
        cout<<z<<y<<x;
        
    }else if(y<=x && x<=z){
        cout<<z<<x<<y;
        
    }else if(y<=z && z<=x){
        cout<<x<<z<<y;
        
    }else if(z<=x && x<=y){
        cout<<y<<x<<z;
        
    }else{
        cout<<x<<y<<z;
        
    }
    return 0;
}
