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
    int nombreFootballeurBons;
    int nombreFootballeurClasseMondiale;
    int nombreEquipesPossede;
    int cartePrison;
    int carteChance;
    int carteCommunaute;
    int valeur_de;
    int nJoueur;
}Joueur;

enum typeCellule{club, prison, chance, aeroport, tourDuMonde, coupeDEurope};

typedef struct Club{
     bool possede;
     char president; //numéro du joueur président vaut -1 si il n'est pas possédé
     char nom[100];
     int zone[31];

     int prixDuClub;
     int prixFootballeurSimple;
     int prixFootballeurMondial;

     int nFootballeursSimples;
     int nFootballeursMondiaux;

     int loyer;
     int salaire1F;
     int salaire2F;
     int salaire3F;
     int salaire4F;
     int salaireFootballeurMondial;
}Club;

typedef struct Plateau{
    char cellulesPlateau[32];
    Club listeClubs[20];
    char tableCorrespondance[20]; // correspondance des indices des cellules et des clubs
}Plateau;


//Prototypes des Fonctions qu'on utilise dans le main.

void color(int couleurDuTexte,int couleurDeFond);
void affichagePlateau();
int de();
void plateau_monopoleague();
void acheter_joueur();
void acheter_joueur();
bool deplacement_J(Joueur *J);

#endif // HEADERELIAS_H_INCLUDED
