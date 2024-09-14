#include <iostream>
using namespace std;

int count_5(int num);

int main() {
    int a, b;
    cin>>a>>b;

    int count = 0;
    for (int i = a; i <= b; i++) {
        count += count_5(i);
    }

    cout<<count;

    return 0;
}

int count_5(int num){
    int count = 0;
    while (num % 5 == 0){
        count++;
        num /= 5;
    }
    return count;
}
