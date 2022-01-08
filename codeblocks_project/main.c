#include "header.h"

void Color(int couleurDuTexte, int couleurDeFond){

    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


void gotoligcol( int lig, int col )
{

// ressources

COORD mycoord;

mycoord.X = col;

mycoord.Y = lig;

SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

void de(Joueur J[],int indice)

{
    //gotoligcol();
    int premierde=0;
    int deuxiemede=0;
    int X=0;
    int lancerdede=0;
    int Correct;
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
    premierde = (rand() % (MAX-MIN + 1)) + MIN;
    deuxiemede = (rand() % (MAX-MIN + 1)) + MIN;
    somme= premierde+deuxiemede;
    printf("Vos des ont ete lance\n");
    printf("Votre premier de affiche la valeur %d\nVotre second de affiche la valeur %d\n",premierde,deuxiemede);
    printf("Vous allez avancer de %d cases\n",somme);
    if(premierde==deuxiemede&&lancerdede!=3)
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
    while(premierde==deuxiemede);


    }


}


int lancerpartie(Joueur J[])
{
int nbjoueur=0;
int indice=0;
/*char president[20];
char president2[20];
char president3[20];
char president4[20];
char president5[20];
char president6[20];
*/
 printf("Rentrez le nombre de joueurs :\n");
 scanf("%d", &nbjoueur);
 while (nbjoueur<2 || nbjoueur>7)
 {
     printf("Veuillez rentrez le nombre de joueurs a nouveau (de 2 a 6 joueurs disponibles): \n");
     scanf("%d",&nbjoueur);
 }
 printf("Rentrez le pseudonyme des joueurs:\n");

 if (nbjoueur==2)
 {
    printf("==>Rentrez le pseudonyme du joueur 1:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("==>Rentrez le pseudonyme du joueur 2:\n");
    scanf("%s", J[indice].pseudo);
    indice=indice+1;
    printf("%s et %s sont nos presidents aujourd'hui !",J[0].pseudo,J[1].pseudo);
 }
 else if (nbjoueur==3)
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
 else if (nbjoueur==4)
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
 else if(nbjoueur==5)
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
 else if (nbjoueur==6)
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
return nbjoueur;
}

void remplissagePseudo(Joueur J[], int nbjoueur){
for (int i =0; i<nbjoueur; i++)
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
gotoligcol(1,1);
printf("%c", 0xC9);
int c=0;
for (c=2; c<7; c++)
{
  gotoligcol(c,1);
  printf("%c", 0xBA);
}
gotoligcol(7,1);
printf("%c", 0xC8);
//Ligne du haut
int d=0;
for (d=2; d<18; d++)
{
  gotoligcol(1,d);
  printf("%c", 0xCD);

}
//Ligne du bas
int b=0;
for (b=2; b<18; b++)
{
  gotoligcol(7,b);
  printf("%c", 0xCD);
}
//Colonne de droite
gotoligcol(1,18);
printf("%c",0xBB);

int a=0;
for (a=2; a<7; a++)
{
  gotoligcol(a,18);
  printf("%c", 0xBA);
}

gotoligcol(7,18);
printf("%c", 0xBC);




//Ligne du haut
int d1=0;
for (d1=18; d1<35; d1++)
{
  gotoligcol(1,d1);
  printf("%c", 0xCD);
}
//Ligne du bas
int b1=0;
for (b1=18; b1<35; b1++)
{
  gotoligcol(7,b1);
  printf("%c", 0xCD);
}

//Colonne de droite
Color(1,0);
gotoligcol(1,35);
printf("%c",0xC9);
int a1=0;
for (a1=2; a1<7; a1++)
{
  gotoligcol(a1,35);
  printf("%c", 0xBA);
}
gotoligcol(7,35);
printf("%c", 0xC8);


//Ligne du haut
int d2=0;

for (d2=36; d2<52; d2++)
{
  gotoligcol(1,d2);
  printf("%c", 0xCD);

}


//Ligne du bas
int b2=0;
for (b2=36; b2<52; b2++)
{
  gotoligcol(7,b2);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,52);
printf("%c",0xBB);

int a2=0;
for (a2=2; a2<7; a2++)
{
  gotoligcol(a2,52);
  printf("%c", 0xBA);
}

gotoligcol(7,52);
printf("%c", 0xBC);


Color(15,0);
//Ligne du haut
int d3=0;
for (d3=53; d3<69; d3++)
{
  gotoligcol(1,d3);
  printf("%c", 0xCD);

}


//Ligne du bas
int b3=0;
for (b3=53; b3<69; b3++)
{
  gotoligcol(7,b3);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,69);
printf("%c",0xBB);

int a3=0;
for (a3=2; a3<7; a3++)
{
  gotoligcol(a3,69);
  printf("%c", 0xBA);
}

gotoligcol(7,69);
printf("%c", 0xBC);



//Ligne du haut
int d4=0;
for (d4=69; d4<86; d4++)
{
  gotoligcol(1,d4);
  printf("%c", 0xCD);

}

//Ligne du bas
int b4=0;
for (b4=69; b4<86; b4++)
{
  gotoligcol(7,b4);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,86);
printf("%c",0xBB);

int a4=0;
for (a4=2; a4<7; a4++)
{
  gotoligcol(a4,86);
  printf("%c", 0xBA);
}

gotoligcol(7,86);
printf("%c", 0xBC);


//Ligne du haut
int d5=0;
for (d5=86; d5<103; d5++)
{
  gotoligcol(1,d5);
  printf("%c", 0xCD);

}

//Ligne du bas
int b5=0;
for (b5=86; b5<103; b5++)
{
  gotoligcol(7,b5);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,103);
printf("%c",0xBB);

int a5=0;
for (a5=2; a5<7; a5++)
{
  gotoligcol(a5,103);
  printf("%c", 0xBA);
}

gotoligcol(7,103);
printf("%c", 0xBC);





//Ligne du haut
int d6=0;
for (d6=103; d6<120; d6++)
{
  gotoligcol(1,d6);
  printf("%c", 0xCD);

}

//Ligne du bas
int b6=0;
for (b6=103; b6<120; b6++)
{
  gotoligcol(7,b6);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,120);
printf("%c",0xBB);

int a6=0;
for (a6=2; a6<7; a6++)
{
  gotoligcol(a6,120);
  printf("%c", 0xBA);
}

gotoligcol(7,120);
printf("%c", 0xBC);



//Ligne du haut
int d7=0;
for (d7=120; d7<137; d7++)
{
  gotoligcol(1,d7);
  printf("%c", 0xCD);

}


//Ligne du bas
int b7=0;
for (b7=120; b7<137; b7++)
{
  gotoligcol(7,b7);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,137);
printf("%c",0xBB);

int a7=0;
for (a7=2; a7<7; a7++)
{
  gotoligcol(a7,137);
  printf("%c", 0xBA);
}

gotoligcol(7,137);
printf("%c", 0xBC);



//Ligne du haut
int d8=0;
for (d8=137; d8<154; d8++)
{
  gotoligcol(1,d8);
  printf("%c", 0xCD);

}

//Ligne du bas
int b8=0;
for (b8=137; b8<154; b8++)
{
  gotoligcol(7,b8);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(1,154);
printf("%c",0xBB);

int a8=0;
for (a8=2; a8<7; a8++)
{
  gotoligcol(a8,154);
  printf("%c", 0xBA);
}

gotoligcol(7,154);
printf("%c", 0xBC);









//Ligne du bas
int e=0;
for (e=138; e<154; e++)
{
  gotoligcol(13,e);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(7,154);
printf("%c",0xBB);

int f=0;
for (f=7; f<13; f++)
{
  gotoligcol(f,154);
  printf("%c", 0xBA);
}

gotoligcol(13,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(7,137);
printf("%c", 0xC9);

int g=0;
for (g=7; g<13; g++)
{
  gotoligcol(g,137);
  printf("%c", 0xBA);
}

gotoligcol(13,137);
printf("%c", 0xC8);

//Ligne du bas
int e1=0;
for (e1=138; e1<154; e1++)
{
  gotoligcol(19,e1);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(13,154);
printf("%c",0xBB);

int f1=0;
for (f1=13; f1<19; f1++)
{
  gotoligcol(f1,154);
  printf("%c", 0xBA);
}

gotoligcol(19,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(13,137);
printf("%c", 0xC9);

int g1=0;
for (g1=13; g1<19; g1++)
{
  gotoligcol(g1,137);
  printf("%c", 0xBA);
}

gotoligcol(19,137);
printf("%c", 0xC8);


//Ligne du bas
int e2=0;
for (e2=138; e2<154; e2++)
{
  gotoligcol(25,e2);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(19,154);
printf("%c",0xBB);

int f2=0;
for (f2=19; f2<25; f2++)
{
  gotoligcol(f2,154);
  printf("%c", 0xBA);
}

gotoligcol(25,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(19,137);
printf("%c", 0xC9);

int g2=0;
for (g2=19; g2<25; g2++)
{
  gotoligcol(g2,137);
  printf("%c", 0xBA);
}

gotoligcol(25,137);
printf("%c", 0xC8);



//Colonne de droite
gotoligcol(25,154);
printf("%c",0xBB);

int f3=0;
for (f3=25; f3<31; f3++)
{
  gotoligcol(f3,154);
  printf("%c", 0xBA);
}

gotoligcol(31,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(25,137);
printf("%c", 0xC9);

int g3=0;
for (g3=25; g3<31; g3++)
{
  gotoligcol(g3,137);
  printf("%c", 0xBA);
}

gotoligcol(31,137);
printf("%c", 0xC8);

Color(4,0);
//Ligne du bas
int e3=0;
for (e3=138; e3<154; e3++)
{
  gotoligcol(31,e3);
  printf("%c", 0xCD);
}
//Ligne du bas
int e4=0;
for (e4=137; e4<154; e4++)
{
  gotoligcol(37,e4);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(31,154);
printf("%c",0xBB);

int f4=0;
for (f4=32; f4<37; f4++)
{
  gotoligcol(f4,154);
  printf("%c", 0xBA);
}

gotoligcol(37,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(31,137);
printf("%c", 0xC9);

int g4=0;
for (g4=32; g4<37; g4++)
{
  gotoligcol(g4,137);
  printf("%c", 0xBA);
}

gotoligcol(37,137);
printf("%c", 0xC8);



Color(15,0);
//Ligne du bas
int e5=0;
for (e5=137; e5<154; e5++)
{
  gotoligcol(43,e5);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(38,154);
printf("%c",0xBB);

int f5=0;
for (f5=38; f5<43; f5++)
{
  gotoligcol(f5,154);
  printf("%c", 0xBA);
}

gotoligcol(43,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(38,137);
printf("%c", 0xC9);

int g5=0;
for (g5=38; g5<43; g5++)
{
  gotoligcol(g5,137);
  printf("%c", 0xBA);
}

gotoligcol(43,137);
printf("%c", 0xC8);


//Ligne du bas
int e6=0;
for (e6=137; e6<154; e6++)
{
  gotoligcol(49,e6);
  printf("%c", 0xCD);
}


//Colonne de droite
gotoligcol(43,154);
printf("%c",0xBB);

int f6=0;
for (f6=43; f6<49; f6++)
{
  gotoligcol(f6,154);
  printf("%c", 0xBA);
}

gotoligcol(49,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(43,137);
printf("%c", 0xC9);

int g6=0;
for (g6=43; g6<49; g6++)
{
  gotoligcol(g6,137);
  printf("%c", 0xBA);
}

gotoligcol(49,137);
printf("%c", 0xC8);


//Ligne du bas
int e7=0;
for (e7=137; e7<154; e7++)
{
  gotoligcol(55,e7);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,154);
printf("%c",0xBB);

int f7=0;
for (f7=49; f7<55; f7++)
{
  gotoligcol(f7,154);
  printf("%c", 0xBA);
}

gotoligcol(55,154);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(49,137);
printf("%c", 0xC9);

int g7=0;
for (g7=49; g7<55; g7++)
{
  gotoligcol(g7,137);
  printf("%c", 0xBA);
}

gotoligcol(55,137);
printf("%c", 0xC8);








//Ligne du bas
int e8=0;
for (e8=2; e8<18; e8++)
{
  gotoligcol(13,e8);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(7,18);
printf("%c",0xBB);

int f8=0;
for (f8=7; f8<13; f8++)
{
  gotoligcol(f8,18);
  printf("%c", 0xBA);
}

gotoligcol(13,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(7,1);
printf("%c", 0xC9);

int g8=0;
for (g8=7; g8<13; g8++)
{
  gotoligcol(g8,1);
  printf("%c", 0xBA);
}

gotoligcol(13,1);
printf("%c", 0xC8);

//Ligne du bas
int e9=0;
for (e9=2; e9<18; e9++)
{
  gotoligcol(19,e9);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(13,18);
printf("%c",0xBB);

int f9=0;
for (f9=13; f9<19; f9++)
{
  gotoligcol(f9,18);
  printf("%c", 0xBA);
}

gotoligcol(19,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(13,1);
printf("%c", 0xC9);

int g9=0;
for (g9=13; g9<19; g9++)
{
  gotoligcol(g9,1);
  printf("%c", 0xBA);
}

gotoligcol(19,1);
printf("%c", 0xC8);


//Ligne du bas
int e10=0;
for (e10=2; e10<18; e10++)
{
  gotoligcol(25,e10);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(19,18);
printf("%c",0xBB);

int f10=0;
for (f10=19; f10<25; f10++)
{
  gotoligcol(f10,18);
  printf("%c", 0xBA);
}

gotoligcol(25,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(19,1);
printf("%c", 0xC9);

int g10=0;
for (g10=19; g10<25; g10++)
{
  gotoligcol(g10,1);
  printf("%c", 0xBA);
}

gotoligcol(25,1);
printf("%c", 0xC8);

//Ligne du bas
int e11=0;
for (e11=2; e11<18; e11++)
{
  gotoligcol(31,e11);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(25,18);
printf("%c",0xBB);

int f11=0;
for (f11=25; f11<31; f11++)
{
  gotoligcol(f11,18);
  printf("%c", 0xBA);
}

gotoligcol(31,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(25,1);
printf("%c", 0xC9);

int g11=0;
for (g11=25; g11<31; g11++)
{
  gotoligcol(g11,1);
  printf("%c", 0xBA);
}

gotoligcol(31,1);
printf("%c", 0xC8);

//Ligne du bas
int e12=0;
Color(4,0);
for (e12=2; e12<18; e12++)
{
  gotoligcol(37,e12);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(31,18);
Color(15,0);
printf("%c",0xBB);

int f12=0;
for (f12=31; f12<37; f12++)
{
  gotoligcol(f12,18);
  printf("%c", 0xBA);
}

//Colonne de gauche
gotoligcol(31,1);
printf("%c", 0xC9);

int g12=0;
for (g12=31; g12<37; g12++)
{
  gotoligcol(g12,1);
  printf("%c", 0xBA);
}

//Ligne du bas
int e13=0;
Color(4,0);
for (e13=2; e13<18; e13++)
{
  gotoligcol(43,e13);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(37,18);
printf("%c",0xBB);

int f13=0;
for (f13=38; f13<43; f13++)
{
  gotoligcol(f13,18);
  printf("%c", 0xBA);
}

gotoligcol(43,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(37,1);
printf("%c", 0xC9);

int g13=0;
for (g13=38; g13<43; g13++)
{
  gotoligcol(g13,1);
  printf("%c", 0xBA);
}

gotoligcol(43,1);
printf("%c", 0xC8);


Color(15,0);
//Ligne du bas
int e14=0;
for (e14=2; e14<18; e14++)
{
  gotoligcol(49,e14);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(44,18);
printf("%c",0xBB);

int f14=0;
for (f14=44; f14<49; f14++)
{
  gotoligcol(f14,18);
  printf("%c", 0xBA);
}

gotoligcol(49,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(44,1);
printf("%c", 0xC9);

int g14=0;
for (g14=44; g14<49; g14++)
{
  gotoligcol(g14,1);
  printf("%c", 0xBA);
}

gotoligcol(49,1);
printf("%c", 0xC8);


//Ligne du bas
int e15=0;
for (e15=2; e15<18; e15++)
{
  gotoligcol(55,e15);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,18);
printf("%c",0xBB);

int f15=0;
for (f15=49; f15<55; f15++)
{
  gotoligcol(f15,18);
  printf("%c", 0xBA);
}

gotoligcol(55,18);
printf("%c", 0xBC);

//Colonne de gauche
gotoligcol(49,1);
printf("%c", 0xC9);

int g15=0;
for (g15=49; g15<55; g15++)
{
  gotoligcol(g15,1);
  printf("%c", 0xBA);
}

gotoligcol(55,1);
printf("%c", 0xC8);





//Ligne du haut
int d9=0;
for (d9=18; d9<35; d9++)
{
  gotoligcol(49,d9);
  printf("%c", 0xCD);

}

//Ligne du bas
int b9=0;
for (b9=18; b9<35; b9++)
{
  gotoligcol(55,b9);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,35);
printf("%c",0xBB);

int a9=0;
for (a9=50; a9<55; a9++)
{
  gotoligcol(a9,35);
  printf("%c", 0xBA);
}

gotoligcol(55,35);
printf("%c", 0xBC);


//Ligne du haut
int d10=0;
for (d10=35; d10<52; d10++)
{
  gotoligcol(49,d10);
  printf("%c", 0xCD);

}

//Ligne du bas
int b10=0;
for (b10=35; b10<52; b10++)
{
  gotoligcol(55,b10);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,52);
printf("%c",0xBB);

int a10=0;
for (a10=50; a10<55; a10++)
{
  gotoligcol(a10,52);
  printf("%c", 0xBA);
}

gotoligcol(55,52);
printf("%c", 0xBC);



//Ligne du haut
int d11=0;
for (d11=52; d11<69; d11++)
{
  gotoligcol(49,d11);
  printf("%c", 0xCD);

}


//Ligne du bas
int b11=0;
for (b11=52; b11<69; b11++)
{
  gotoligcol(55,b11);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,69);
printf("%c",0xBB);

int a11=0;
for (a11=50; a11<55; a11++)
{
  gotoligcol(a11,69);
  printf("%c", 0xBA);
}

gotoligcol(55,69);
printf("%c", 0xBC);



//Ligne du haut
int d12=0;
for (d12=69; d12<86; d12++)
{
  gotoligcol(49,d12);
  printf("%c", 0xCD);

}

//Ligne du bas
int b12=0;
for (b12=69; b12<86; b12++)
{
  gotoligcol(55,b12);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,86);
printf("%c",0xBB);

int a12=0;
for (a12=50; a12<55; a12++)
{
  gotoligcol(a12,86);
  printf("%c", 0xBA);
}

gotoligcol(55,86);
printf("%c", 0xBC);


//Ligne du haut
int d13=0;
for (d13=86; d13<103; d13++)
{
  gotoligcol(49,d13);
  printf("%c", 0xCD);

}

//Ligne du bas
int b13=0;
for (b13=86; b13<103; b13++)
{
  gotoligcol(55,b13);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,103);
printf("%c",0xBB);

int a13=0;
for (a13=50; a13<55; a13++)
{
  gotoligcol(a13,103);
  printf("%c", 0xBA);
}

gotoligcol(55,103);
printf("%c", 0xBC);


//Ligne du haut
int d14=0;
for (d14=103; d14<120; d14++)
{
  gotoligcol(49,d14);
  printf("%c", 0xCD);

}

//Ligne du bas
int b14=0;
for (b14=103; b14<120; b14++)
{
  gotoligcol(55,b14);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(49,120);
printf("%c",0xBB);

int a14=0;
for (a14=50; a14<55; a14++)
{
  gotoligcol(a14,120);
  printf("%c", 0xBA);
}

gotoligcol(55,120);
printf("%c", 0xBC);



//Ligne du haut
int d15=0;
for (d15=120; d15<137; d15++)
{
  gotoligcol(49,d15);
  printf("%c", 0xCD);

}

//Ligne du bas
int b15=0;
for (b15=120; b15<137; b15++)
{
  gotoligcol(55,b15);
  printf("%c", 0xCD);
}


{
Color(0,4);
gotoligcol(6,19);
printf("                ");
gotoligcol(6,53);
printf("                ");
Color(15,4);
gotoligcol(6,23);
printf("LOKOMOTIV");
gotoligcol(6,58);
printf("ZENITH");

Color(15,1);
gotoligcol(6,39);
printf("COMMUNAUTE");

Color(15,0);
gotoligcol(6,93);
printf("ISF");

Color(15,3);
gotoligcol(6,104);
printf("                ");
gotoligcol(6,121);
printf("                ");
Color(15,3);
gotoligcol(6,107);
printf("GALATASARAY");
gotoligcol(6,125);
printf("BESIKTAS");

Color(0,5);
gotoligcol(12,138);
printf("                ");
gotoligcol(18,138);
printf("                ");
gotoligcol(24,138);
printf("                ");
Color(15,5);
gotoligcol(12,141);
printf("SPORTING FC");
gotoligcol(18,142);
printf("BENFICA");
gotoligcol(24,142);
printf("PORTO FC");

Color(15,4);
gotoligcol(36,143);
printf("CHANCE");

Color(15,12);
gotoligcol(42,138);
printf("                ");
gotoligcol(48,138);
printf("                ");
Color(15,12);
gotoligcol(42,143);
printf("LILLE");
gotoligcol(48,143);
printf("PARIS");

Color(15,4);
gotoligcol(50,19);
printf("                ");
gotoligcol(50,36);
printf("                ");
Color(15,4);
gotoligcol(50,23);
printf("JUVENTUS");
gotoligcol(50,41);
printf("INTER");

Color(15,0);
gotoligcol(50,59);
printf("FISC");



Color(0,14);
gotoligcol(50,87);
printf("                ");
gotoligcol(50,104);
printf("                ");
gotoligcol(50,121);
printf("                ");
Color(0,14);
gotoligcol(50,90);
printf("REAL MADRID");
gotoligcol(50,108);
printf("BARCELONE");
gotoligcol(50,125);
printf("ATLETICO");

Color(0,1);
gotoligcol(12,2);
printf("                ");
gotoligcol(18,2);
printf("                ");
gotoligcol(24,2);
printf("                ");
Color(15,1);
gotoligcol(12,6);
printf("LIVERPOOL");
gotoligcol(18,8);
printf("CITY");
gotoligcol(24,7);
printf("CHELSEA");

Color(0,2);
gotoligcol(36,2);
printf("                ");
gotoligcol(48,2);
printf("                ");
Color(15,2);
gotoligcol(36,7);
printf("BAYERN");
gotoligcol(48,6);
printf("DORTMUND");


Color(15,4);
gotoligcol(42,7);
printf("CHANCE");


Color(15,0);
gotoligcol(4,74);
printf("Aeroport");
gotoligcol(5,77);
printf("de");
gotoligcol(6,75);
printf("%c", 0x50);
gotoligcol(6,76);
printf("%c", 0x41);
gotoligcol(6,77);
printf("%c", 0x52);
gotoligcol(6,78);
printf("%c", 0x49);
gotoligcol(6,79);
printf("%c", 0x53);

gotoligcol(50,74);
printf("Aeroport");
gotoligcol(51,77);
printf("de");
gotoligcol(52,75);
printf("%c", 0x4D);
gotoligcol(52,76);
printf("%c", 0x55);
gotoligcol(52,77);
printf("%c", 0x4E);
gotoligcol(52,78);
printf("%c", 0x49);
gotoligcol(52,79);
printf("%c", 0x43);
gotoligcol(52,80);
printf("%c", 0x48);

gotoligcol(28,142);
printf("Aeroport");
gotoligcol(29,145);
printf("de");
gotoligcol(30,144);
printf("%c", 0x52);
gotoligcol(30,145);
printf("%c", 0x4F);
gotoligcol(30,146);
printf("%c", 0x4D);
gotoligcol(30,147);
printf("%c", 0x45);

gotoligcol(28,6);
printf("Aeroport");
gotoligcol(29,9);
printf("de");
gotoligcol(30,7);
printf("%c", 0x4D);
gotoligcol(30,8);
printf("%c", 0x41);
gotoligcol(30,9);
printf("%c", 0x44);
gotoligcol(30,10);
printf("%c", 0x52);
gotoligcol(30,11);
printf("%c", 0x49);
gotoligcol(30,12);
printf("%c", 0x44);



}

//COMMUNAUTE
Color(9,0);
//Colonne de gauche
gotoligcol(12,90);
printf("%c", 0xC9);
int x=0;
for (x=13; x<21; x++)
{
  gotoligcol(x,90);
  printf("%c", 0xBA);
}

gotoligcol(21,90);
printf("%c", 0xC8);

//Ligne du haut
int w=0;
for (w=91; w<122; w++)
{
  gotoligcol(12,w);
  printf("%c", 0xCD);

}

//Ligne du bas
int v=0;
for (v=91; v<122; v++)
{
  gotoligcol(21,v);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(12,122);
printf("%c",0xBB);

int y=0;
for (y=13; y<21; y++)
{
  gotoligcol(y,122);
  printf("%c", 0xBA);
}

gotoligcol(21,122);
printf("%c", 0xBC);

gotoligcol(14,92);
printf("CAISSE DE COMMUNAUTE");



//CHANCE
Color(12,0);
//Colonne de gauche
gotoligcol(34,27);
printf("%c", 0xC9);
int x1=0;
for (x1=35; x1<43; x1++)
{
  gotoligcol(x1,27);
  printf("%c", 0xBA);
}

gotoligcol(43,27);
printf("%c", 0xC8);

//Ligne du haut
int w1=0;
for (w1=28; w1<60; w1++)
{
  gotoligcol(34,w1);
  printf("%c", 0xCD);

}

//Ligne du bas
int v1=0;
for (v1=28; v1<60; v1++)
{
  gotoligcol(43,v1);
  printf("%c", 0xCD);
}

//Colonne de droite
gotoligcol(34,60);
printf("%c",0xBB);

int y1=0;
for (y1=35; y1<43; y1++)
{
  gotoligcol(y1,60);
  printf("%c", 0xBA);
}

gotoligcol(43,60);
printf("%c", 0xBC);
gotoligcol(36,30);
printf("CARTE CHANCE");



Color(15,0);

//DEPART
gotoligcol(4,6);
printf("DEPART");
gotoligcol(4,12);
printf("%c", 0x1A);
int r=0;
for (r=2;r<18;r++)
{
gotoligcol(6,r);
printf("%c",0xB0);
}



//PRISON
gotoligcol(4,143);
printf("PRISON");
int t=0;
for (t=138;t<153;t++)
{
gotoligcol(6,t);
printf("%c",0xB3);
}
int t1=0;
for (t1=138;t1<153;t1++)
{
gotoligcol(2,t1);
printf("%c",0xB3);
}
int t2=0;
for (t2=3;t2<6;t2++)
{
gotoligcol(t2,138);
printf("%c",0xB3);
}
int t3=0;
for (t3=3;t3<6;t3++)
{
gotoligcol(t3,152);
printf("%c",0xB3);
}

}


void deplacement(Joueur J[], int indice, cases tabcase[]){

    de(J, indice);
}

void tirageOrde(Joueur J[], int indice, int nbjoueur)
{
    int tirage;
    printf("ce tirage a ete realise de facon tout a fait aleatoire");
    srand(time(NULL));
    tirage = (rand()%nbjoueur) + 1;
    printf("C'est au ");

}

void bienvenue(Joueur J[]){
    int action=0;
    int nbjoueur;


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
        nbjoueur=lancerpartie(J);
    }
    int tab_pion[nbjoueur];

    printf("\nLes joueurs ont le choix entre six pions:\n");
    printf(" \t '1' : %c , '2' : %c , '3' : %c, '4' : %c ,  '5' : %c, '6' : %c",0x01,0x02,0x03,0x04,0x05,0x06);


    int renvoie;
    char c;

    for(int i=0; i<nbjoueur;i++)
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
    gotoligcol(2,4);
    printf("%c",tab_pion[0]);
    printf("decalage");
    scanf("%d", &deplacement);
//fonction effacer le pion
    deplacement_J_horiz_droite(2,4,17);
    printf("%c",tab_pion[0]);

}

void deplacement_J_horiz_droite(int l,int c, int deplacement)
{
   gotoligcol(l,c+deplacement);
}
void deplacement_J_horiz_gauche(int l,int c, int deplacement)
{
   gotoligcol(l,c-deplacement);
}
void deplacement_J_vert_bas(int l,int c, int deplacement)
{
   gotoligcol(l+deplacement,c);
}
void deplacement_J_vert_haut(int l,int c, int deplacement)
{
   gotoligcol(l-deplacement,c);
}








int main(){

    Joueur J[6];
    int nbjoueur;
    bienvenue(J);
}
