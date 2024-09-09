#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm> 
using namespace std;

int main() {
    int N;
    cin>>N;
    
    unordered_set<int> favoriteFamilies;
    unordered_set<int> notFavoriteFamilies;
    
    for (int i = 0; i < N; i++) {
        int K, B;
        cin>>K>>B;
        
        vector<int> babies(K);
        for (int j = 0; j < K; j++) {
            cin>>babies[j];
        }
        
        if(B == 1) {
            for (int family : babies) {
                if (notFavoriteFamilies.find(family) == notFavoriteFamilies.end()){
                    favoriteFamilies.insert(family);
                }
            }
        }else{
            for (int family : babies) {
                favoriteFamilies.erase(family);
                notFavoriteFamilies.insert(family);
            }
        }
    }
    
    
    vector<int> result(favoriteFamilies.begin(), favoriteFamilies.end());
    sort(result.begin(), result.end());
    
    if (result.empty()) {
        cout << "0" << endl;
    } else {
        cout << result.size() << endl;
        for (int family : result) {
            cout << family << " ";
        }
        cout << endl;
    }
    
    return 0;
}
