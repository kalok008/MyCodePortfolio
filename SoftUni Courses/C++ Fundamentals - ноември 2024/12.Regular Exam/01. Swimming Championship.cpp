#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n, targetPoints, swimmersCount;
    double hotelPrice, participationFee;

    // Input section
    cin >> n;                         // Days of the championship
    cin >> targetPoints;              // Points that need to be covered
    cin >> swimmersCount;             // Number of swimmers
    cin >> hotelPrice;                // Hotel room price for one swimmer
    cin >> participationFee;          // Participation fee per swimmer

    vector<double> points(n);         // Points earned each day
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    // Expenses calculation
    double totalHotelCost = n * swimmersCount * hotelPrice; // Total hotel cost
    double totalParticipationFee = swimmersCount * participationFee; // Total participation fee
    double totalExpenses = totalHotelCost + totalParticipationFee;

    // Points calculation
    double totalPoints = 0;
    for (int i = 0; i < n; i++) {
        totalPoints += points[i];  // Add current day's points
        if (i > 0) {               // Add bonus points after the first day
            totalPoints += points[i - 1] * 0.05;
        }
    }

    // Sponsor's coverage based on success
    double sponsorCoverage;
    if (totalPoints >= targetPoints) {
        sponsorCoverage = 0.25 * totalExpenses; // Sponsor covers 25%
    } else {
        sponsorCoverage = 0.10 * totalExpenses; // Sponsor covers 10%
    }

    // Final amount the club needs to pay
    double moneyLeftToPay = totalExpenses - sponsorCoverage;

    // Output section
    cout << fixed << setprecision(2); // Ensure 2 decimal precision
    cout << "Money left to pay: " << moneyLeftToPay << " BGN.\n";
    if (totalPoints >= targetPoints) {
        cout << "The championship was successful!";
    } else {
        cout << "The championship was not successful.";
    }

    return 0;
}
