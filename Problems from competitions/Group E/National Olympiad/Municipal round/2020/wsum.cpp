#include <iostream>
#include <string>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    string aminn = a;
    string amaxx = a;
    string bminn = b;
    string bmaxx = b;
    for(int i=0; i<a.length(); i++){
        if(a.at(i)=='3'){
            amaxx.at(i)='8';
        }
        if(a.at(i)=='8'){
            aminn.at(i)='3';
        }
    }
    for(int i=0; i<b.length(); i++){
        if(b.at(i)=='3'){
            bmaxx.at(i)='8';
        }
        if(b.at(i)=='8'){
            bminn.at(i)='3';
        }
    }
    cout<<stoi(aminn)+stoi(bminn)<<' '<<stoi(amaxx)+stoi(bmaxx);
    return 0;
}
