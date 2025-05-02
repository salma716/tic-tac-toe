#include <stdio.h>
extern char grille[TAILLE][TAILLE];
void afficher_grille() {
    printf("\n");
    for (int i = 0; i < TAILLE; i++) {
        for (int j = 0; j < TAILLE; j++) {
            printf(" %c ", grille[i][j]);
            if (j < TAILLE - 1) printf("|");
        }
        printf("\n");
        if (i < TAILLE - 1) printf("---+---+---\n");
    }
    printf("\n");
}