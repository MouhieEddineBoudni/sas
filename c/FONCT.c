#include <stdio.h>
#include <string.h>

void inverse(char *chaine) {
    int debut = 0;
    int fin = strlen(chaine) - 1; 
    char temp;
    while (debut < fin) {
        temp = chaine[debut];
        chaine[debut] = chaine[fin];
        chaine[fin] = temp;
        debut++;
        fin--;
    }
}
int main() {
    char chaine[100]; 
    printf("Entrez une chaine de cara : ");
    if (fgets(chaine, sizeof(chaine), stdin) == NULL) {
        printf("Erreur de saisie.\n");
        return 1;
    }
    size_t longueur = strlen(chaine);
    if (chaine[longueur - 1] == '\n') {
        chaine[longueur - 1] = '\0';
    }
    inverse(chaine);
    printf("Chaine inverse : %s\n", chaine);
    return 0;
}