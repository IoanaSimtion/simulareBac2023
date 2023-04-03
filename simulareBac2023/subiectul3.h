#pragma once
using namespace std;
#include <iostream>
#include <fstream>


/*1. Subprogramul NrImp are trei parametri:
• x și y, prin care primeşte câte un număr natural (2≤x<y≤109)
• nr, prin care furnizează numărul valorilor naturale din intervalul [x,y] cu trei divizori pozitivi impari. 
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă x=4 și y=50, după apel nr=6 (pentru valorile 9, 18, 25, 36, 49, 50).*/


void NrImp(int x, int y, int& nr) {

	nr = 0;
	for (int i = x; i <= y; i++) {
		int ct = 0;
		for (int d = 1; d <= i; d++) {
			if (i % d == 0 && d % 2 == 1) {
				ct++;
			}
		}
		if (ct == 3) {
			nr++;
		}
	}

}


void solutie1() {

	int nr, x=4, y=50;
	NrImp(x, y, nr);
	cout << nr;

}



/*3. Pentru a studia un metal, s-a urmărit comportamentul său într-o succesiune de pași, la fiecare pas 
metalul fiind supus unei anumite temperaturi. Pașii sunt numerotați cu valori naturale consecutive, 
începând de la 1. Un pas se numește reprezentativ dacă la niciunul dintre pașii anteriori nu este 
utilizată o temperatură strict mai mare decât la acest pas. Dacă există o secvență de pași consecutivi la 
care se utilizează aceeași temperatură, se consideră reprezentativ doar primul pas din secvență.
Fișierul bac.txt conține cel mult 106 numere naturale din intervalul [0,104], separate prin câte un 
spațiu, reprezentând temperaturile la care este supus metalul, în ordinea pașilor corespunzători. Se cere 
să se afișeze pe ecran, separați prin câte un spațiu, pașii reprezentativi pentru datele din fișier. Proiectați 
un algoritm eficient din punctul de vedere al timpului de executare și al spațiului de memorie utilizat.
Exemplu: dacă fișierul conține numerele 7 4 9 10 10 10 3 9 2 10 10 8 2 30
se afișează pe ecran 1 3 4 10 14
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat. */



void solutie3() {

	int v[106], n = 0;

	ifstream f("bac.txt");

	while (!f.eof()) {
		f >> v[n];
		n++;
	}

	for (int i = 0; i < n; i++) {
		int j = i - 1;
		if (v[i] != v[j]) {
			while (j >= 0 && v[i] >= v[j]) {
				j--;
			}
			if (j == -1) {
				cout << i + 1 << ' ';
			}
		}
	}

}