//Author : Simon Cuany  /   Date of creation : 07.03.2019   /   Title : Bataille Navale
#include <stdio.h>
#include <windows.h>

#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center
#define SIZE 10
#define coule 254
#define aleau 42
#define touche 79

int TableauAide[10][10] = {{0, 0, 0, 0, 0,  0, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0,  0, 254, 254, 254,  0},
                       {88, 0, 0,  0,  0,  0, 0, 0, 0,  0},
                       {0,  0, 42,  0,  0,  0, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0, 0, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0,  42, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0,  0, 0, 0, 79,  0},
                       {0,  0, 0,  0,  0,  0, 0, 0, 79, 0},
                       {0,  42, 0,  42,  0,  0, 0, 0, 79,  0},
                       {0,  0, 0,  0,  0,  0, 0, 0, 0,  0}};

int Tableau[10][10] = {{0, 0, 0, 0, 0,  0, 0, 0, 0,  0},                            //Modèle à l'eau : ≈ ascii : 42
                       {0,  0, 0,  0,  0,  0, 254, 254, 254,  0},                   //Modèle touché  : O ascii : 79
                       {88, 0, 0,  0,  0,  0, 0, 0, 0,  0},                         //Modèle coulé   : ■ ascii : 254
                       {0,  0, 42,  0,  0,  0, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0, 0, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0,  42, 0, 0, 0,  0},
                       {0,  0, 0,  0,  0,  0, 0, 0, 79,  0},
                       {0,  0, 0,  0,  0,  0, 0, 0, 79, 0},
                       {0,  42, 0,  42,  0,  0, 0, 0, 79,  0},
                       {0,  0, 0,  0,  0,  0, 0, 0, 0,  0}};
int ligne = 0;
int Colonne = 0;

void TopBorder(int cote) {          //Top Border fonction
    printf ("    ");
    for (int i = 0; i < cote; i++) {         //Incremented letters
        printf ("%c   ", 'A' + i);
    }
    printf ("\n");
    printf ("  %c", STLC);                                //┌───┬───┬───┬───┐
    for (int i = 0; i <= cote - 2; i++) {
        printf ("%c%c%c%c", SHSB, SHSB, SHSB, SHTB);
    }
    printf ("%c%c%c%c", SHSB, SHSB, SHSB, STRC);
    printf ("\n");

}


void VerticalBorder(int cote, int num) {//Vertical Border fonction
    printf ("%d %c", num, SVSB);
    for (int i = 0; i <= cote - 2; i++) {            // │ X │   │   │   │
        printf (" %c %c", Tableau[Colonne][ligne], SVSB);
        ligne++;


    }
    printf (" %c %c", Tableau[Colonne][ligne], SVSB);

    Colonne++;
    ligne = 0;

    printf ("\n");
}


void MiddleBorder(int cote) {                        //Middle Border fontion
    printf ("  %c", SVLB);                             //├───┼───┼───┼───┤
    for (int i = 0; i <= cote - 2; i++) {
        printf ("%c%c%c%c", SHSB, SHSB, SHSB, SC);
    }
    printf ("%c%c%c%c", SHSB, SHSB, SHSB, SVRB);
    printf ("\n");
}

void BottomBorder(int cote) {
    printf ("  %c", SBLC);                             //└───┴───┴───┴───┴───┴──┘
    for (int i = 0; i <= cote - 2; i++) {
        printf ("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf ("%c%c%c%c", SHSB, SHSB, SHSB, SBRC);
    printf ("\n");
}

void grille() {

    for (int j = 0; j < SIZE; j++) {
        if (j == 0) {
            TopBorder (SIZE);
        } else {
            MiddleBorder (SIZE);
        }
        VerticalBorder (SIZE, j);
    }
    BottomBorder (SIZE);

}


int main() {


    int choix;
    printf ("\n----BIENVENUE DANS LE JEU BATAILLE NAVALE----\n\n");
    printf ("                   __/___            \n"
            "             _____/______|           \n"
            "     _______/_____\\_______\\_____     \n"
            "     \\              < < <       |    \n"
            "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf ("1. Jouer\n");
    printf ("2. aide\n");
    printf ("3. credits\n");
    printf ("4. personnalisation\n");
    printf ("5. Quitter\n\n\n");
    scanf ("%d", &choix);


    while (choix < 1 || choix > 5) {

        printf ("Veuillez entrez un choix correct\n\n");
        scanf ("%d", &choix);

    }


    if (choix == 1)     //pour pouvoir jouer

    {
        SetConsoleOutputCP (65001); // For accented characters
        SetConsoleOutputCP (437); // For semi-graphic characters
        grille ();

    }


    if (choix == 2)     // pour afficher l'aide
    {
        printf ("\n\nLes regles sont simples, nous avons 3 bateaux et l'adversaire en a aussi 3.\nPour tirer rien de plus simple ; nous annoncons une case (B5) si il y a une partie du bateau en case B5, le bateau est touche. Le but est de couler les trois bateaux adverses\n\nExemple de grille\n\n");
        grille ();
        printf ("\n\nModele a l eau : %c\n"
                "Modele touche  : %c\n"
                "Modele coule  : %c \n\n", aleau, touche, coule);

        scanf ("%d", main ());
    }

    if (choix == 3)     //pour afficher les crédits
    {
        printf ("\n\nCe programme a ete code par Simon Cuany pour un projet afin de s'entrainer avec le language C au CPNV de Ste-Croix.\n");
        system ("\n\n PAUSE");
        scanf ("%d",main ());
    }

    if (choix == 4)     //pour personnaliser les grilles
    {
        printf ("\n Ici vous pouvez personnaliser les grilles... \n");  //WIP
        printf ("\n\n WORK IN PROGRESS\n\n");
        scanf ("%d",main ());
    }

    if (choix == 5)     //pour quitter
    {
        printf ("\nAu revoir !\n\n");
        system ("EXIT");
    }

    system ("\n\nPAUSE");
    return 0;
}