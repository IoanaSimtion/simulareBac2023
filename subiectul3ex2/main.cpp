/**Într-un text de cel mult 100 de caractere cuvintele sunt separate prin câte un spațiu și sunt formate din litere
mari ale alfabetului englez, iar dacă sunt scrise prescurtat sunt urmate de caracterul . (punct). Textul
reprezintă denumirea științifică a unei păsări și doar cuvintele din mulțimea {FAMILIA, GENUL, SPECIA},
specifice sistemului de clasificare a organismelor, sunt mereu prescurtate, prin eliminarea ultimelor lor litere.
Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul precizat și construiește în memorie,
apoi afișează pe ecran denumirea științifică, în care pentru cuvintele specifice sistemului de clasificare a
organismelor se păstrează doar primele trei litere, scrise cu litere mici, și urmate de punct, ca în exemplu.
Exemplu: pentru textul FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO
sau pentru textul FAM. PHASIANIDAE G. MELEAGRIS SPECI. GALLOPAVO
se obține fam. PHASIANIDAE gen. MELEAGRIS spe. GALLOPAVO*/

#include <iostream>

using namespace std;

int main()
{
    text[100]="FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO", s[100]="FAMILIA, GENUL, SPECIA";

    return 0;
}




