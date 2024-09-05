#include <iostream>
#include <string>
using namespace std;
int main(){
    char pass[5];
    for(int i=0; i<5; i++){
        cin>>pass[i];
    }
    
    int x = pass[0] - '0';
    int y = pass[4] - '0';

    x *= 2;
    y *= 2;

    if (x >= 10) {
        x = x / 10 + x % 10;
    }
    if (y >= 10) {
        y = y / 10 + y % 10;
    }
    
    cout<<x;
    
    if(pass[1]>=pass[2] && pass[2]>=pass[3]){
        cout<<pass[3]<<pass[2]<<pass[1];
        
    }else if(pass[1]>=pass[2] && pass[1]<=pass[3]){
        cout<<pass[2]<<pass[1]<<pass[3];
        
    }else if(pass[3]>=pass[2] && pass[3]<=pass[1]){
        cout<<pass[2]<<pass[3]<<pass[1];
        
    }else if(pass[2]>=pass[1] && pass[3]<=pass[1]){
        cout<<pass[3]<<pass[1]<<pass[2];
        
    }else if(pass[3]>=pass[2] && pass[1]<=pass[2]){
        cout<<pass[1]<<pass[2]<<pass[3];
        
    }else if(pass[2]>=pass[3] && pass[1]<=pass[3]){
        cout<<pass[1]<<pass[3]<<pass[2];
    }
    
    cout<<y;
    return 0;
}
