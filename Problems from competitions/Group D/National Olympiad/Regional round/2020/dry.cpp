#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, u, v;
    cin>>n>>u>>v;

    vector<int> heights(n);
    for(int i = 0; i < n; i++){
        cin>>heights[i];
    }

    int sum = 0;
    vector<bool> del(n, false);
    vector<int> max_left(n), max_right(n);

    max_left[0] = heights[0];
    for(int i = 1; i < n; i++){
        max_left[i] = max(max_left[i - 1], heights[i]);
    }

    max_right[n - 1] = heights[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        max_right[i] = max(max_right[i + 1], heights[i]);
    }

    for(int i = 1; i < n - 1; i++){
        if(max_left[i - 1] > heights[i] && max_right[i + 1] > heights[i]){
            del[i] = true;
        }
    }

    for(int i = 0; i < n - 1; i++){
        int counter = 1;
        int j = i + 1;

        while(j < n && del[j] == true){
            counter++;
            j++;
        }

        if(j < n){
            int minn = min(heights[i], heights[j]);
            sum += minn * counter * u * v;
        }

        i = j - 1;
    }

    cout<<sum;

    return 0;
}
