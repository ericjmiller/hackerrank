#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	float mealCost;
	float tipPercent;
	float taxPercent;

	cin >> mealCost >> tipPercent >> taxPercent;

	float tip = mealCost * (tipPercent/100);
	float tax = mealCost * (taxPercent/100);
	float totalCost = mealCost + tip + tax;

	cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
	return 0;
}
