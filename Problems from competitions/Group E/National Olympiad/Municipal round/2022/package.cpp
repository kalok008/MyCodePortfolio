#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, swap;
    cin>>a>>b>>c>>d>>e;
    if(a>b){
        swap=a;
        a=b;
        b=swap;
    }
    if(a>c){
        swap=a;
        a=c;
        c=swap;
    }
    if(a>d){
        swap=a;
        a=d;
        d=swap;
    }
    if(b>c){
        swap=b;
        b=c;
        c=swap;
    }
    if(b>d){
        swap=b;
        b=d;
        d=swap;
    }
    if(c>d){
        swap=c;
        c=d;
        d=swap;
    }
    
    if(c+d<=e){
        cout<<'1';
    }else if(a+b>e){
        cout<<'4';
    }else if(a+b<=e && b+c<=e){
        cout<<'2';
    }else if(b+c==e && a+d<=e){
        cout<<'2';
    }else{
        cout<<'3';
    }
    return 0;
}
