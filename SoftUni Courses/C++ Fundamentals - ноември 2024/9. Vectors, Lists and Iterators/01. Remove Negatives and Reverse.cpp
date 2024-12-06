#include <iostream>
#include <sstream>
#include <list>

using namespace std;

int main() {
    list<int> input;
    string line;
    getline(cin, line);

    istringstream istr(line);
    int num;
    while (istr >> num) {
        if (num > 0) {
            input.push_back(num);
        }
    }

    list<int>::reverse_iterator it;
    if(input.size()>0){
        for (it = input.rbegin(); it != input.rend(); ++it) {
            cout << *it << ' ';
        }
    }else{
        cout<<"empty";
    }
    return 0;
}
