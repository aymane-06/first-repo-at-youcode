#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 50

struct contact {
    char nom[50];
    char phoneNum[50];
    char email[50];
};

struct contact contactlist[MAX_CONTACTS];
int n = 0;

void bubbleSort(struct contact *contactlist, int n) {
    int i, j;
    struct contact temp;
    for (i = 0; i < n ; i++) {
        for (j = 0; j < n-1 ; j++) {
            if (strcmp(contactlist[j].nom, contactlist[j + 1].nom) > 0) {
                temp = contactlist[j];
                contactlist[j] = contactlist[j + 1];
                contactlist[j + 1] = temp;
            }
        }
    }
}

void tolowercases(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

void AddContact() {
    if (n >= MAX_CONTACTS) {
        printf("Le stock est plein.\n");
        return;
    }

    printf("<==========================>\n");
    printf("Entrez le nom du contact: ");
    scanf("%s", contactlist[n].nom);
    tolowercases(contactlist[n].nom);
    printf("Entrez le numéro de téléphone du contact: ");
    scanf("%s", contactlist[n].phoneNum);
    printf("Entrez l'adresse e-mail: ");
    scanf("%s", contactlist[n].email);

    n++;
    system("cls") ;
}

void updateContact() {
    char c[50];
    int i;

    printf("Entrez le nom du contact: ");
    scanf("%s", c);
    tolowercases(c);

    for (i = 0; i < n; i++) {
        if (strcmp(c, contactlist[i].nom) == 0) {
            printf("Entrez le nouveau numéro de téléphone: ");
            scanf("%s", contactlist[i].phoneNum);
            printf("Entrez la nouvelle adresse e-mail: ");
            scanf("%s", contactlist[i].email);
            return;
        }
    }

    printf("Le contact %s est invalide.\n", c);
}

void deleteContact() {
    char c[50];
    int i;

    printf("Entrez le nom du contact: ");
    scanf("%s", c);
    tolowercases(c);

    for (i = 0; i < n; i++) {
        if (strcmp(c, contactlist[i].nom) == 0) {
            memmove(&contactlist[i], &contactlist[i + 1], (n - i - 1) * sizeof(struct contact));
            n--;
            return;
        }
    }

    printf("Le contact %s est invalide.\n", c);
}

void showContact() {
    int i;

    for (i = 0; i < n; i++) {
        printf("<=================>\n");
        printf("Nom: %s\n", contactlist[i].nom);
        printf("Numéro de téléphone: %s\n", contactlist[i].phoneNum);
        printf("Adresse e-mail: %s\n", contactlist[i].email);
    }

}

void search() {
    char c[50];
    int i;

    printf("Entrez le nom du contact: ");
    scanf("%s", c);
    tolowercases(c);

    for (i = 0; i < n; i++) {
        if (strcmp(c, contactlist[i].nom) == 0) {
            printf("<============>\n");
            printf("Nom: %s\n", contactlist[i].nom);
            printf("Numéro de téléphone: %s\n", contactlist[i].phoneNum);
            printf("Adresse e-mail: %s\n", contactlist[i].email);
            return;
        }
    }

    printf("Le contact %s est invalide.\n", c);

}

int main() {
    int choix;

    do {
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Trier les contacts par nom\n");
        printf("0. Quitter\n");
        printf("Merci de choisir le numéro correspondant à votre choix: ");
        scanf("%d", &choix);
        system("cls") ;

        switch (choix) {
            case 1:
                AddContact();
                break;
            case 2:
                updateContact();
                break;
            case 3:
                deleteContact();
                break;
            case 4:
                showContact();
                break;
            case 5:
                search();
                break;
            case 6:
                bubbleSort(contactlist, n);
                break;
            case 0:
                return 0;
            default:
                printf("!!!!Choix invalide!!!!\n");
        }
    } while (1);

    return 0;
}
