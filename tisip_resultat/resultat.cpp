//-------------------------------------------------------------------
//
// resultat.cpp
//
// Program for å finne totalresultat fra tre delresultater
//
#include <iostream>
using namespace std;
int main() {
	const double strykGrense = 10.0;

	double res1;
	double res2;
	double res3;

	cout << "Skriv tre resultater mellom 0.0 og 20.0: ";
	cin >> res1 >> res2 >> res3;

	double total;     // Totalkarakteren
	total = res1 + res2 + res3;
	total = total / 3.0;

	cout << "Totalresultatet blir " << total << endl;

	if (total < strykGrense) {
		cout << "Stryk!" << endl;
	}

	return 0;
} // main