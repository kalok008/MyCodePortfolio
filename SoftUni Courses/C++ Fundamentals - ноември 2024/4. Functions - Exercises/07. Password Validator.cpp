#include <iostream>
#include <cstring>
using namespace std;
bool con1(string a){
    int n = a.length();
    if(n > 10 || n < 6) return false;
    return true;

}
bool con2(string a){
    int n = a.length();
    for(int i = 0; i < n; i++){
        if(a[i]<'0' || a[i]>'z') return false;
        if(a[i]>'9' && a[i]<'A') return false; 
    }
    return true;
}
bool con3(string a){
    int n = a.length();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i]>='0' && a[i]<='9') count++;
    }
    if (count < 2) return false;
    return true;
}

int main(){
	string n;
    cin>>n;
    bool valid = true;
    
    if(con1(n)==false){
        valid = false;
        cout<<"Password must be between 6 and 10 characters"<<endl;
    }
    if(con2(n)==false){
        valid = false;
        cout<<"Password must consist only of letters and digits"<<endl;
    }
    if(con3(n)==false){
        valid = false;
        cout<<"Password must have at least 2 digits"<<endl;
    }
    if(valid==true){
        cout<<"Password is valid";
    }
    
    return 0;
}
