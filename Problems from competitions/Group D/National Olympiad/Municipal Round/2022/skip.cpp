#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> arr;
    for(int i = 1; i <= n; i++) {
        arr.push_back(i);
    }

    int step = 2;
    vector<int> previousStep;

    while(arr.size() > 1) {
        previousStep = arr;
        vector<int> newArr;
        
        for(int i = 0; i < arr.size(); i++){
            if((i + 1) % step == 1){
                newArr.push_back(arr[i]);
            }
        }

        arr = newArr;
        step++;
    }

    cout<<previousStep.back();

    return 0;
}
