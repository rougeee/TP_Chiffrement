#ifndef EXO1_H
#define EXO1_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAILLE_CHAINE 5000

void saisie(char chaine[TAILLE_CHAINE]);
void DemandeCle(int* cle);
char Chiffrement (char chaine[TAILLE_CHAINE],int* cle,int i);
char Dechiffrement (char chaine[TAILLE_CHAINE],int* cle,int i);
void AnalyserFrequence (int Apparition[26],char chaine[TAILLE_CHAINE],int longueur);
void CalculerCle (int Apparition[26],int* cle);


#endif
