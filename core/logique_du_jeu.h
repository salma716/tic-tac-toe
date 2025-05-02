#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include <stdbool.h>

#define TAILLE 3  // Modifier pour le niveau 2

extern char grille[TAILLE][TAILLE];

void reinitialiser_grille();
bool jouer_coup(int x, int y, char joueur);
bool verifier_victoire(char joueur);

#endif
