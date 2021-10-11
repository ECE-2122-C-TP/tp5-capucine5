//
// Created by GUY on 06/10/2021.
//

#include "exercices.h"
#include "fonctions.h"
#include "tableaux.h"
#include "structures.h"
#define NOMBRECASES_TABLEAU_EXO2 50

void exercice1() {
    NbRatio NR1, NR2, NRmult, NRadd;
    int PGCD;
    NR1=saisirNombre();                       //saisie NR1
    NR2=saisirNombre();                       //saisie NR2
    NRmult=multiplierNombresR(NR1, NR2);      // NR1*NR2
    NRadd=additionNombresR(NR1, NR2);         // NR1+NR2
    PGCD=pgcd(NR1);                           // PGCD du numerateur et de denominateur de NR1
    afficherNombre(NRmult);
    afficherNombre(NRadd);
    printf("le pgcd est %i", PGCD);           // on affiche le résultat de la multiplication, de l'addition, et le pgcd
}


void exercice2() {
    int tableauEntiers[NOMBRECASES_TABLEAU_EXO2];
    int a=0, valeurMax=0;
    a=nbCasesRempliesTab(tableauEntiers);                        //on demande a l'utilisateur le nb de cases qu'il veut remplir sur le total de cases possible
    remplirNCasesTab(a,tableauEntiers);                          //remplissage du tableau
    valeurMax=plusGrandeValeurCaseTab(tableauEntiers, a);        //recherche de la plus grande valeur
    printf("La valeur max du tableau est %i", valeurMax);
    return;
}

void exercice3() {
    int tableau1[3][4], tableau2[12], i=0, j=0, k=0, n=0, m=0;
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("Saisissez la valeur de la case de coordonnées : %i , %i", i+1,j+1);     //saisie des valeurs suivant les coordonnées par l'utilisateur
            scanf("%i", &n);
            tableau1[i][j]=n;                                                             // n est la valeur de la case de tableau1 a ces coordonnées
            tableau2[m]=tableau1[i][j];                                                   //on déplace les valeurs du tab 2D vers tab 1D
            m+=1;
        }
    }
    for (k=0; k<12; k++) {
        printf(" %i",tableau2[k]);                                            //afficher chaque valeur du tableau à une dim
    }
    return;
}

