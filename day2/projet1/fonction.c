#include <stdio.h>
#include <string.h>
#include "fonction.h"


void ajoute(){

addbook:
        printf("=============================\n");
        printf("entre le titre du livre: ");
        scanf("%s",&titre[n]);
        printf("entre le auteur du livre: ");
        scanf("%s",&auteur[n]);
        printf("entre le prix du livre: ");
        scanf("%d",&prix[n]);
        printf("entre la quantité du livre: ");
        scanf("%d",&quantite[n]);
        n++;
        if(n>50){
            printf("le stock est plein!!!");
        }
        int c;
        printf("vous voullez ajouté un autre livre?\n1. oui/ 0. non:");
        scanf("%d",&c);

        if(c==1){
            goto addbook;
        }else{
            return;
        }

    }

void afficher(){
    int i ;
    if (n==0){
        printf("aucun livre est disponible,merci de l ajoute!!\n\n");
    }
    for(i=0;i<n;i++){
        printf("livre numero:%d\n",i+1);
        printf("%s\n",titre[i]);
        printf("%s\n",auteur[i]);
        printf("%d\n",prix[i]);
        printf("%d\n",quantite[i]);
        printf("=============================\n");
    }

}
void MAJQ(){
char recherch[50];
printf("entre le titre de livre pour modifier sa quantite: ");
scanf("%s",&recherch);
for(i=0;i<n;i++){
        if(strcasecmp( recherch,titre[i]) == 0){
        printf("modifier la quantite de livre %s:",titre[i]);
        scanf("%d",&quantite[i]);}
        else{
            printf("ce livre n'est pas disponible merci de le ajouté");
            }

}
}
void supprimer(){
char recherch[50];
int index;
printf("entre le titre de livre pour le supprimer: ");
scanf("%s",&recherch);
for(int i=0;i<n;i++){
        if(strcasecmp(recherch,titre[i]) == 0)

                   while(i<n){
            strcpy(titre[i],titre[i+1]);
            strcpy(auteur[i],auteur[i+1]);
                     prix[i]=prix[i+1];
                  quantite[i]=quantite[i+1];
                  n--;
                  i++;
                  printf("ce livre est  bien supprime!!\n");
        }
        else
            printf("ce livre n'est pas disponible merci de l ajouté");

}
}
void NLS(){
int S=0;
for(i=0;i<n;i++){
    S=S+quantite[i];
}
printf("La quantite des livres stoque est :%d\n",S);

}
