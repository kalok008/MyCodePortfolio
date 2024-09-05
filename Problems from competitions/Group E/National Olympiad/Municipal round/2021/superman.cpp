#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    
    int sum = 0;
    int j = 0;
    while(sum<100){
        sum+=arr[j];
        j++;
    }
    
    int sum2;
    if(j>0){
        sum2=sum-arr[j-1];
    }
    if(sum-100<=100-sum2){
        cout<<sum;
    }else{
        cout<<sum2;
    }
    return 0;
}
