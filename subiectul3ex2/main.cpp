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
#include <string.h>

using namespace std;

int main()
{
    char text[101]="FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO", s[100]="FAMILIA, GENUL, SPECIA", categ[4];
    char *categorie;
    char textNou[101]="";
    categorie=strtok(text,". ");
    while(categorie!=NULL){
        if(strstr(s,categorie)){
            strncpy(categ,strstr(s,categorie),3);
            for(int i=0;i<3;i++){
                if(isupper(categ[i])){
                    categ[i]=tolower(categ[i]);
                    //cout<<categ[i]<<' ';
                }

            }
            strcat(textNou,categ);
            strcat(textNou,". ");

        }
        else{
            strcat(textNou,categorie);
            strcat(textNou," ");
        }

        categorie=strtok(NULL,". ");
    }
    cout<<endl;
    cout<<textNou;
    return 0;
}




