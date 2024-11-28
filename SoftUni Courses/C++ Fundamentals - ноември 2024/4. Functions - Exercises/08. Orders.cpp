#include <iostream>
#include <iomanip>
using namespace std;
double func(string a, int b){
    double price;
     if(a=="coffee"){
        price = 1.5;
     }else if (a=="water"){
        price = 1;
    }else if(a=="coke"){
        price = 1.4;
    }else if(a=="snacks"){
        price = 2;
    }
    
    return b*price;

}

int main(){
	string n;
    cin>>n;
    int a;
    cin>>a;
    cout<<setprecision(2)<<fixed<<func(n, a);
      
    return 0;
}
