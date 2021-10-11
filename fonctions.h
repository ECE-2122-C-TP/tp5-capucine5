//
// Created by GUY on 06/10/2021.
//
#include <stdio.h>
#include "structures.h"
#ifndef TP5_FONCTIONS_H
#define TP5_FONCTIONS_H
#define NOMBRE_A_AFFICHER 15
#define NOMBRECASES_TABLEAU_EXO2 50

void afficherNombre(NbRatio NR);
NbRatio saisirNombre();
NbRatio multiplierNombresR(NbRatio NR1, NbRatio NR2);
NbRatio additionNombresR(NbRatio NR1, NbRatio NR2);
int pgcd(NbRatio NR);
int nbCasesRempliesTab(int tableau []);
void remplirNCasesTab(int n, int tableau[]);
int plusGrandeValeurCaseTab(int tableau[], int a);


#endif //TP5_FONCTIONS_H
