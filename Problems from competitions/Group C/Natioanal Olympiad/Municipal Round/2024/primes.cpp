#include <iostream>
using namespace std;

bool prime(int x);

int main()
{
    int a1, a2;
    cin>>a1>>a2;
    int count=0;
  
    for(int i=2; i<=a2; i++){
        if(prime(i)==true){
            if(a2/i-(a1-1)/i>0){
                count++;
            }
        }
    }
  
    cout<<count;
    return 0;
}

bool prime(int x){
    if(x<=1){
        return false;
    }else if(x==2 || x==3){
        return true;
    }else if(x%2==0 || x%3==0){
        return false;
    }else{
        for(int i=5; i*i<=x; i+=6){
            if(x%i==0 || x%(i+2)==0){
                return false;
            }
        }
        return true;
    }
    
}
