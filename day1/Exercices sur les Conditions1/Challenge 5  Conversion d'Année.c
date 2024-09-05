#include <stdio.h>

int main(){
int annee;
printf("entre ue anne: ");
scanf("%d",&annee);
int choix;
printf("Choisissez une conversion :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);
    int mois=annee*12;
    int jours=mois*30;
    int heures=jours*24;
    int minutes=heures*60;
    int secondes=minutes*60;
    switch(choix){
   case 1:

    printf("%d annees en mois est: %d ",annee,mois);
    break;
   case 2:

    printf("%d annees en jours est: %d",annee,jours);
    break;
   case 3:

    printf("%d annees en heures est: %d",annee,heures);
    break;
   case 4:

    printf("%d annees en minutes est: %d",annee,minutes);
    break;
   case 5:

    printf("%d annees en secondes est: %d",annee,secondes);
    break;
   default:
    printf("choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
    break;

    }




return 0;
}
