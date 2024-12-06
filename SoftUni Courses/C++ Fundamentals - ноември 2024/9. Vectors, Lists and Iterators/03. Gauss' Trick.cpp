#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> input;
    string line;
    getline(cin, line);

    istringstream istr(line);
    int num;
    while (istr >> num){
            input.push_back(num);
    }
    
    int l = 0, r = input.size()-1;
    while(l<=r){
        if(l==r){
            cout<<input[l];
        }else{
            cout<<input[l]+input[r]<<' ';
        }
        l++;
        r--;
        
    }    
    return 0;
}
