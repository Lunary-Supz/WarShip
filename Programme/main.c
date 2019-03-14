#include <stdio.h>

int main() {
    int choix;
    int aide;
    int jouer ;
    printf ("\nBIENVENUE DANS LE JEU : BATAILLE NAVALE\n\n");

    printf ("1. Jouer\n");
    printf ("2. aide\n");
    printf ("3. credits\n");
    printf ("4. perso\n");
    printf ("5. Quitter\n");
    scanf ("%d",&choix);
    printf ("Vous avez choisit l'option %d",choix);

    if (aide == 2)
    {
        printf ("\nLes regles sont simples, nous avons 3 bateaux et l'adversaire en a aussi 3.\nPour tirer rien de plus simple ; nous annoncons une case (B5) si il y a une partie du bateau en case B5, le bateau est touche. Le but est de couler les trois bateaux adverses");
    }

    return 0;
}
