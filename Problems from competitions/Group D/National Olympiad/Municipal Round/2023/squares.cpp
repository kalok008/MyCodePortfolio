#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool moje(int x);

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        if( moje(arr[i]) == true){
            cout<<1;
        }else{
            cout<<0;
        }
    }
    return 0;
}

bool moje(int x){
    for(int i = 1; i*i < x; i++){
        int square_1 = i*i;
        int square_2 = floor(sqrt(x-square_1)) * floor(sqrt(x-square_1));
        if(square_1 + square_2 == x){
            return true;
        }else{
            continue;
        }
    }
    return false;
}
