#include <iostream>
#include <cstring>
using namespace std;
void ints(){
    int a, b;
    cin>>a>>b;
    if(a>b){
        cout<<a;
    }else{
        cout<<b;
    }
}

void chars(){
    char a, b;
    cin>>a>>b;
    if(a>b){
        cout<<a;
    }else{
        cout<<b;
    }
}

void strings(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if(a>b){
        cout<<a;
    }else{
        cout<<b;
    }
}

int main(){
	string n;
    getline(cin, n);
    switch(n[0]){
        case 'i':
            ints();
            break;
        case 'c':
            chars();
            break;
        case 's':
            strings();
            break;
    }
    
    return 0;
}
