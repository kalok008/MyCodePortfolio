#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> arr1;
    vector<int> arr2;
    string line1;
    getline(cin, line1);
    string line2;
    getline(cin, line2);

    {
        istringstream istr(line1);
        int num;
        while (istr >> num){
            arr1.push_back(num);
        }
    }
    {
        istringstream istr(line2);
        int num;
        while (istr >> num){
            arr2.push_back(num);
        }
    }
    
    int a = arr1.size(), b = arr2.size();
    if(a<b){
        for(int i = 0; i<a; i++){
            cout<<arr1[i]<<' '<<arr2[i]<<' ';
        }
        for(int i = a; i<b; i++){
            cout<<arr2[i]<<' ';
        }
    }else{
        for(int i = 0; i<b; i++){
            cout<<arr1[i]<<' '<<arr2[i]<<' ';
        }
        for(int i = b; i<a; i++){
            cout<<arr1[i]<<' ';
        }
    }
    return 0;
}
