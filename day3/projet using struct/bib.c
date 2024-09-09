#include <stdio.h>
#include <string.h>
#include "bib.h"


void AddContact()
{
Addcontat:
    printf("entre le nom du contact: ");
    scanf("%s",&contactlist[n].nom);
    printf("entre le numero de telephone du contact: ");
    scanf("%s",&contactlist[n].tele);
    printf("entre l e-mail du contact: ");
    scanf("%s",&contactlist[n].email);
    n++;
    if(n>50)
    {
        printf("stock est plein!!!!");
    }
    int c;
    printf("vous voullez ajoute un autre contact?(1.oui/0.non):");
    scanf("%d",&c);
    if(c==1)
    {
        goto Addcontat;
    }
    else
    {
        return;
    }
}
void updateContact()
{
    char c[50];
    printf("entre le nom du contact que vous voullez modifier:");
    scanf("%s",&c);
    for(int i=0; i<n; i++)
    {
        if(strcasecmp(c,contactlist[i].nom)==0)
        {
            printf("entre le nouveau numero du conatct:");
            scanf("%s",&contactlist[i].tele);
            printf("entre le nouveau e-mail:");
            scanf("%s",&contactlist[i].email);
            printf("la modification est bien fait!!!!\n");
        }
    }
}
void deletContact()
{
    char c[50];
    printf("entre le nom du contact que vous voullez supprimer:");
    scanf("%s",&c);
    for(int i=0; i<n; i++)
    {
        if(strcasecmp(c,contactlist[i].nom)==0)
        {
            strcpy(contactlist[i].nom,contactlist[i+1].nom);
            strcpy(contactlist[i].tele,contactlist[i+1].tele);
            strcpy(contactlist[i].email,contactlist[i+1].email);
            printf("le contact est bien supprimer!!!!\n");
        }

    }
}
void showContact()
{
    for(int i=0; i<n; i++)
    {
        printf("<==========================>\n");
        printf("%s\n",contactlist[i].nom);
        printf("%s\n",contactlist[i].tele);
        printf("%s\n",contactlist[i].email);
    }

}
void serch()
{
    char c[50];
    printf("entre le nom du contact que vous voullez trouver:");
    scanf("%s",&c);
    for(int i=0; i<n; i++)
    {
        if(strcasecmp(c,contactlist[i].nom)==0)
        {
            printf("<==========================>\n");
            printf("%s\n",contactlist[i].nom);
            printf("%s\n",contactlist[i].tele);
            printf("%s\n",contactlist[i].email);
        }
    }
}
