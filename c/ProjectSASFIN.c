#include <stdio.h>
#include <string.h>

// N max des joueurs
#define MAX 100

// Structure de joueur
 typedef struct {
    int id;
    char nom[30];
    char prenom[30];
    int numeroMaillot;
    char poste[20];
    int age;
    int buts;
} Joueur;

//tableau pour stocker les joueurs
Joueur equipe[MAX];
int nbJoueurs = 0;   // compteur de joueurs dans lequipe
int nextId = 1;      // id auto incremnte

//verification si numero de maillot existe 
int maillotExiste(int num) {
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].numeroMaillot == num)
            return 1;
    }
    return 0;
}

//affiche les donnees d'un joueur
void afficherJoueur(Joueur j) {
    printf("[ID %d] %s %s | Maillot %d | %s | %d ans | %d buts\n",
           j.id, j.nom, j.prenom, j.numeroMaillot, j.poste, j.age, j.buts);
}

//fonction pour ajouter un joueur
void ajouterJoueur() {
    if (nbJoueurs >= MAX) {
        printf("\nErreur : equipe pleine.\n");
        return;
    }
    Joueur j; 
    j.id = nextId++; // assigne un id unique auto

    // nom
    do {
        printf("Nom : ");
        scanf("%s", j.nom);
    } while (strlen(j.nom) == 0);

    // prenom
    do {
        printf("Prenom : ");
        scanf("%s", j.prenom);
    } while (strlen(j.prenom) == 0);

    // numero de maillot
    do {
        printf("Numero de maillot (1-99) : ");
        scanf("%d", &j.numeroMaillot);
        if (j.numeroMaillot < 1 || j.numeroMaillot > 99) {
            printf("Erreur : numero doit etre entre 1 et 99.\n");
            j.numeroMaillot = -1;
        } else if (maillotExiste(j.numeroMaillot)) {
            printf("Erreur : numero existe deja.\n");
            j.numeroMaillot = -1;
        }
    } while (j.numeroMaillot == -1);

    int valide = 0;
    // poste avec verification
    do {
        printf("Poste (gardien/defenseur/milieu/attaquant) : ");
        scanf("%s", j.poste);
        if (strcmp(j.poste, "gardien") == 0 ||
            strcmp(j.poste, "defenseur") == 0 ||
            strcmp(j.poste, "milieu") == 0 ||
            strcmp(j.poste, "attaquant") == 0) {
            valide = 1;
        } else {
            printf("Erreur : poste invalide.\n");
        }
    } while (!valide);

    // age
    do {
        printf("Age (16-45) : ");
        scanf("%d", &j.age);
        if (j.age < 16 || j.age > 45)
            printf("Erreur : age doit etre entre 16 et 45.\n");
    } while (j.age < 16 || j.age > 45);

    // buts
    do {
        printf("Nombre de buts : ");
        scanf("%d", &j.buts);
        if (j.buts < 0)
            printf("Erreur : buts >= 0.\n");
    } while (j.buts < 0);

    // ajout dans le tableau
    equipe[nbJoueurs++] = j;
    printf("\nJoueur ajoute avec succes !\n");
}

// ajouter plusieurs joueurs
void ajouterPlusieurs() {
    int n;
    printf("Combien de joueurs ajouter ? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\n--- Ajout joueur %d ---\n", i + 1);
        ajouterJoueur();
    }
}

