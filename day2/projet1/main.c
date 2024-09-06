#include <stdio.h>
#include <string.h>
#include "fonction.h"

int main(){

int choix;
do{
 printf("1. Ajouter un Livre au Stock\n2. Afficher Tous les Livres Disponibles\n3. Mettre a Jour la Quantite d'un Livre\n4. Supprimer un Livre du Stock\n5. Afficher le Nombre Total de Livres en Stock\n0.Quite le programe\n entre un nombre corespondent a votre chiox:");
scanf("%d",&choix);
switch (choix){

 case 1:
     ajoute();
     break;
 case 2:
     afficher();
     break;
 case 3:
    MAJQ();
    break;
 case 4:
    supprimer();
    break;
 case 5:
     NLS();
     break;
 case 0:
    return 0;
 default:
    printf("entre un nombre entre (0-5)");
    break;




}

}
while(1);
 ;










return 0;
}
