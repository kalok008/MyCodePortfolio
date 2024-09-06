#include <iostream>
using namespace std;

int main() {
    int n, t, f, x;
    cin >> n >> t >> f >> x;

    int total_time_available = t * 60;

    int time_spent_first_hour = 60;
    ;
    int time_needed_remaining_problems = (n-f) * x;
    int total_time_needed = time_spent_first_hour + time_needed_remaining_problems;
    int solved_problems = (total_time_available - 60)/x;
    int remaining_problems = n - f -solved_problems;
    

    if (total_time_needed < total_time_available) {
        cout << "YES" << endl;
        cout << total_time_available - total_time_needed << endl;
        
    } else if (total_time_needed == total_time_available) {
        cout << "EXACT!" << endl;
        
    } else {
        cout << "NO" << endl;
        cout << total_time_needed - total_time_available << endl;
        cout << remaining_problems;
    }

    return 0;
}
