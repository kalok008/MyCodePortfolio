#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int longest = 1;
    int index = 0;
    for(int i = 0; i<n;){
        int current = 1;
        while(arr[i]==arr[i+1]){
            i++;
            current++;
            if(current>=longest){
                longest = current;
                index = i;
            }
        }
        i++;
    }
    if(longest>1){
        for(int i = 0; i<longest; i++)
        cout<<arr[index]<<' ';
    }else{
        cout<<arr[n-1];
    }
    return 0;
}
