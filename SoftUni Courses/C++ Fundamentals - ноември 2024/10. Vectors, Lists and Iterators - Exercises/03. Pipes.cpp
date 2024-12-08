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
    
    vector<int> check1;
    vector<int> check2;
    check1.reserve(n);
    check2.reserve(n);
    
    {   
        string line;
        getline(cin, line);
        istringstream istr(line);
        int pipe;
    
        while(istr >> pipe){
            check1.push_back(pipe);
        }
        
    }
    {   
        string line;
        getline(cin, line);
        istringstream istr(line);
        int pipe;
    
        while(istr >> pipe){
            check2.push_back(pipe);
        }
        
    }
    
    for(int i = 0; i<check1.size(); i++){
        
        int damage = check2[i] - check1[i];
        cout<<check2[i]/damage<<' ';
    }
    return 0;
}
