#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    
    int count_2 = 0, count_5 = 0;
    
    while(N % 2 == 0){
        N /= 2;
        count_2++;
    }
    
    while(N % 5 == 0){
        N /= 5;
        count_5++;
    }
    
    if(N == 1){
        cout<<max(count_2, count_5)<<endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
