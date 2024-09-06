#include <iostream>
using namespace std;

int main() {
    char pass[2][4];
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> pass[i][j];  
        }
    }
 
    for(int i = 0; i < 4; i++) {
        if(pass[0][i] >= '0' && pass[0][i] <= '9') {
            sum1 = sum1 + pass[0][i] - '0';
        } else if(pass[0][i] >= 'a' && pass[0][i] <= 'z') {
            sum1 = sum1 + pass[0][i] - 'a' + 1;
        } else if(pass[0][i] >= 'A' && pass[0][i] <= 'Z') { 
            sum1 = sum1 + pass[0][i] - 'A' + pass[0][i] - 'A' + 2;
        }
    }
    

    for(int i = 0; i < 4; i++) {
        if(pass[1][i] >= '0' && pass[1][i] <= '9') {
            sum2 = sum2 + pass[1][i] - '0';
        } else if(pass[1][i] >= 'a' && pass[1][i] <= 'z') {
            sum2 = sum2 + pass[1][i] - 'a' + 1;
        } else if(pass[1][i] >= 'A' && pass[1][i] <= 'Z') { 
            sum2 = sum2 + pass[1][i] - 'A' + pass[1][i] - 'A' + 2;
        }
    }
    
    if(sum1>sum2){
        cout<<pass[0][0]<<pass[0][1]<<pass[0][2]<<pass[0][3]<<' '<<sum1;
    }else if(sum1==sum2){
        cout<<'0';
    }else{
        cout<<pass[1][0]<<pass[1][1]<<pass[1][2]<<pass[1][3]<<' '<<sum2;
    }

    return 0;
}
