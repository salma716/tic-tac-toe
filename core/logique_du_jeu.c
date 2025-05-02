#include <stdio.h>
#include <stdbool.h>

#define TAILLE 3  // Modifier pour le niveau 2
char grille[TAILLE][TAILLE];

void reinitialiser_grille() {
    for (int i = 0; i < TAILLE; i++)
        for (int j = 0; j < TAILLE; j++)
            grille[i][j] = ' ';
}

bool jouer_coup(int x, int y, char joueur) {
    if (x >= 0 && x < TAILLE && y >= 0 && y < TAILLE && grille[x][y] == ' ') {
        grille[x][y] = joueur;
        return true;
    }
    return false;
}

bool verifier_victoire(char joueur) {
    for (int i = 0; i < TAILLE; i++) {
        if (grille[i][0] == joueur && grille[i][1] == joueur && grille[i][2] == joueur) return true;
        if (grille[0][i] == joueur && grille[1][i] == joueur && grille[2][i] == joueur) return true;
    }
    if (grille[0][0] == joueur && grille[1][1] == joueur && grille[2][2] == joueur) return true;
    if (grille[0][2] == joueur && grille[1][1] == joueur && grille[2][0] == joueur) return true;
    return false;
}
