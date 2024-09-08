#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left_area = 0, left_perimeter = 0, right_perimeter = 0;

    left_area = arr[0] + 1;
    left_perimeter = left_perimeter + arr[0] + 3;
    if(arr[0]!=9){
        right_perimeter = 9 - arr[0] + 2;
    }
    for (int i = 1; i < n; i++) {

        left_area += arr[i] + 1;
        left_perimeter = left_perimeter + abs(arr[i] - arr[i-1]) + 2;
        if(arr[i]!=9){
            right_perimeter = right_perimeter + abs(arr[i] - arr[i-1]) + 2;
        }else{
            right_perimeter = right_perimeter + abs(arr[i] - arr[i-1]);
        }
    }
    left_perimeter += arr[n- 1] + 1;
    right_perimeter += 9-arr[n-1];
    
    cout<<left_area<<' '<<left_perimeter<<endl;
    cout<<n*10-left_area<<' '<<right_perimeter<<endl;

    return 0;
}
