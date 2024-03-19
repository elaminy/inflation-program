#include <iostream>
#include "inflation.h"

using namespace std;

Prices getInput() {
    Prices prices;
    cout << "Enter the current price of the item: ";
    cin >> prices.currentPrice;
    cout << "Enter the price of the item one year ago: ";
    cin >> prices.oneYearAgoPrice;
    cout << "Enter the price of the item two years ago: ";
    cin >> prices.twoYearsAgoPrice;
    return prices;
}

void calculateInflation(const Prices& prices, double& inflationRate1, double& inflationRate2) {
    inflationRate1 = (prices.currentPrice - prices.oneYearAgoPrice) / prices.oneYearAgoPrice;
    inflationRate2 = (prices.oneYearAgoPrice - prices.twoYearsAgoPrice) / prices.twoYearsAgoPrice;
}

void outputResults(double inflationRate1, double inflationRate2) {
    cout << "Inflation rate for the current year: " << inflationRate1 << endl;
    cout << "Inflation rate for the previous year: " << inflationRate2 << endl;

    if (inflationRate1 > inflationRate2) {
        cout << "Inflation trend is increasing." << endl;
    }
    else if (inflationRate1 < inflationRate2) {
        cout << "Inflation trend is decreasing." << endl;
    }
    else {
        cout << "Inflation trend is stable." << endl;
    }
}