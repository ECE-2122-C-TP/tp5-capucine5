//
// Created by GUY on 06/10/2021.
//
#include <stdio.h>
#include "fonctions.h"
#include "structures.h"
#include "tableaux.h"
#include "exercices.h"

void afficherNombre(NbRatio NR) {           //EXO1
printf("%i/%i\n", NR.num, NR.denom);
}

NbRatio saisirNombre() {                   //EXO1
    NbRatio NR;
    printf("Saisissez un num au nb ratio");
    scanf("%i",&NR.num);
    printf("Saisissez un denom au nb ratio");
    scanf("%i", &NR.denom);
    return NR;
}


NbRatio multiplierNombresR(NbRatio NR1, NbRatio NR2) {            //EXO1
    NbRatio NR3;
    NR3.num=NR1.num*NR2.num;
    NR3.denom=NR1.denom*NR2.denom;
    return NR3;
}

NbRatio additionNombresR(NbRatio NR1, NbRatio NR2) {        //EXO1
    NbRatio NR3;
    NR3.num=NR1.num * NR2.denom + NR1.denom * NR2.num;
    NR3.denom=NR1.denom * NR2.denom;
    return NR3;
}

int pgcd(NbRatio NR) {                     //EXO1??
    int a,b,stock,i,LePgcd;
    a=NR.num;
    b=NR.denom;
    if (a<b) {
        stock=a;
        a=b;         // a prend la valeur de b
        b=stock;    //b prend la valeur de a
    }
    for (i=2;i<=a && i<=b; i++) {
        if (a%i==0 && b%i==0) {
            LePgcd=i;
        }
    }
    return LePgcd;
}


int nbCasesRempliesTab(int tableau[]) {          //EXO2
    int n = 0;                                                             //fonction qui demande nb cases qui vont etre remplies
    printf("Saisissez le nombre d'entiers que vous voulez rentrer dans le tableau (au maximum %i)",
           NOMBRECASES_TABLEAU_EXO2);
    scanf(" %i", &n);
    while (n > NOMBRECASES_TABLEAU_EXO2) {
        printf("Ressaisissez un nombre inferieur à %i", NOMBRECASES_TABLEAU_EXO2);       // ce nb sera inf au nombre total de cases (évidemment)
        scanf(" %i", &n);
    }
    return n;
}

void remplirNCasesTab(int n, int tableau[]) {       //void????     //EXO2
    int i=0, m=0;
    for (i=0; i<n; i++) {                                               //fonction remplit n cases du tableau
        printf("Saisissez un entier, valeur de la %i eme case\n", i);
        scanf("%i", &m);
        tableau[i]=m;
    }
}

int plusGrandeValeurCaseTab(int tableau[], int a) {            //EXO2
    int j=0, valeurMax=tableau[0];
    for (j=1; j<a; j++) {                                           //fonction cherche + grande valeur des cases remplies, en comparant chaque
        if (tableau[j]>valeurMax) {                                 // valeur avec la valeurMax, assignée par defaut a la premiere case
            valeurMax=tableau[j];                                   // la valeurMax sera remplacée dès lors qu'une valeur du tableau lui sera supérieure
        }
    }
    return valeurMax;
}

