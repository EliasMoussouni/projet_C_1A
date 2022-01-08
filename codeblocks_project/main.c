#include "header.h"

int main(){

    Joueur J[6];
    int nJoueur;
    bienvenue(J);
}



void color(int couleurDuTexte, int couleurDeFond){

    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


void goToLigCol( int lig, int col )
{

// ressources

COORD myCoord;

myCoord.X = col;
myCoord.Y = lig;

SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), myCoord );

}

void de(Joueur J[],int indice)

{
    //goToLigCol();
    int premierDe=0;
    int deuxiemeDe=0;
    int X=0;
    int lancerdede=0;
    int correct;
    int somme;
    const int MAX=6, MIN=1;
    srand(time(NULL));
    printf("C'est  a vous de lancer les des %c \n", J[indice].pseudo);

    char reponse;
    do
    {
        printf("Tapez 1 pour lancer les des\n");
        scanf("%c", &reponse);
    }while(reponse!='1');

    if(reponse=='1')
    {
    do
    {
    premierDe = (rand() % (MAX-MIN + 1)) + MIN;
    deuxiemeDe = (rand() % (MAX-MIN + 1)) + MIN;
    somme= premierDe+deuxiemeDe;
    printf("Vos des ont ete lance\n");
    printf("Votre premier de affiche la valeur %d\nVotre second de affiche la valeur %d\n",premierDe,deuxiemeDe);
    printf("Vous allez avancer de %d cases\n",somme);
    if(premierDe==deuxiemeDe&&lancerdede!=3)
    {
    printf("Vos deux des affichent les memes valeurs\nVeuillez relancer vos des\n");
    }
    lancerdede=lancerdede+1;
    printf("Vous avez lance les des %d fois \n",lancerdede);
    if (lancerdede==3)
    {
        printf("Vous avez fait 3 doubles de suite\n");
        printf("Vous allez donc en prison\n");
        break;
    }
    }
    while(premierDe==deuxiemeDe);


    }


}


