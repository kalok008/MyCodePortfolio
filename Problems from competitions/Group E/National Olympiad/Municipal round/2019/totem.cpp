#include <iostream>
#include <string>
using namespace std;
int main(){
    char arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    
    int a = 100 * (arr[0][0] - '0') + 10 * (arr[1][1] -'0') + arr[2][2] - '0';
    int b = 100 * (arr[0][2] - '0') + 10 * (arr[1][1] - '0') + arr[2][0] - '0';
    cout<<a*b;
    return 0;
}
