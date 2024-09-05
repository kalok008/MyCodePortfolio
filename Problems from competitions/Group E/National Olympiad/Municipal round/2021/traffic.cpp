#include <iostream>
using namespace std;
int main(){
    char c1, c2, c3;
    cin>>c1>>c2>>c3;
    if(c1=='b' && c2=='b' && c3=='g'){
        cout<<"black\n"<<"black\n"<<"GREEN";
        
    }else if(c1=='b' && c2=='b' && c3=='G'){
        cout<<"black\n"<<"yellow\n"<<"black";
        
    }else if(c1=='b' && c2=='Y' && c3=='b'){
        cout<<"black\n"<<"YELLOW\n"<<"black";
        //
    }else if(c1=='r' && c2=='b' && c3=='b'){
        cout<<"red\n"<<"yellow\n"<<"black";
        
    }else if(c1=='r' && c2=='y' && c3=='b'){
        cout<<"black\n"<<"black\n"<<"green";
        
    }else if(c1=='b' && c2=='y' && c3=='b'){
        cout<<"red\n"<<"black\n"<<"black";
        
    }else{
        cout<<"error";
    }
    return 0;
}
