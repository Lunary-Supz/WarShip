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
é

int TopBorder(void) {
    printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", STLC, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB,
            SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, STRC);

}

int main() {
    int choix;
    printf ("\n----BIENVENUE DANS LE JEU BATAILLE NAVALE----\n\n");
printf("                   __/___            \n"
       "             _____/______|           \n"
       "     _______/_____\\_______\\_____     \n"
       "     \\              < < <       |    \n"
       "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf ("1. Jouer\n");
    printf ("2. aide\n");
    printf ("3. credits\n");
    printf ("4. personnalisation\n");
    printf ("5. Quitter\n");
    scanf ("%d", &choix);
    printf ("Vous avez choisit l'option %d", choix);

    if (choix == 1)     //pour pouvoir jouer

    {
        SetConsoleOutputCP (65001); // For accented characters
        printf ("\nUne grille basée sur les lignes simples:\n\n");
        SetConsoleOutputCP (437); // For semi-graphic characters
        printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", STLC, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB,
                SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, STRC);
        printf ("%c   %c   %c   %c   %c\n", SVSB, SVSB, SVSB, SVSB, SVSB);
        printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", SVLB, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB,
                SHSB, SC, SHSB, SHSB, SHSB, SVRB);
        printf ("%c   %c   %c   %c   %c\n", SVSB, SVSB, SVSB, SVSB, SVSB);
        printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", SVLB, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB,
                SHSB, SC, SHSB, SHSB, SHSB, SVRB);
        printf ("%c   %c   %c   %c   %c\n", SVSB, SVSB, SVSB, SVSB, SVSB);
        printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", SVLB, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB,
                SHSB, SC, SHSB, SHSB, SHSB, SVRB);
        printf ("%c   %c   %c   %c   %c\n", SVSB, SVSB, SVSB, SVSB, SVSB);
        printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", SBLC, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB,
                SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SBRC);
    }



        if (choix == 2)     // pour afficher l'aide
        {
            printf ("\n\nLes regles sont simples, nous avons 3 bateaux et l'adversaire en a aussi 3.\nPour tirer rien de plus simple ; nous annoncons une case (B5) si il y a une partie du bateau en case B5, le bateau est touche. Le but est de couler les trois bateaux adverses");
        }

        if (choix == 3)     //pour afficher les crédits
        {
            printf ("\n\nCe programme a ete code par Simon Cuany pour un projet afin de s'entrainer avec le language C au CPNV de Ste-Croix.\n");
        }

        return 0;
}
