#pragma once
using namespace std;
#include <iostream>
#include <fstream>


/*1. Subprogramul DoiTrei are un parametru, n, prin care primeşte un număr natural (n[0,109]). 
Subprogramul returnează valoarea 1 dacă toate cifrele lui n sunt din mulțimea {2,3} sau valoarea 0 în 
caz contrar. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=22323 sau n=3, atunci subprogramul returnează 1, iar dacă n=2023 atunci 
subprogramul returnează 0*/


int DoiTrei(int n) {

	while (n) {
		if (n % 10 != 2 && n % 10 != 3) {
			return 0;
		}
		n/=10;
	}
	return 1;

}



/*2. Suprafața unui loc de joacă pentru copii este împărțită în n∙n zone de formă pătrată dispuse pe n rânduri 
și n coloane, numerotate de la 1 la n, în fiecare zonă fiind plasat un tobogan, un leagăn, un balansoar 
sau un carusel. Zonelor li se atribuie câte un cod, în funcție de destinație: codul 0 pentru tobogan, codul 
1 pentru leagăn, codul 2 pentru balansoar și codul 3 pentru carusel. 
Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n[1,102]), și cele n∙n
elemente ale unui tablou bidimensional, reprezentând codurile corespunzătoare zonelor din locul de 
joacă, în ordinea parcurgerii lor rând după rând, și a fiecărui rând de la stânga la dreapta.
Programul determină zonele destinate plasării câte unui carusel, care NU au nicio
latură comună cu o zonă cu tobogan și, pentru fiecare dintre acestea, afișează pe 
ecran numărul de ordine al rândului pe care se află. Numerele afișate sunt separate 
prin câte un spațiu, iar dacă nu există nicio astfel de zonă, se afișează pe ecran 
mesajul nu exista.
Exemplu: pentru n=6 și tabloul alăturat se afișează pe ecran, nu neapărat în 
această ordine, numerele: 2 3 3 6.

2 0 0 2 1 3
3 1 3 1 2 0
2 1 3 3 2 0
0 2 1 3 1 1
3 1 2 0 0 2
0 0 0 2 1 3

*/


void citireMatrice(int a[100][100], int n) {

	ifstream f("locJoaca.txt");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			f >> a[i][j];
		}
	}

}


void afisareMatrice(int a[100][100], int n) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

}


bool vecin0(int a[100][100], int i, int j) {

	if (a[i][j + 1] == 0 || a[i][j - 1] == 0 || a[i + 1][j] == 0 || a[i - 1][j] == 0) {
		return true;
	}
	return false;

}


void afisareLinii(int a[100][100], int n) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == 3 && !vecin0(a, i, j)) {
				cout<<i<<' ';
			}
		}
	}

}



void sol2() {

	int a[100][100], n = 6;

	citireMatrice(a, n);

	//afisareMatrice(a, n);

	afisareLinii(a, n);

}


/*3. O pereche de numere naturale (x,y) se numește p-ordonată dacă x și y au paritate diferită, cu x>y, 
sau dacă x și y au aceeași paritate. 
Exemplu: (7,4), (8,7), (7,9) sunt perechi p-ordonate, dar (7,8), (8,9) nu sunt perechi p-ordonate.
Un șir, format din 2∙n numere naturale, se numește p-ordonat dacă perechile de forma (x,y) sunt 
p-ordonate, pentru orice x, dintre primii n termeni ai șirului, și orice y, dintre ultimii n termeni ai șirului.
Fișierul bac.txt conține numere naturale din intervalul [0,106]: pe prima linie un număr nenul, n, iar 
pe a doua linie un șir de 2∙n numere, separate prin câte un spațiu. Se cere să se afișeze pe ecran 
mesajul DA, în cazul în care șirul aflat în fișier este p-ordonat, sau mesajul NU, în caz contrar. Proiectați 
un algoritm eficient din punctul de vedere al timpului de executare și al memoriei utilizate.
Exemplu: dacă fișierul are unul dintre conținuturile de mai jos, se afișează pe ecran mesajul DA.
5
22 37 21 8 15 2 3 14 4 5
sau
5
22 36 20 8 14 44 42 4 2 5*/


void citireVector(int v[], int& n) {

	ifstream f("bac2.txt");
	f >> n;
	for (int i = 0; i < n * 2; i++) {
		f >> v[i];
	}

}


void afisareVector(int v[], int n) {

	for (int i = 0; i < 2 * n; i++) {
		cout << v[i] << ' ';
	}

}


bool pOrdonata(int x, int y) {

	if (x % 2 == 0 && y % 2 == 0) {
		return true;
	}
	else {
		if (x > y) {
			if ((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0)) {
				return true;
			}
		}
	}
	return false;
}


void sol3() {

	int v[100], n;

	citireVector(v, n);

	afisareVector(v, n);





}