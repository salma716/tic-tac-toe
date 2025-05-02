#include <stdio.h>
void enregistrer_score(char *nom, int niveau) {
    FILE *f = fopen("scores.dat", "a");
    fprintf(f, "%s a gagné au niveau %d\n", nom, niveau);
    fclose(f);
}

void afficher_scores() {
    FILE *f = fopen("scores.dat", "r");
    char ligne[100];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }
    fclose(f);
}