// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int n;
    cin>>n;
    if(n>0 && n<8){
        cout<<arr[n-1];
    }else{
        cout<<"Invalid day!";
    }
    return 0;
}