int lancerpartie(Joueur J[])
{
int nJoueur=0;
int indice=0;
/*char president[20];
char president2[20];
char president3[20];
char president4[20];
char president5[20];
char president6[20];
*/
 printf("Rentrez le nombre de joueurs :\n");
 scanf("%d", &nJoueur);
 while (nJoueur<2 || nJoueur>7)
 {
     printf("Veuillez rentrez le nombre de joueurs a nouveau (de 2 a 6 joueurs disponibles): \n");
     scanf("%d",&nJoueur);
 }
 printf("Rentrez le pseudonyme des joueurs:\n");

 if (nJoueur==2)
 {
    printf("==>Rentrez le pseudonyme du joueur 1:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 2:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("%s et %s sont nos presidents aujourd'hui !",J[0].pseudo,J[1].pseudo);
 }
 else if (nJoueur==3)
 {
    printf("==>Rentrez le pseudonyme du joueur 1:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 2:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 3:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("%s, %s et %s sont nos presidents aujourd'hui !",J[0].pseudo,J[1].pseudo,J[2].pseudo);
 }
 else if (nJoueur==4)
 {
    printf("==>Rentrez le pseudonyme du joueur 1: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 2: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 3: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 4: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("%s, %s, %s et %s sont nos presidents aujourd'hui !",J[0].pseudo,J[1].pseudo,J[2].pseudo,J[3].pseudo);
 }
 else if(nJoueur==5)
 {
    printf("==>Rentrez le pseudonyme du joueur 1: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 2: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 3: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 4: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 5: \n");
    scanf("%s",J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("%s, %s, %s, %s et %s sont nos presidents aujourd'hui !",J[0].pseudo,J[1].pseudo,J[2].pseudo,J[3].pseudo,J[4].pseudo);
 }
 else if (nJoueur==6)
 {
    printf("==>Rentrez le pseudonyme du joueur 1: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 2: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 3: \n");
    scanf("%s", J[indice].pseudo);
    printf("\n");
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 4: \n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 5: \n");
    scanf("%s",J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("==>Rentrez le pseudonyme du joueur 6: \n");
    scanf("%s",J[indice].pseudo);
    indice=indice+1;
    printf("\n");
    printf("\n");
    printf("%s, %s, %s, %s, %s et %s sont nos presidents aujourd'hui !",J[0].pseudo,J[1].pseudo,J[2].pseudo,J[3].pseudo,J[4].pseudo,J[5].pseudo);
 }
return nJoueur;
}

void remplissagePseudo(Joueur J[], int nJoueur){
for (int i =0; i<nJoueur; i++)
{
    printf("a vous de donnez votre pseudo joueur numero %d\n", i+1);
    printf("pseudo : ");
    fflush(stdin);
    gets(J[i].pseudo);
    J[i].argent = 1500; //Met l'argent de base dans le portefeuille de chaque joueur
}
}

void affichagePlateau(){
//Colonne de gauche
goToLigCol(1,1);
printf("%c", 0xC9);
int c=0;
for (c=2; c<7; c++)
{
  goToLigCol(c,1);
  printf("%c", 0xBA);
}
goToLigCol(7,1);
printf("%c", 0xC8);
//Ligne du haut
int d=0;
for (d=2; d<18; d++)
{
  goToLigCol(1,d);
  printf("%c", 0xCD);

}
//Ligne du bas
int b=0;
for (b=2; b<18; b++)
{
  goToLigCol(7,b);
  printf("%c", 0xCD);
}
//Colonne de droite
goToLigCol(1,18);
printf("%c",0xBB);

int a=0;
for (a=2; a<7; a++)
{
  goToLigCol(a,18);
  printf("%c", 0xBA);
}

goToLigCol(7,18);
printf("%c", 0xBC);




//Ligne du haut
int d1=0;
for (d1=18; d1<35; d1++)
{
  goToLigCol(1,d1);
  printf("%c", 0xCD);
}
//Ligne du bas
int b1=0;
for (b1=18; b1<35; b1++)
{
  goToLigCol(7,b1);
  printf("%c", 0xCD);
}

//Colonne de droite
color(1,0);
goToLigCol(1,35);
printf("%c",0xC9);
int a1=0;
for (a1=2; a1<7; a1++)
{
  goToLigCol(a1,35);
  printf("%c", 0xBA);
}
goToLigCol(7,35);
printf("%c", 0xC8);


//Ligne du haut
int d2=0;

for (d2=36; d2<52; d2++)
{
  goToLigCol(1,d2);
  printf("%c", 0xCD);

}


//Ligne du bas
int b2=0;
for (b2=36; b2<52; b2++)
{
  goToLigCol(7,b2);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,52);
printf("%c",0xBB);

int a2=0;
for (a2=2; a2<7; a2++)
{
  goToLigCol(a2,52);
  printf("%c", 0xBA);
}

goToLigCol(7,52);
printf("%c", 0xBC);


color(15,0);
//Ligne du haut
int d3=0;
for (d3=53; d3<69; d3++)
{
  goToLigCol(1,d3);
  printf("%c", 0xCD);

}


//Ligne du bas
int b3=0;
for (b3=53; b3<69; b3++)
{
  goToLigCol(7,b3);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,69);
printf("%c",0xBB);

int a3=0;
for (a3=2; a3<7; a3++)
{
  goToLigCol(a3,69);
  printf("%c", 0xBA);
}

goToLigCol(7,69);
printf("%c", 0xBC);



//Ligne du haut
int d4=0;
for (d4=69; d4<86; d4++)
{
  goToLigCol(1,d4);
  printf("%c", 0xCD);

}

//Ligne du bas
int b4=0;
for (b4=69; b4<86; b4++)
{
  goToLigCol(7,b4);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,86);
printf("%c",0xBB);

int a4=0;
for (a4=2; a4<7; a4++)
{
  goToLigCol(a4,86);
  printf("%c", 0xBA);
}

goToLigCol(7,86);
printf("%c", 0xBC);


//Ligne du haut
int d5=0;
for (d5=86; d5<103; d5++)
{
  goToLigCol(1,d5);
  printf("%c", 0xCD);

}

//Ligne du bas
int b5=0;
for (b5=86; b5<103; b5++)
{
  goToLigCol(7,b5);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,103);
printf("%c",0xBB);

int a5=0;
for (a5=2; a5<7; a5++)
{
  goToLigCol(a5,103);
  printf("%c", 0xBA);
}

goToLigCol(7,103);
printf("%c", 0xBC);





//Ligne du haut
int d6=0;
for (d6=103; d6<120; d6++)
{
  goToLigCol(1,d6);
  printf("%c", 0xCD);

}

//Ligne du bas
int b6=0;
for (b6=103; b6<120; b6++)
{
  goToLigCol(7,b6);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,120);
printf("%c",0xBB);

int a6=0;
for (a6=2; a6<7; a6++)
{
  goToLigCol(a6,120);
  printf("%c", 0xBA);
}

goToLigCol(7,120);
printf("%c", 0xBC);



//Ligne du haut
int d7=0;
for (d7=120; d7<137; d7++)
{
  goToLigCol(1,d7);
  printf("%c", 0xCD);

}


//Ligne du bas
int b7=0;
for (b7=120; b7<137; b7++)
{
  goToLigCol(7,b7);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,137);
printf("%c",0xBB);

int a7=0;
for (a7=2; a7<7; a7++)
{
  goToLigCol(a7,137);
  printf("%c", 0xBA);
}

goToLigCol(7,137);
printf("%c", 0xBC);



//Ligne du haut
int d8=0;
for (d8=137; d8<154; d8++)
{
  goToLigCol(1,d8);
  printf("%c", 0xCD);

}

//Ligne du bas
int b8=0;
for (b8=137; b8<154; b8++)
{
  goToLigCol(7,b8);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(1,154);
printf("%c",0xBB);

int a8=0;
for (a8=2; a8<7; a8++)
{
  goToLigCol(a8,154);
  printf("%c", 0xBA);
}

goToLigCol(7,154);
printf("%c", 0xBC);









//Ligne du bas
int e=0;
for (e=138; e<154; e++)
{
  goToLigCol(13,e);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(7,154);
printf("%c",0xBB);

int f=0;
for (f=7; f<13; f++)
{
  goToLigCol(f,154);
  printf("%c", 0xBA);
}

goToLigCol(13,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(7,137);
printf("%c", 0xC9);

int g=0;
for (g=7; g<13; g++)
{
  goToLigCol(g,137);
  printf("%c", 0xBA);
}

goToLigCol(13,137);
printf("%c", 0xC8);

//Ligne du bas
int e1=0;
for (e1=138; e1<154; e1++)
{
  goToLigCol(19,e1);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(13,154);
printf("%c",0xBB);

int f1=0;
for (f1=13; f1<19; f1++)
{
  goToLigCol(f1,154);
  printf("%c", 0xBA);
}

goToLigCol(19,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(13,137);
printf("%c", 0xC9);

int g1=0;
for (g1=13; g1<19; g1++)
{
  goToLigCol(g1,137);
  printf("%c", 0xBA);
}

goToLigCol(19,137);
printf("%c", 0xC8);


//Ligne du bas
int e2=0;
for (e2=138; e2<154; e2++)
{
  goToLigCol(25,e2);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(19,154);
printf("%c",0xBB);

int f2=0;
for (f2=19; f2<25; f2++)
{
  goToLigCol(f2,154);
  printf("%c", 0xBA);
}

goToLigCol(25,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(19,137);
printf("%c", 0xC9);

int g2=0;
for (g2=19; g2<25; g2++)
{
  goToLigCol(g2,137);
  printf("%c", 0xBA);
}

goToLigCol(25,137);
printf("%c", 0xC8);



//Colonne de droite
goToLigCol(25,154);
printf("%c",0xBB);

int f3=0;
for (f3=25; f3<31; f3++)
{
  goToLigCol(f3,154);
  printf("%c", 0xBA);
}

goToLigCol(31,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(25,137);
printf("%c", 0xC9);

int g3=0;
for (g3=25; g3<31; g3++)
{
  goToLigCol(g3,137);
  printf("%c", 0xBA);
}

goToLigCol(31,137);
printf("%c", 0xC8);

color(4,0);
//Ligne du bas
int e3=0;
for (e3=138; e3<154; e3++)
{
  goToLigCol(31,e3);
  printf("%c", 0xCD);
}
//Ligne du bas
int e4=0;
for (e4=137; e4<154; e4++)
{
  goToLigCol(37,e4);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(31,154);
printf("%c",0xBB);

int f4=0;
for (f4=32; f4<37; f4++)
{
  goToLigCol(f4,154);
  printf("%c", 0xBA);
}

goToLigCol(37,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(31,137);
printf("%c", 0xC9);

int g4=0;
for (g4=32; g4<37; g4++)
{
  goToLigCol(g4,137);
  printf("%c", 0xBA);
}

goToLigCol(37,137);
printf("%c", 0xC8);



color(15,0);
//Ligne du bas
int e5=0;
for (e5=137; e5<154; e5++)
{
  goToLigCol(43,e5);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(38,154);
printf("%c",0xBB);

int f5=0;
for (f5=38; f5<43; f5++)
{
  goToLigCol(f5,154);
  printf("%c", 0xBA);
}

goToLigCol(43,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(38,137);
printf("%c", 0xC9);

int g5=0;
for (g5=38; g5<43; g5++)
{
  goToLigCol(g5,137);
  printf("%c", 0xBA);
}

goToLigCol(43,137);
printf("%c", 0xC8);


//Ligne du bas
int e6=0;
for (e6=137; e6<154; e6++)
{
  goToLigCol(49,e6);
  printf("%c", 0xCD);
}


//Colonne de droite
goToLigCol(43,154);
printf("%c",0xBB);

int f6=0;
for (f6=43; f6<49; f6++)
{
  goToLigCol(f6,154);
  printf("%c", 0xBA);
}

goToLigCol(49,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(43,137);
printf("%c", 0xC9);

int g6=0;
for (g6=43; g6<49; g6++)
{
  goToLigCol(g6,137);
  printf("%c", 0xBA);
}

goToLigCol(49,137);
printf("%c", 0xC8);


//Ligne du bas
int e7=0;
for (e7=137; e7<154; e7++)
{
  goToLigCol(55,e7);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,154);
printf("%c",0xBB);

int f7=0;
for (f7=49; f7<55; f7++)
{
  goToLigCol(f7,154);
  printf("%c", 0xBA);
}

goToLigCol(55,154);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(49,137);
printf("%c", 0xC9);

int g7=0;
for (g7=49; g7<55; g7++)
{
  goToLigCol(g7,137);
  printf("%c", 0xBA);
}

goToLigCol(55,137);
printf("%c", 0xC8);








//Ligne du bas
int e8=0;
for (e8=2; e8<18; e8++)
{
  goToLigCol(13,e8);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(7,18);
printf("%c",0xBB);

int f8=0;
for (f8=7; f8<13; f8++)
{
  goToLigCol(f8,18);
  printf("%c", 0xBA);
}

goToLigCol(13,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(7,1);
printf("%c", 0xC9);

int g8=0;
for (g8=7; g8<13; g8++)
{
  goToLigCol(g8,1);
  printf("%c", 0xBA);
}

goToLigCol(13,1);
printf("%c", 0xC8);

//Ligne du bas
int e9=0;
for (e9=2; e9<18; e9++)
{
  goToLigCol(19,e9);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(13,18);
printf("%c",0xBB);

int f9=0;
for (f9=13; f9<19; f9++)
{
  goToLigCol(f9,18);
  printf("%c", 0xBA);
}

goToLigCol(19,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(13,1);
printf("%c", 0xC9);

int g9=0;
for (g9=13; g9<19; g9++)
{
  goToLigCol(g9,1);
  printf("%c", 0xBA);
}

goToLigCol(19,1);
printf("%c", 0xC8);


//Ligne du bas
int e10=0;
for (e10=2; e10<18; e10++)
{
  goToLigCol(25,e10);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(19,18);
printf("%c",0xBB);

int f10=0;
for (f10=19; f10<25; f10++)
{
  goToLigCol(f10,18);
  printf("%c", 0xBA);
}

goToLigCol(25,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(19,1);
printf("%c", 0xC9);

int g10=0;
for (g10=19; g10<25; g10++)
{
  goToLigCol(g10,1);
  printf("%c", 0xBA);
}

goToLigCol(25,1);
printf("%c", 0xC8);

//Ligne du bas
int e11=0;
for (e11=2; e11<18; e11++)
{
  goToLigCol(31,e11);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(25,18);
printf("%c",0xBB);

int f11=0;
for (f11=25; f11<31; f11++)
{
  goToLigCol(f11,18);
  printf("%c", 0xBA);
}

goToLigCol(31,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(25,1);
printf("%c", 0xC9);

int g11=0;
for (g11=25; g11<31; g11++)
{
  goToLigCol(g11,1);
  printf("%c", 0xBA);
}

goToLigCol(31,1);
printf("%c", 0xC8);

//Ligne du bas
int e12=0;
color(4,0);
for (e12=2; e12<18; e12++)
{
  goToLigCol(37,e12);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(31,18);
color(15,0);
printf("%c",0xBB);

int f12=0;
for (f12=31; f12<37; f12++)
{
  goToLigCol(f12,18);
  printf("%c", 0xBA);
}

//Colonne de gauche
goToLigCol(31,1);
printf("%c", 0xC9);

int g12=0;
for (g12=31; g12<37; g12++)
{
  goToLigCol(g12,1);
  printf("%c", 0xBA);
}

//Ligne du bas
int e13=0;
color(4,0);
for (e13=2; e13<18; e13++)
{
  goToLigCol(43,e13);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(37,18);
printf("%c",0xBB);

int f13=0;
for (f13=38; f13<43; f13++)
{
  goToLigCol(f13,18);
  printf("%c", 0xBA);
}

goToLigCol(43,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(37,1);
printf("%c", 0xC9);

int g13=0;
for (g13=38; g13<43; g13++)
{
  goToLigCol(g13,1);
  printf("%c", 0xBA);
}

goToLigCol(43,1);
printf("%c", 0xC8);


color(15,0);
//Ligne du bas
int e14=0;
for (e14=2; e14<18; e14++)
{
  goToLigCol(49,e14);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(44,18);
printf("%c",0xBB);

int f14=0;
for (f14=44; f14<49; f14++)
{
  goToLigCol(f14,18);
  printf("%c", 0xBA);
}

goToLigCol(49,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(44,1);
printf("%c", 0xC9);

int g14=0;
for (g14=44; g14<49; g14++)
{
  goToLigCol(g14,1);
  printf("%c", 0xBA);
}

goToLigCol(49,1);
printf("%c", 0xC8);


//Ligne du bas
int e15=0;
for (e15=2; e15<18; e15++)
{
  goToLigCol(55,e15);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,18);
printf("%c",0xBB);

int f15=0;
for (f15=49; f15<55; f15++)
{
  goToLigCol(f15,18);
  printf("%c", 0xBA);
}

goToLigCol(55,18);
printf("%c", 0xBC);

//Colonne de gauche
goToLigCol(49,1);
printf("%c", 0xC9);

int g15=0;
for (g15=49; g15<55; g15++)
{
  goToLigCol(g15,1);
  printf("%c", 0xBA);
}

goToLigCol(55,1);
printf("%c", 0xC8);





//Ligne du haut
int d9=0;
for (d9=18; d9<35; d9++)
{
  goToLigCol(49,d9);
  printf("%c", 0xCD);

}

//Ligne du bas
int b9=0;
for (b9=18; b9<35; b9++)
{
  goToLigCol(55,b9);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,35);
printf("%c",0xBB);

int a9=0;
for (a9=50; a9<55; a9++)
{
  goToLigCol(a9,35);
  printf("%c", 0xBA);
}

goToLigCol(55,35);
printf("%c", 0xBC);


//Ligne du haut
int d10=0;
for (d10=35; d10<52; d10++)
{
  goToLigCol(49,d10);
  printf("%c", 0xCD);

}

//Ligne du bas
int b10=0;
for (b10=35; b10<52; b10++)
{
  goToLigCol(55,b10);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,52);
printf("%c",0xBB);

int a10=0;
for (a10=50; a10<55; a10++)
{
  goToLigCol(a10,52);
  printf("%c", 0xBA);
}

goToLigCol(55,52);
printf("%c", 0xBC);



//Ligne du haut
int d11=0;
for (d11=52; d11<69; d11++)
{
  goToLigCol(49,d11);
  printf("%c", 0xCD);

}


//Ligne du bas
int b11=0;
for (b11=52; b11<69; b11++)
{
  goToLigCol(55,b11);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,69);
printf("%c",0xBB);

int a11=0;
for (a11=50; a11<55; a11++)
{
  goToLigCol(a11,69);
  printf("%c", 0xBA);
}

goToLigCol(55,69);
printf("%c", 0xBC);



//Ligne du haut
int d12=0;
for (d12=69; d12<86; d12++)
{
  goToLigCol(49,d12);
  printf("%c", 0xCD);

}

//Ligne du bas
int b12=0;
for (b12=69; b12<86; b12++)
{
  goToLigCol(55,b12);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,86);
printf("%c",0xBB);

int a12=0;
for (a12=50; a12<55; a12++)
{
  goToLigCol(a12,86);
  printf("%c", 0xBA);
}

goToLigCol(55,86);
printf("%c", 0xBC);


//Ligne du haut
int d13=0;
for (d13=86; d13<103; d13++)
{
  goToLigCol(49,d13);
  printf("%c", 0xCD);

}

//Ligne du bas
int b13=0;
for (b13=86; b13<103; b13++)
{
  goToLigCol(55,b13);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,103);
printf("%c",0xBB);

int a13=0;
for (a13=50; a13<55; a13++)
{
  goToLigCol(a13,103);
  printf("%c", 0xBA);
}

goToLigCol(55,103);
printf("%c", 0xBC);


//Ligne du haut
int d14=0;
for (d14=103; d14<120; d14++)
{
  goToLigCol(49,d14);
  printf("%c", 0xCD);

}

//Ligne du bas
int b14=0;
for (b14=103; b14<120; b14++)
{
  goToLigCol(55,b14);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(49,120);
printf("%c",0xBB);

int a14=0;
for (a14=50; a14<55; a14++)
{
  goToLigCol(a14,120);
  printf("%c", 0xBA);
}

goToLigCol(55,120);
printf("%c", 0xBC);



//Ligne du haut
int d15=0;
for (d15=120; d15<137; d15++)
{
  goToLigCol(49,d15);
  printf("%c", 0xCD);

}

//Ligne du bas
int b15=0;
for (b15=120; b15<137; b15++)
{
  goToLigCol(55,b15);
  printf("%c", 0xCD);
}


{
color(0,4);
goToLigCol(6,19);
printf("                ");
goToLigCol(6,53);
printf("                ");
color(15,4);
goToLigCol(6,23);
printf("LOKOMOTIV");
goToLigCol(6,58);
printf("ZENITH");

color(15,1);
goToLigCol(6,39);
printf("COMMUNAUTE");

color(15,0);
goToLigCol(6,93);
printf("ISF");

color(15,3);
goToLigCol(6,104);
printf("                ");
goToLigCol(6,121);
printf("                ");
color(15,3);
goToLigCol(6,107);
printf("GALATASARAY");
goToLigCol(6,125);
printf("BESIKTAS");

color(0,5);
goToLigCol(12,138);
printf("                ");
goToLigCol(18,138);
printf("                ");
goToLigCol(24,138);
printf("                ");
color(15,5);
goToLigCol(12,141);
printf("SPORTING FC");
goToLigCol(18,142);
printf("BENFICA");
goToLigCol(24,142);
printf("PORTO FC");

color(15,4);
goToLigCol(36,143);
printf("CHANCE");

color(15,12);
goToLigCol(42,138);
printf("                ");
goToLigCol(48,138);
printf("                ");
color(15,12);
goToLigCol(42,143);
printf("LILLE");
goToLigCol(48,143);
printf("PARIS");

color(15,4);
goToLigCol(50,19);
printf("                ");
goToLigCol(50,36);
printf("                ");
color(15,4);
goToLigCol(50,23);
printf("JUVENTUS");
goToLigCol(50,41);
printf("INTER");

color(15,0);
goToLigCol(50,59);
printf("FISC");



color(0,14);
goToLigCol(50,87);
printf("                ");
goToLigCol(50,104);
printf("                ");
goToLigCol(50,121);
printf("                ");
color(0,14);
goToLigCol(50,90);
printf("REAL MADRID");
goToLigCol(50,108);
printf("BARCELONE");
goToLigCol(50,125);
printf("ATLETICO");

color(0,1);
goToLigCol(12,2);
printf("                ");
goToLigCol(18,2);
printf("                ");
goToLigCol(24,2);
printf("                ");
color(15,1);
goToLigCol(12,6);
printf("LIVERPOOL");
goToLigCol(18,8);
printf("CITY");
goToLigCol(24,7);
printf("CHELSEA");

color(0,2);
goToLigCol(36,2);
printf("                ");
goToLigCol(48,2);
printf("                ");
color(15,2);
goToLigCol(36,7);
printf("BAYERN");
goToLigCol(48,6);
printf("DORTMUND");


color(15,4);
goToLigCol(42,7);
printf("CHANCE");


color(15,0);
goToLigCol(4,74);
printf("Aeroport");
goToLigCol(5,77);
printf("de");
goToLigCol(6,75);
printf("%c", 0x50);
goToLigCol(6,76);
printf("%c", 0x41);
goToLigCol(6,77);
printf("%c", 0x52);
goToLigCol(6,78);
printf("%c", 0x49);
goToLigCol(6,79);
printf("%c", 0x53);

goToLigCol(50,74);
printf("Aeroport");
goToLigCol(51,77);
printf("de");
goToLigCol(52,75);
printf("%c", 0x4D);
goToLigCol(52,76);
printf("%c", 0x55);
goToLigCol(52,77);
printf("%c", 0x4E);
goToLigCol(52,78);
printf("%c", 0x49);
goToLigCol(52,79);
printf("%c", 0x43);
goToLigCol(52,80);
printf("%c", 0x48);

goToLigCol(28,142);
printf("Aeroport");
goToLigCol(29,145);
printf("de");
goToLigCol(30,144);
printf("%c", 0x52);
goToLigCol(30,145);
printf("%c", 0x4F);
goToLigCol(30,146);
printf("%c", 0x4D);
goToLigCol(30,147);
printf("%c", 0x45);

goToLigCol(28,6);
printf("Aeroport");
goToLigCol(29,9);
printf("de");
goToLigCol(30,7);
printf("%c", 0x4D);
goToLigCol(30,8);
printf("%c", 0x41);
goToLigCol(30,9);
printf("%c", 0x44);
goToLigCol(30,10);
printf("%c", 0x52);
goToLigCol(30,11);
printf("%c", 0x49);
goToLigCol(30,12);
printf("%c", 0x44);



}

//COMMUNAUTE
color(9,0);
//Colonne de gauche
goToLigCol(12,90);
printf("%c", 0xC9);
int x=0;
for (x=13; x<21; x++)
{
  goToLigCol(x,90);
  printf("%c", 0xBA);
}

goToLigCol(21,90);
printf("%c", 0xC8);

//Ligne du haut
int w=0;
for (w=91; w<122; w++)
{
  goToLigCol(12,w);
  printf("%c", 0xCD);

}

//Ligne du bas
int v=0;
for (v=91; v<122; v++)
{
  goToLigCol(21,v);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(12,122);
printf("%c",0xBB);

int y=0;
for (y=13; y<21; y++)
{
  goToLigCol(y,122);
  printf("%c", 0xBA);
}

goToLigCol(21,122);
printf("%c", 0xBC);

goToLigCol(14,92);
printf("CAISSE DE COMMUNAUTE");



//CHANCE
color(12,0);
//Colonne de gauche
goToLigCol(34,27);
printf("%c", 0xC9);
int x1=0;
for (x1=35; x1<43; x1++)
{
  goToLigCol(x1,27);
  printf("%c", 0xBA);
}

goToLigCol(43,27);
printf("%c", 0xC8);

//Ligne du haut
int w1=0;
for (w1=28; w1<60; w1++)
{
  goToLigCol(34,w1);
  printf("%c", 0xCD);

}

//Ligne du bas
int v1=0;
for (v1=28; v1<60; v1++)
{
  goToLigCol(43,v1);
  printf("%c", 0xCD);
}

//Colonne de droite
goToLigCol(34,60);
printf("%c",0xBB);

int y1=0;
for (y1=35; y1<43; y1++)
{
  goToLigCol(y1,60);
  printf("%c", 0xBA);
}

goToLigCol(43,60);
printf("%c", 0xBC);
goToLigCol(36,30);
printf("CARTE CHANCE");



color(15,0);

//DEPART
goToLigCol(4,6);
printf("DEPART");
goToLigCol(4,12);
printf("%c", 0x1A);
int r=0;
for (r=2;r<18;r++)
{
goToLigCol(6,r);
printf("%c",0xB0);
}



//PRISON
goToLigCol(4,143);
printf("PRISON");
int t=0;
for (t=138;t<153;t++)
{
goToLigCol(6,t);
printf("%c",0xB3);
}
int t1=0;
for (t1=138;t1<153;t1++)
{
goToLigCol(2,t1);
printf("%c",0xB3);
}
int t2=0;
for (t2=3;t2<6;t2++)
{
goToLigCol(t2,138);
printf("%c",0xB3);
}
int t3=0;
for (t3=3;t3<6;t3++)
{
goToLigCol(t3,152);
printf("%c",0xB3);
}

}


void deplacement(Joueur J[], int indice, cases tabcase[]){

    de(J, indice);
}

void tirageOrde(Joueur J[], int indice, int nJoueur)
{
    int tirage;
    printf("ce tirage a ete realise de facon tout a fait aleatoire");
    srand(time(NULL));
    tirage = (rand()%nJoueur) + 1;
    printf("C'est au ");

}

void bienvenue(Joueur J[]){
    int action=0;
    int nJoueur;


    printf("============ \n");
    printf("     BIENVENUE DANS LE MENU DU JEU MONOPOLEAGUE    \n \n \n");
    printf("Que voulez vous faire ?\n \n \n");
    printf("1. Lancer une nouvelle partie de jeu \n");
    printf("2. Sauvegarder la partie en cours \n");
    printf("3. Charger une partie deja existante \n");
    printf("4. Afficher les regles du jeu MonopoLeague \n");
    printf("5. Quitter le Jeu \n");
    printf("6. Afficher le nom des joueurs \n");
    printf("============ \n");
    printf("Rentrez le numero de l'action que vous voulez effectuer:\n");
    scanf("%d",&action);
    while (action<1 || action>6)
    {
    printf("Vous n'avez pas entre un bon numero, recommencez je vous prie. \n");
    scanf("%d",&action);
    }
    if (action==1)
    {
        nJoueur=lancerpartie(J);
    }
    int tab_pion[nJoueur];

    printf("\nLes joueurs ont le choix entre six pions:\n");
    printf(" \t '1' : %c , '2' : %c , '3' : %c, '4' : %c ,  '5' : %c, '6' : %c",0x01,0x02,0x03,0x04,0x05,0x06);


    int renvoie;
    char c;

    for(int i=0; i<nJoueur;i++)
    {
        printf("\n%s choisissez un numero de pion :",J[i].pseudo);
        scanf("%d", &tab_pion[i]);

        if(tab_pion[i]== 1)
        {
            printf("\n%s a choisi le pion :%c",J[i].pseudo,0x01);
        }else if(tab_pion[i] == 2){
             printf("\n%s a choisi le pion :%c",J[i].pseudo,0x02);
        }else if(tab_pion[i] == 3){
             printf("\n%s a choisi le pion :%c",J[i].pseudo,0x03);
        }else if(tab_pion[i] == 4){
             printf("\n%s a choisi le pion :%c",J[i].pseudo,0x04);
        }else if(tab_pion[i] == 5){
             printf("\n%s a choisi le pion :%c",J[i].pseudo,0x05);
        }else if(tab_pion[i] == 6){
             printf("\n%s a choisi le pion :%c",J[i].pseudo,0x06);
        }
    }


    int continuer;
    printf("\nPour continuer tapez sur 1 :\n");
    scanf("%d", &continuer);

    if (continuer == 1)
    {
        system("cls");
    }
    /*
    else if (action==2)
    {
        saveparty();
    }
    else if (action==3)
    {
        chargeparty();
    }
    else if (action==4)
    {
        afficherregle();
    }
    else if (action==5)
    {
        quitterlejeu();
    }
    else if (action==6)
    {
        afficherProjet();
    }

     */
     system("cls");


    //int quitter_jeu = 0;


     affichagePlateau();

    int deplacement;
    goToLigCol(2,4);
    printf("%c",tab_pion[0]);
    printf("decalage");
    scanf("%d", &deplacement);
//fonction effacer le pion
    deplacementJHorizDroite(2,4,17);
    printf("%c",tab_pion[0]);

}

void deplacementJHorizDroite(int l,int c, int deplacement)
{
   goToLigCol(l,c+deplacement);
}
void deplacementJHorizGauche(int l,int c, int deplacement)
{
   goToLigCol(l,c-deplacement);
}
void deplacementJVersBas(int l,int c, int deplacement)
{
   goToLigCol(l+deplacement,c);
}
void deplacementJVersHaut(int l,int c, int deplacement)
{
   goToLigCol(l-deplacement,c);
}








