#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

	// Insert your code here

	double sumArithmeticMean = 0.;
	for (int i = 0; i < n; i++) {
		sumArithmeticMean += vector[i];
	}
	ArithmeticMean = sumArithmeticMean / n;

	double sumHarmonicMean = 0.;
	for (int i = 0; i < n; i++) {
		sumHarmonicMean += (1 / vector[i]);
	}
	HarmonicMean = n / sumHarmonicMean;

	double sumGeometricMean = 1.;
	for (int i = 0; i < n; i++) {
		sumGeometricMean *= vector[i];
	}
	GeometricMean = pow(sumGeometricMean, 1. / n);

	double sumRootMeanSquare = 0.;
	for (int i = 0; i < n; i++) {
		sumRootMeanSquare += pow(vector[i], 2.);
	}
	RootMeanSquare = sqrt(sumRootMeanSquare/n);


	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean = " << HarmonicMean << endl;
	cout << "Geometric Mean = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;
	cout << endl;
	return 0;
}