//affichage des joueurs avec different filtres
void afficherJoueurs() {
    if (nbJoueurs == 0) {
        printf("\nAucun joueur.\n");
        return;
    }

    int choix;
    printf("\n=========================================\n");
    printf("             AFFICHER JOUEURS             \n");
    printf("=========================================\n");
    printf("| 1. Ordre normal                        |\n");
    printf("| 2. Trier par nom                       |\n");
    printf("| 3. Trier par age                       |\n");
    printf("| 4. Afficher par poste                  |\n");
    printf("| 0. Retour                              |\n");
    printf("=========================================\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        // affichage sans tri
        printf("\n== Liste des joueurs ==\n\n");
        for (int i = 0; i < nbJoueurs; i++) {
            afficherJoueur(equipe[i]);
        }
    } else if (choix == 2) {
        // tri alphabetique par nom
        for (int i = 0; i < nbJoueurs; i++) {
            for (int j = i + 1; j < nbJoueurs; j++) {
                if (strcmp(equipe[i].nom, equipe[j].nom) > 0) {
                    Joueur tmp = equipe[i];
                    equipe[i] = equipe[j];
                    equipe[j] = tmp;
                }
            }
        }
        printf("\n== Joueurs tries par nom ==\n\n");
        for (int i = 0; i < nbJoueurs; i++) {
            afficherJoueur(equipe[i]);
        }
    } else if (choix == 3) {
        // tri croissant par age
        for (int i = 0; i < nbJoueurs; i++) {
            for (int j = i + 1; j < nbJoueurs; j++) {
                if (equipe[i].age > equipe[j].age) {
                    Joueur tmp = equipe[i];
                    equipe[i] = equipe[j];
                    equipe[j] = tmp;
                }
            }
        }
        printf("\n== Joueurs tries par age ==\n\n");
        for (int i = 0; i < nbJoueurs; i++) {
            afficherJoueur(equipe[i]);
        }
    } else if (choix == 4) {
        // filtrer par poste
        char poste[20];
        printf("Entrer poste : ");
        scanf("%s", poste);
        printf("\n== Joueurs au poste : %s ==\n\n", poste);
        int found = 0;
        for (int i = 0; i < nbJoueurs; i++) {
            if (strcmp(equipe[i].poste, poste) == 0) {
                afficherJoueur(equipe[i]);
                found = 1;
            }
        }
        if (!found) printf("Aucun joueur trouve pour ce poste.\n");
    } else if (choix == 0) {
        return;
    } else {
        printf("Choix invalide.\n");
    }
}

//modifier certains infos du joueur par ID
void modifierJoueur() {
    int id;
    printf("\nEntrer ID du joueur a modifier : ");
    scanf("%d", &id);
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == id) {
            int choix;
            printf("\n=========================================\n");
            printf("             MODIFIER JOUEUR              \n");
            printf("=========================================\n");
            printf("| 1. Poste                               |\n");
            printf("| 2. Age                                 |\n");
            printf("| 3. Buts                                |\n");
            printf("=========================================\n");
            printf("Votre choix : ");
            scanf("%d", &choix);
            if (choix == 1) {
                // modifier le poste
                int valide = 0;
                do {
                    printf("Nouveau poste (gardien/defenseur/milieu/attaquant) : ");
                    scanf("%s", equipe[i].poste);
                    if (strcmp(equipe[i].poste, "gardien") == 0 ||
                        strcmp(equipe[i].poste, "defenseur") == 0 ||
                        strcmp(equipe[i].poste, "milieu") == 0 ||
                        strcmp(equipe[i].poste, "attaquant") == 0) {
                        valide = 1;
                    } else {
                        printf("Erreur : poste invalide.\n");
                    }
                } while (!valide);
            } else if (choix == 2) {
                // modifier age
                int newAge;
                do {
                    printf("Nouvel age (doit etre > %d et entre 16 et 45) : ", equipe[i].age);
                    scanf("%d", &newAge);
                    if (newAge <= equipe[i].age) {
                        printf("Erreur : le nouvel age doit etre superieur a l'ancien (%d).\n", equipe[i].age);
                    } else if (newAge < 16 || newAge > 45) {
                        printf("Erreur : age doit etre entre 16 et 45.\n");
                    } else {
                        equipe[i].age = newAge;
                        break;
                    }
                } while (1);
            } else if (choix == 3) {
                // modifier les buts
                int newButs;
                do {
                    printf("Nouveaux buts (doit etre superieur a %d) : ", equipe[i].buts);
                    scanf("%d", &newButs);
                    if (newButs <= equipe[i].buts)
                        printf("Erreur : buts doivent etre superieurs a l'ancien (%d).\n", equipe[i].buts);
                } while (newButs <= equipe[i].buts);
                equipe[i].buts = newButs;
            } else {
                printf("Choix invalide.\n");
                return;
            }
            printf("\nJoueur modifie avec succes.\n");
            return;
        }
    }
    printf("\nJoueur introuvable.\n");
}

//supprimer un joueur par ID
  void supprimerJoueur() {
    int id;
    printf("\nEntrer ID a supprimer : ");
    scanf("%d", &id);
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == id) {
            // decalage des joueurs vers la gauche
            for (int j = i; j < nbJoueurs - 1; j++) {
                equipe[j] = equipe[j + 1];
            }
            nbJoueurs--;
            printf("\nJoueur supprime avec succes.\n");
            return;
        }
    }
    printf("\nJoueur introuvable.\n");
}

