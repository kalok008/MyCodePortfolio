#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> input;
    string line;
    getline(cin, line);

    istringstream istr(line);
    int num;
    while (istr >> num){
        input.push_back(num);
    }
    
    while(true){
        string line1;
        getline(cin, line1);
        if(line1 == "end") break;
        
        istringstream istr2(line1);
        string command;
        istr2>>command;
        
        if(command == "Add"){
            
            int a;
            istr2>>a;
            input.push_back(a);
            
        }else if(command == "Remove"){
            
            int number;
            istr2>>number;
            for(int i = 0; i<input.size(); i++){
                if(input[i]==number) input.erase(input.begin()+i);
            }
            
        }else if(command == "RemoveAt"){
            
            int number;
            istr2>>number;
            input.erase(input.begin()+number);
            
        }else{
            
            int number, index;
            istr2>>number>>index;
            input.insert(input.begin()+index, number);
            
        }
    }
    
    for(int num : input){
        cout<<num<<' ';
    }
    
    return 0;
}
