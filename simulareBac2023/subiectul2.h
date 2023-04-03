#pragma once
using namespace std;
#include <iostream>


/*1Scrieţi programul C/C++ corespunzător algoritmului dat.
(10p.)
d. Scrieţi în pseudocod un algoritm, echivalent cu cel dat, 
înlocuind prima structură repetă...până când cu o 
structură de tip pentru...execută. */


void inlocuireCod() {

	int n, x, cn, p, c;
	cin >> n;
	for (x = 5; x > 0; x--) {
		cn = n;
		n = 0;
		p = 1;
		do {
			c = cn % 10;
			if (c == x) {
				c = 5 - c;
			}
			n = c * p + n;
			cn = cn / 10;
			p = p * 10;
		} while (cn != 0);
	}
	cout << n;
}




/*3. Variabilele i şi j sunt de tip întreg, iar variabila a memorează un tablou bidimensional cu 5 linii şi 5
coloane, numerotate de la 1 la 5, având iniţial toate elementele nule.
Fără a utiliza alte variabile decât cele menționate, scrieţi secvenţa de instrucţiuni de mai 
jos, înlocuind punctele de suspensie astfel încât, în urma executării secvenţei obţinute, 
variabila a să memoreze tabloul alăturat.
*/


void functie() {

	int i, j, a[6][6]{};

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (i + j >= 6) {
				a[i][j] = i - 1;
			}
			else {
				a[i][j] = 5 - j;
			}
		}
	}

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}