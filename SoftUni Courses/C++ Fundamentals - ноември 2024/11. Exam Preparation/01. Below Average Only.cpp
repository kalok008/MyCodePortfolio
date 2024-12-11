#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> arr(n, 0);
    arr.reserve(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    
    double average = sum/n;
    
    for(int i = 0; i<arr.size(); i++){
        if(arr[i]>average){
             arr.erase(i + arr.begin());
             i--;
        }
    }
    
    int sumODD = 0, sumEVEN = 0;
    for(int i = 0; i < arr.size(); i++){
        if(i%2==0){
            sumODD += arr[i];
        }else{
            sumEVEN += arr[i];
        }
    }
    
    cout<<sumEVEN * sumODD;
    return 0;
}
