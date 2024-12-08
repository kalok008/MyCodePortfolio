#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<int> table;
    table.reserve(n);
    
    string line;
    getline(cin, line);
    istringstream istr(line);
    string timex;
    
    while(istr >> timex){
        int number = 0;
        int a = timex[0] - '0';
        int b = timex[1] - '0';
        int c = timex[2] - '0';
        int d = timex[3] - '0';
        number = a*600 + b*60 + c*10 + d;
        table.push_back(number);
    }
    
    string train;
    cin>>train;
    int number;
    int a = train[0] - '0';
    int b = train[1] - '0';
    int c = train[2] - '0';
    int d = train[3] - '0';
    number = a*600 + b*60 + c*10 + d;
    
    int pos = 0;
    int min_diff = 9999;
    
    for(int i = 0; i<table.size(); i++){
        
        int diff;
        diff = number - table[i];
        if(diff<0) diff+=1440;
        
        if(diff<min_diff){
            pos = i;
            min_diff = diff;
        }
    }
    
    cout<<pos+1;
    return 0;
}
