#include <stdio.h>
#include <string.h>
#include "bib.h"


int main()
{
    do
    {
        int choix;
        printf("1. Ajouter un Contact\n2. Modifier un Contact\n3. Supprimer un Contact\n4. Afficher Tous les Contacts\n5. Rechercher un Contact\n0. quiter\nmerci de choisir le numero corespondent a votre choix: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            AddContact();
            break;
        case 2:
            updateContact();
            break;
        case 3:
            deletContact();
            break;
        case 4:
            showContact();
            break;
        case 5:
            serch();
            break;
        case 0:
            return 0;
            break;
        default:
            printf("!!!!choix invalide!!!!\n");



        }
    }
    while (1);

    return 0;
}



