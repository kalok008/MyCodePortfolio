#include <iostream>
using namespace std;

int main()
{
    int S;
    int P;
    int R;
    int days = 0;
    
    cin>>S>>P>>R;
    
    S=S-P;
    int diff = P-R;
    if(S%diff==0){
        days = days + S/(P-R); 
    }else{
        days = days + S/(P-R) + 1;
    }
    cout<<days;
    while(days+3>=7){
        days= days-7;
    }
    cout<<' '<<days+3;
    return 0;
}
