#include <iostream>
using namespace std;

void staya(string person, int &count);
int main()
{
    string person1;
    string person2;
    string person3;
    string person4;
    int count=0;
 
    cin>>person1;
    cin>>person2;
    cin>>person3;
    cin>>person4;
    
    staya(person1, count);
    staya(person2, count);
    staya(person3, count);
    staya(person4, count);
    cout<<count;
    return 0;
}

void staya(string person, int &count){
    if(person.at(0)=='0'){
        cout<<person.at(1)<<' ';
    }else{
        cout<<person.at(0)<<person.at(1)<<' ';
    }
    if(person.at(4)=='A'){
        count++;
    }
}
