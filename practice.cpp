#include<bits/stdc++.h>
using namespace std;

int main() {
   #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to store investment details
struct Investment {
    double requiredCapital;
    double profit;
    double ratio;
};

// Comparator function for sorting in descending order of ratio
bool compare(Investment a, Investment b) {
    return a.ratio > b.ratio;
}

int main() {
    double totalCapital = 100000;

    vector<Investment> investments = {
        {5000, 30000, 0},
        {20000, 90000, 0},
        {15000, 60000, 0},
        {30000, 120000, 0},
        {25000, 100000, 0},
        {10000, 45000, 0},
        {8000, 32000, 0},
        {12000, 50000, 0},
        {40000, 160000, 0},
        {6000, 28000, 0}
    };

    // Calculate ratio for each investment
    for (int i = 0; i < investments.size(); i++) {
        investments[i].ratio = investments[i].profit / investments[i].requiredCapital;
    }

    // Sort investments by ratio in descending order
    sort(investments.begin(), investments.end(), compare);

    double totalProfit = 0;

    cout << "Investment Process:\n\n";

    for (int i = 0; i < investments.size(); i++) {
        if (totalCapital == 0)
            break;

        if (investments[i].requiredCapital <= totalCapital) {
            // Full investment
            totalCapital -= investments[i].requiredCapital;
            totalProfit += investments[i].profit;

            cout << "Fully Invested: "
                 << investments[i].requiredCapital
                 << " -> Profit: "
                 << investments[i].profit << endl;
        }
        else {
       
            double fraction = totalCapital / investments[i].requiredCapital;
            double partialProfit = investments[i].profit * fraction;

            totalProfit += partialProfit;

            cout << "Partially Invested: "
                 << totalCapital
                 << " -> Profit: "
                 << partialProfit << endl;

            totalCapital = 0;
        }
    }

    cout << "\nMaximum Profit Earned: " << totalProfit << endl;

    return 0;
}

}