// rechercher un joueur par ID ou nom
void rechercherJoueur() {
    int choix;
    printf("\n=========================================\n");
    printf("             RECHERCHER JOUEUR            \n");
    printf("=========================================\n");
    printf("| 1. Par ID                              |\n");
    printf("| 2. Par nom                             |\n");
    printf("=========================================\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    if (choix == 1) {
        int id;
        printf("Entrer ID : ");
        scanf("%d", &id);
        for (int i = 0; i < nbJoueurs; i++) {
            if (equipe[i].id == id) {
                printf("\nJoueur trouve :\n");
                afficherJoueur(equipe[i]);
                return;
            }
        }
        printf("Aucun joueur trouve.\n");
    } else if (choix == 2) {
        char nom[30];
        printf("Entrer nom : ");
        scanf("%s", nom);
        int found = 0;
        printf("\nJoueurs avec nom '%s' :\n", nom);
        for (int i = 0; i < nbJoueurs; i++) {
            if (strcmp(equipe[i].nom, nom) == 0) {
                afficherJoueur(equipe[i]);
                found = 1;
            }
        }
        if (!found) printf("Aucun joueur trouve.\n");
    } else {
        printf("Choix invalide.\n");
    }
}

//affiche les stats de lequipe
   void statistiques() {
    if (nbJoueurs == 0) {
        printf("\nAucun joueur.\n");
        return;
    }
    printf("\n=========================================\n");
    printf("         STATISTIQUES DE L'EQUIPE       \n");
    printf("=========================================\n");
    printf("Nombre total de joueurs : %d\n", nbJoueurs);
    
    //moyen age
    int somme = 0;
    for (int i = 0; i < nbJoueurs; i++)
        somme += equipe[i].age;
    printf("Age moyen : %.2f\n", (float)somme / nbJoueurs);
    
    //meilleur buteur
    int max = -1, idx = -1;
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].buts > max) {
            max = equipe[i].buts;
            idx = i;
        }
    }
    if (idx != -1)
        printf("Meilleur buteur : %s %s avec %d buts\n",
               equipe[idx].nom, equipe[idx].prenom, equipe[idx].buts);
    
    //plus jeune est le plusvieux
    int minAge = equipe[0].age, maxAge = equipe[0].age;
    int idxMin = 0, idxMax = 0;
    for (int i = 1; i < nbJoueurs; i++) {
        if (equipe[i].age < minAge) {
            minAge = equipe[i].age;
            idxMin = i;
        }
        if (equipe[i].age > maxAge) {
            maxAge = equipe[i].age;
            idxMax = i;
        }
    }
    printf("Plus jeune joueur : %s %s (%d ans)\n",
           equipe[idxMin].nom, equipe[idxMin].prenom, minAge);
    printf("Plus vieux joueur : %s %s (%d ans)\n",
           equipe[idxMax].nom, equipe[idxMax].prenom, maxAge);
}

//initialise lequipe avec 10 joueurs
void initialiserEquipe() {
    Joueur j[10] = {
        {1, "robert", "lewandowski", 7, "attaquant", 37, 550},
        {2, "messi", "lionel", 10, "attaquant", 36, 900},
        {3, "fermin", "lopez", 20, "attaquant", 21, 100},
        {4, "schezny", "woj", 1, "gardien", 31, 0},
        {5, "pau", "cobarsi", 3, "defenseur", 19, 50},
        {6, "xavi", "simons", 6, "milieu", 35, 70},
        {7, "frenkie", "dejong", 8, "milieu", 26, 125},
        {8, "salah", "mohamed", 12, "attaquant", 29, 350},
        {9, "reyes", "rick", 4, "defenseur", 24, 30},
        {10, "garcia", "david", 40, "gardien", 25, 2}
    };

    for (int i = 0; i < 10; i++) {
        equipe[i] = j[i];
    }
    nbJoueurs = 10;
    nextId = 11;
}

// affiche le menu principal
void menu() {
    printf("\n=========================================\n");
    printf("           GESTION EQUIPE FOOT           \n");
    printf("=========================================\n");
    printf("| 1. Ajouter joueur                      |\n");
    printf("| 2. Ajouter plusieurs joueurs           |\n");
    printf("| 3. Afficher joueurs                    |\n");
    printf("| 4. Modifier joueur                     |\n");
    printf("| 5. Supprimer joueur                    |\n");
    printf("| 6. Rechercher joueur                   |\n");
    printf("| 7. Statistiques                        |\n");
    printf("| 0. Quitter                             |\n");
    printf("=========================================\n");
    printf("Votre choix : ");
}

int main() {
    initialiserEquipe();

    int choix;
    do {
        menu();
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                ajouterJoueur();
                break;
            case 2:
                ajouterPlusieurs();
                break;
            case 3:
                afficherJoueurs();
                break;
            case 4:
                modifierJoueur();
                break;
            case 5:
                supprimerJoueur();
                break;
            case 6:
                rechercherJoueur();
                break;
            case 7:
                statistiques();
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide, veuillez reessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
