#include <iostream>
using namespace std;

bool leap(int y);
int main()
{
    int d, m, y;
    cin>>d>>m>>y;
    bool vis = leap(y);
    switch(m){
        case 1:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 2:
            if(d<28){
                cout<<d+1<<' '<<m<<' '<<y;
            }else if(d==28 && vis == true){
                cout<<29<<' '<<m<<' '<<y;
            }else if(d==28 && vis == false){
                cout<<1<<' '<<m+1<<' '<<y;
            }
            else if(d==29 && vis == true){
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 3:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 4:
            if(d<30){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 5:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 6:
            if(d<30){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 7:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 8:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 9:
            if(d<30){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 10:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 11:
            if(d<30){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<m+1<<' '<<y;
            }
            break;
        case 12:
            if(d<31){
                cout<<d+1<<' '<<m<<' '<<y;
            }else{
                cout<<1<<' '<<1<<' '<<y+1;
            }
            break;
            
    }
    return 0;
}
bool leap(int y){
    if (y % 400 == 0) {
        return true;
    } else if (y % 100 == 0) {
        return false;
    } else if (y % 4 == 0) {
        return true;
    } else {
        return false;
    }
}
