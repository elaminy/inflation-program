#pragma once
#ifndef INFLATION_H
#define INFLATION_H

struct Prices {
    double currentPrice;
    double oneYearAgoPrice;
    double twoYearsAgoPrice;
};

Prices getInput();
/* Postcondition: Returns the current price, price one year ago, and price two years ago of an item. */

void calculateInflation(const Prices& prices, double& inflationRate1, double& inflationRate2);
/* Precondition: Takes the prices struct as input.
   Postcondition: Calculates and returns the inflation rates for two successive years via reference parameters. */

void outputResults(double inflationRate1, double inflationRate2);
/* Precondition: Takes the two inflation rates as input.
   Postcondition: Outputs the inflation rates and the inflation trend (increasing or decreasing). */

#endif