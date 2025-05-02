#include <stdio.h>
#include "core/game_logic.h"
#include "graphics/graphics.h"
#include "menus/menus.h"
#include "scores/scores.h"

int main() {
    reinitialiser_grille();
    afficher_menu();
    afficher_grille();
    return 0;
}
