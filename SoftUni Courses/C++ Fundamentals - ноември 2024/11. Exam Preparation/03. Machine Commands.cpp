#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    string buffer;
    cin>>buffer;
    while(buffer != "end"){
        istringstream istr(buffer);
        
        int number;
        while(istr >> number){
            arr.push_back(number);
        }
        
        string command = buffer;

        if(command == "sum"){
            int n = arr.size();
            int a = arr[n-1];
            int b = arr[n-2];
            arr.erase(arr.begin() + n-1);
            arr.erase(arr.begin() + n-2);
            arr.push_back(a+b);
        }else if(command == "subtract"){
            int n = arr.size();
            int a = arr[n-1];
            int b = arr[n-2];
            arr.erase(arr.begin() + n-1);
            arr.erase(arr.begin() + n-2);
            arr.push_back(a-b);
        }else if(command == "concat"){
            int n = arr.size();
            int a = arr[n-1];
            int b = arr[n-2];
            arr.erase(arr.begin() + n-1);
            arr.erase(arr.begin() + n-2);
            
            string strA = to_string(a);
            string strB = to_string(b);
            string concat = strB + strA;
            int result = stoi(concat);
            arr.push_back(result);
        }else if(command == "discard"){
            int n = arr.size();
            arr.erase(arr.begin() + n-1);
        }
        
        cin>>buffer;
    }
    
    for(int num : arr){
        cout<<num<<endl;
    }
    return 0;
}
