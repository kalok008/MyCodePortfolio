#include <iostream>
using namespace std;

int main() {
    long long arr[2][2];
    for(int i=0; i<2; i++){
        for(int j = 0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    if(arr[0][0] < arr[0][1]  && arr[0][0] < arr[0][1] / 2 && arr[1][0] < arr[1][1]  && arr[1][0] < arr[1][1] / 2){
        cout<<'0'<<endl<<'0';
        
    }else if(arr[0][0] < arr[0][1]  && arr[0][0] >= arr[0][1] / 2 && arr[1][0] < arr[1][1]  && arr[1][0] < arr[1][1] / 2){
        cout<<'1'<<endl<<'0';
        
    }else if(arr[0][0] < arr[0][1]  && arr[0][0] < arr[0][1] / 2 && arr[1][0] < arr[1][1]  && arr[1][0] >= arr[1][1] / 2){
        cout<<'0'<<endl<<'1';
        
    }else if(arr[0][0] < arr[0][1]  && arr[0][0] >= arr[0][1] / 2 && arr[1][0] < arr[1][1]  && arr[1][0] >= arr[1][1] / 2){
        cout<<'1'<<endl<<'1';
        
    }else if(arr[0][0] % arr[0][1] >= arr[0][1] / 2 && arr[1][0] % arr[1][1] >= arr[1][1] / 2){
        cout<<arr[0][0] / arr[0][1] * 2 + 1<<endl<<arr[1][0] / arr[1][1] * 2 + 1;
        
    }else if(arr[0][0] % arr[0][1] < arr[0][1] / 2 && arr[1][0] % arr[1][1] < arr[1][1] / 2){
        cout<<arr[0][0] / arr[0][1] * 2 <<endl<<arr[1][0] / arr[1][1] * 2;
        
    }else if(arr[0][0] % arr[0][1] < arr[0][1] / 2 && arr[1][0] % arr[1][1] >= arr[1][1] / 2){
        cout<<arr[0][0] / arr[0][1] * 2 <<endl<<arr[1][0] / arr[1][1] * 2 + 1;
        
    }else if(arr[0][0] % arr[0][1] >= arr[0][1] / 2 && arr[1][0] % arr[1][1] < arr[1][1] / 2){
        cout<<arr[0][0] / arr[0][1] * 2 + 1 <<endl<<arr[1][0] / arr[1][1] * 2;
        
    }
    return 0;
}
