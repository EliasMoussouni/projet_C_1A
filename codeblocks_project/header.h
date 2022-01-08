#ifndef HEADERELIAS_H_INCLUDED
#define HEADERELIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

//Structure de Joueur et des cases du plateau.
typedef struct structure_de_joueur
{
    char pseudo[100];
    int pion;
    int ligne;
    int colonne;
    int argent;
    int indice;
    int nombreFootballerBons;
    int nombreFootballerClasseMondiale;
    int nombreEquipesPossede;
    int CartePrison;
    int CarteChance;
    int CarteCommunaute;
    int valeur_de;
    int nbJoueur;
} Joueur;

typedef struct tableau_de_cases {
 char nom[100];
 int zone[31];
 int plateau_monopoly;
 int Plateau;
 int salaire;
 int loyer;
 int salaire1J;
 int salaire2J;
 int salaire3J;
 int salaire4J;
 int salaire1JM;
 int salaireJoueur;
 int salaireJoueurMondial;
 int president;
 bool aeroport;
 bool achat;
 bool club;
 }cases;

//Prototypes des Fonctions qu'on utilise dans le main.

void Color(int couleurDuTexte,int couleurDeFond);
void affichagePlateau();
void de(Joueur J[],int indice);
void plateau_monopoleague();

#endif // HEADERELIAS_H_INCLUDED