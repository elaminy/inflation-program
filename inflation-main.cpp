#include "inflation.h"

/* Program Overview:
   Input: The user provides the current price of an item and its price one year and two years ago.
   Processing: The program calculates the inflation rates for two successive years using the provided functions.
   Output: The program outputs the inflation rates and the inflation trend (increasing or decreasing).
*/

int main() {
    Prices prices = getInput();

    double inflationRate1, inflationRate2;
    calculateInflation(prices, inflationRate1, inflationRate2);

    outputResults(inflationRate1, inflationRate2);

    return 0;
}