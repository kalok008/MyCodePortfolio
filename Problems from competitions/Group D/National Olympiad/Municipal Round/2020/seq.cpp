#include <iostream>
#include <vector>
using namespace std;

bool intersects(int l1, int r1, int l2, int r2) {
    return max(l1, l2) <= min(r1, r2);
}

int main() {
    int n;
    cin>>n;

    vector<pair<int, int>> segments(n);

    for(int i = 0; i < n; i++){
        int l, r;
        cin>>l>>r;
        segments[i] = {l, r};
    }

    int maxx = 0;
    
    for(int i = 0; i < n; i++){
        int intersections = 0;
        for(int j = 0; j < n; j++){
            if(i != j && intersects(segments[i].first, segments[i].second, segments[j].first, segments[j].second)){
                intersections++;
            }
        }
        maxx = max(maxIntersections, intersections);
    }

    cout<<maxx;

    return 0;
}
