#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    
    vector<string> products;
    products.reserve(n);
    string buffer;
    

    for(int i = 0; i<n; i++)
    {
        getline(cin, buffer);
        products.push_back(buffer);
        
    }
    
    sort(products.begin(), products.end());
    
    for(int i = 0; i<n; i++){
        cout<<i+1<<'.'<<products[i]<<endl;
    }
    
    return 0;
}
