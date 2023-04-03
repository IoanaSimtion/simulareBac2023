#pragma once
using namespace std;
#include <iostream>
#include <fstream>


/*1. Scrieți un program C/C++ care citește de la tastatură numărul natural n (n[2,50]), apoi n numere 
naturale din intervalul [0,102), elemente ale unui tablou unidimensional. Programul modifică tabloul în 
memorie, înlocuind fiecare element al tabloului care are cifra zecilor în mulțimea {2,3} cu valoarea 23. 
Elementele tabloului obținut sunt afișate pe ecran, separate prin câte un spațiu.
Exemplu: pentru n=11 și tabloul (9,2,20,75,35,20,40,59,23,16,34) se obține tabloul 
(9,2,23,75,23,23,40,59,23,16,23), iar pentru n=4 și tabloul (2,0,2,3) se obține tot (2,0,2,3).*/


void citireVector(int v[], int& n) {

	ifstream f("tablou.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}

}


int cifraZecilor(int nr) {
	return (nr / 10) % 10;
}


void inlocuireElem(int v[], int n) {

	for (int i = 0; i < n; i++) {
		if (cifraZecilor(v[i]) == 2 || cifraZecilor(v[i]) == 3) {
			v[i] = 23;
		}
	}

}


void afisareVector(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}

}


void sol() {

	int n, v[103];

	citireVector(v, n);

	inlocuireElem(v, n);

	afisareVector(v, n);

}