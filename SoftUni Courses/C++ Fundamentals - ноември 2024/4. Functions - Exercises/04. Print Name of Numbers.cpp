#include <iostream>
using namespace std;
string number(int a){
    switch(a){
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";    
        case 3: return "three";    
        case 4: return "four";    
        case 5: return "five";    
        case 6: return "six";    
        case 7: return "seven";    
        case 8: return "eight";    
        case 9: return "nine";    
    }
    return "invalid";
}
string decimal(int a){
    switch(a){
        case 2: return "twenty";    
        case 3: return "thirty";    
        case 4: return "forty";    
        case 5: return "fifty";    
        case 6: return "sixty";    
        case 7: return "seventy";    
        case 8: return "eighty";    
        case 9: return "ninety";    
    }
    return "invalid";
}
string teen(int a){
    switch(a){
        case 0: return "ten";
        case 1: return "eleven";
        case 2: return "twelve";    
        case 3: return "thirteen";    
        case 4: return "fourteen";    
        case 5: return "fifteen";    
        case 6: return "sixteen";    
        case 7: return "seventeen";    
        case 8: return "eighteen";    
        case 9: return "nineteen";    
    }
    return "invalid";
}
int main(){
	int n;
    cin>>n;
    int a = n % 10;
    int b = (n/10) % 10;
    int c = (n/100) % 10;
    int d = n/1000;
    
    if(d){
        cout<<number(d)<<" thousand ";
    }
    if(c){
        cout<<number(c)<<" hundred ";
    }
    if(b>1){
        cout<<decimal(b)<<' ';
    }
    if(b==1){
        cout<<teen(a);
    }else{
        if(a)
        cout<<number(a);
    }
	
return 0;
}
