#include <iostream>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    for(int i=0; i<arr.size()-1; i++){
        if(arr.at(i)=='0' && arr.at(i+1)=='0'){
            continue;
        }else{
            cout<<arr.at(i);
        }
    }
    return 0;
}
