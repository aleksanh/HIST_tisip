//-------------------------------------------------------------------
//
// resultat_moded.cpp
//
// Program for å finne totalresultat fra tre delresultater
// modifisert av alh for å finne ressultatet av 4 del resultater. 
#include <iostream>
using namespace std;
int main() {
	const double strykGrense = 10.0;

	double res1;
	double res2;
	double res3;
	double res4;


	cout << "Skriv 4 resultater mellom 0.0 og 20.0: ";
	cin >> res1 >> res2 >> res3 >> res4;

	double total;     // Totalkarakteren
	total = res1 + res2 + res3 + res4;
	total = total / 4.0;

	cout << "Totalresultatet blir " << total << endl;

	if (total < strykGrense) {
		cout << "Stryk!" << endl;
	}

	return 0;
} // main