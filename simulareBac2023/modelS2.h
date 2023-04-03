#pragma once
using namespace std;
#include <iostream>
#include <fstream>


/*2. Variabila c, declarată alăturat, permite accesul la datele fiecăreia dintre 
cele trei echipe participante la ultima etapă a unui concurs: numele și 
rezultatul (număr natural din intervalul [0,100]); cele trei echipe au 
rezultate distincte. 

struct echipa
{ char nume[50];
 int rezultat;
};
struct echipa c[3];

Scrieți o secvență de instrucțiuni în urma executării căreia să se afișeze pe ecran, separate prin câte un 
spațiu, numele celor trei echipe, în ordinea descrescătoare a rezultatelor obținute. */


struct Echipa {

	char nume[50];
	int rezultat;

};

void citireEchipe(Echipa echipe[], int n) {

	ifstream f("echipe.txt");
	for (int i = 0; i < n; i++) {
		f >> echipe[i].nume;
		f >> echipe[i].rezultat;
	}

}


void ordonareDesc(Echipa echipe[], int n) {

	bool flag = 0;

	do {

		flag = 1;

		for (int i = 0; i < n - 1; i++) {
			if (echipe[i].rezultat < echipe[i + 1].rezultat) {
				Echipa aux;
				aux = echipe[i];
				echipe[i] = echipe[i + 1];
				echipe[i + 1] = aux;
				flag = 0;
			}
		}

	} while (flag == 0);

}


void afisareDate(Echipa echipe[], int n) {

	for (int i = 0; i < n; i++) {
		cout << echipe[i].nume << ' '; 
		cout << echipe[i].rezultat << endl;
	}

}


void functie() {

	Echipa c[3];

	citireEchipe(c,3);

	ordonareDesc(c, 3);

	afisareDate(c, 3);

}