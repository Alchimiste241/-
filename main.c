#include <stdio.h>
#include <stdlib.h>

int main()
{

    int etages, espace, etoiles, ligne;

    printf("Entrez le nombre d'¨¦tages du sapin : ");
    scanf("%d", &etages);

    // Boucle pour chaque ligne du sapin

    for (ligne = 1; ligne <= etages; ligne++){

        // Boucle pour afficher les espaces
        for (espace = 1; espace <= etages - ligne; espace++) {
            printf(" ");
        }


        // Boucle pour afficher les ¨¦toiles
        for (etoiles = 1; etoiles <= 2 * ligne - 1; etoiles++) {
            printf("*");
        }

            printf("\n");
    }

    // Affichage du tronc du sapin
    for (ligne = 1; ligne <= etages / 3; ligne++) {
        for (espace = 1; espace <= etages - 1; espace++) {
            printf(" ");
        }

        printf("[ ]\n");

    }


    return 0;
}
