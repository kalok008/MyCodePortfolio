#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    long long n;
    cin>>n>>x;
    int r = n%6;
    
    switch(r){
        case 0:
        cout<<x;
        break;
        
        case 1:
        if(x==0){
            cout<<1;
            break;
        }else if(x==1){
            cout<<0;
            break;
        }else if(x==2){
            cout<<2;       
            break;
        }
        
        case 2:
        if(x==0){
            cout<<1;        
            break;
        }else if(x==1){
            cout<<2;
            break;
        }else if(x==2){
            cout<<0;  
            break;
        }
        
        case 3:
        if(x==0){
            cout<<2;
            break;
        }else if(x==1){
            cout<<1;
            break;
        }else if(x==2){
            cout<<0;                
            break;
        }
        
        case 4:
        if(x==0){
            cout<<2;
            break;
        }else if(x==1){
            cout<<0;
            break;
        }else if(x==2){
            cout<<1;
            break;
        }
        
        case 5:
        if(x==0){
            cout<<0;
            break;
        }else if(x==1){
            cout<<2;
            break;
        }else if(x==2){
            cout<<1;
            break;
        }
          
    }
    
    return 0;
}
