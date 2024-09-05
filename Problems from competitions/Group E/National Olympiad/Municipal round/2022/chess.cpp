#include <iostream>
using namespace std;
int main()
{
    int beli[6];
    int cherni[6];
    int chess[6] = {1, 1, 2, 2, 2, 8};
    
    for(int i=0; i<6; i++){
        cin>>beli[i];
    }
    
    for(int i=0; i<6; i++){
        cin>>cherni[i];
    }
    
    for(int i=0; i<5; i++){
        cout<<chess[i]-beli[i]<<' ';
    }
    cout<<chess[5]-beli[5]<<endl;
    
    for(int i=0; i<5; i++){
        cout<<chess[i]-cherni[i]<<' ';
    }
    cout<<chess[5]-cherni[5];
    
    return 0;
}
