#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string buffer;
    vector<string> train;
    getline(cin, buffer);
    
    while(buffer != "end"){
        if(buffer != "empty"){
            train.push_back(buffer);
        }else{
            train.push_back(" ");
        }
        getline(cin, buffer);
    }

    string line;
    getline(cin, line);
    while(line != "E"){
        
        istringstream istr(line);
        char command;
        istr>>command;
        
        if(command == 'P'){
            
            cout<<'|';
            for(string wagon : train){
                cout<<wagon<<'|';
            }
            cout<<endl;
            
        }else if(command == 'L'){
            
            int number;
            istr>>number;
            train.erase(train.begin() + number - 1);
            
            cout<<'|';
            for(string wagon : train){
                cout<<wagon<<'|';
            }
            cout<<endl;
            
        }else if(command == 'M'){
            
            int oldpos, newpos;
            istr>>oldpos;
            istr>>newpos;
            
            string wagon = train[oldpos-1];
            if(oldpos>newpos){
                
                train.insert(train.begin() + newpos - 1, wagon);
                train.erase(train.begin() + oldpos);
                
            }else{
                
                train.insert(train.begin() + newpos, wagon);
                train.erase(train.begin() + oldpos - 1);
                
            }
            
            cout<<'|';
            for(string wagon : train){
                cout<<wagon<<'|';
            }
            cout<<endl;
        }
        
        getline(cin, line);
        
    }

    return 0;
}
