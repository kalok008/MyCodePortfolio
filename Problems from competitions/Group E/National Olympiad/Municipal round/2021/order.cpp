#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int minn=100000000;
    int maxx=0;
    
    for(int i=0; i<n; i++){
        if(arr[i]!=i+1){
            if(arr[i]<minn){
                minn=arr[i];
            }
            if(arr[i]>maxx){
                maxx=arr[i];
            }
        }
    }
    
    if(maxx>0){
        cout<<minn<<' '<<maxx;
    }else{
        cout<<"0 0";
    }
    return 0;
}
