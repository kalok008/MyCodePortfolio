#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    
    string line1;
    string line2;
    getline(cin, line1);
    getline(cin, line2);
    
    stack<int> rail1;
    stack<int> rail2;
    
    {
        istringstream istr(line1);
        int number;
        while(istr>>number) rail1.push(number);
    }
    {
        istringstream istr(line2);
        int number;
        while(istr>>number) rail2.push(number);
    }
    
    vector<int> res;
    while( (!rail1.empty()) && (!rail2.empty()) ){
        int a = rail1.top();
        int b = rail2.top();
        res.push_back(min(a, b));
        if(a<b){
            cout<<'A';
            rail1.pop();
        }else{
            cout<<'B';
            rail2.pop();
        }
    }
    while(!rail1.empty()){
        int a = rail1.top();
        res.push_back(a);
        cout<<'A';
        rail1.pop();
    }
    while(!rail2.empty()){
        int a = rail2.top();
        res.push_back(a);
        cout<<'B';
        rail2.pop();
    }
    
    cout<<endl;
    for(int i = res.size()-1; i>=0; i-- ){
        cout<<res[i]<<' ';
    }
    
    return 0;
}
