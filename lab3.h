#ifndef LAB3_H
#define LAB3_H

#include <stdio.h>
#include <stdlib.h>

double readWinningTime();
double calcMetersPerSecond(const double DISTANCE, double winningTime);
double calcFeetPerSecond(double winningTime);
double calculateKillmeterPerHour(const double DISTANCE, double winningTime, double seconds);
double calcMilesPerHour(double winningTime, double mtomi);
void displayResults(double fps, double kph, double mph, double mps);
void displayTimeToRunMile(double mph);
double calcTime100Yards(double fps);
void displayHundredYardsTime(double hundredYards);


#endif