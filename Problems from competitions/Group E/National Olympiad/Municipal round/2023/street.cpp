#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int max_odd=1;
    int count_even = 0;
    int count_odd =0;
    int max_even=2;
    
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count_even++;
            if(arr[i]>max_even){
                max_even = arr[i];
            }
        }else{
            count_odd++;
            if(arr[i]>max_odd){
                max_odd = arr[i];
            }
        }
    }
    
    cout<<max_odd/2-count_odd + 1<<' '<<max_even/2-count_even;
    return 0;
}
