#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin>>n;
    int arr[n];
    cin>>arr[0];
  
    for(int i=1; i<n; i++){
        cin>>arr[i];
        if(arr[i-1] + 1!=arr[i]){
            count++;
        }
    }
  
    int maxx=0, seq = 0;
    for(int i=0; i<n; i++){
        if(arr[i-1] + 1==arr[i]){
            seq++;
        }else{
            seq=0;
        }
        maxx = max(maxx, seq);
    }      
  
    cout<<count<<' '<<maxx + 1;
    return 0;
}
