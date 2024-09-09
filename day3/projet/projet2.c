// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct contact{
char nom[50];
char phoneNum[50];
char email[50]
};
struct contact contactlist[50];


int n=0;


void AddContact(){
        addbook:
            printf("<==========================>\n");
            printf("entre le nom du contact: ");
            scanf("%s",&contactlist[n].nom);
            printf("entre le numero de telephone du contact:");
            scanf("%s",&contactlist[n].phoneNum);
            printf("entre l addresse e-mail: ");
            scanf("%s",&contactlist[n].email);
            n++;
             if(n>50)
        {
            printf("le stock est plein");}
            int c;
        printf("vous voulez ajoute un autre contact? 1.oui/0.non");
        scanf("%d",&c);
            if(c==1) {
            goto addbook;
        }else
        return;

     }


void updateContact(){
    char c[50];
    printf("entre le nom du conatct: ");
    scanf("%s",&c);
    for(int i=0;i<n;i++){
    if(strcmp(c,contactlist[i].nom)==0){
        printf("entre le nouveau numero de telephone: ");
        scanf("%s",&contactlist[i].phoneNum);
        printf("entre le nouveau addresse e-mail: ");
        scanf("%s",&contactlist[i].email);
    }else{
        printf("le contact %s est invalid\n",c);
        }
}
}
void deletContact(){
      char c[50];
    printf("entre le nom du conatct: ");
    scanf("%s",&c);
    for(int i=0;i<n;i++){
    if(strcmp(c,contactlist[i].nom)==0){
        strcpy(contactlist[i].nom,contactlist[i+1].nom);
        strcpy(contactlist[i].phoneNum,contactlist[i+1].phoneNum);
        strcpy(contactlist[i].email,contactlist[i+1].email);
    }
    else{
        printf("le contact %s est invalid\n",c);
    }
    n--;
}
}
void showContact(){
    for(int i=0;i<n;i++){
        printf("<=================>\n");
        printf("%s\n",contactlist[i].nom);
        printf("%s\n",contactlist[i].phoneNum);
        printf("%s\n",contactlist[i].email);
    }
}
void serch(){
     char c[50];
    printf("entre le nom du conatct: ");
    scanf("%s",&c);
    for(int i=0;i<n;i++){
    if(strcmp(c,contactlist[i].nom)==0){
        printf("<============>");
        printf("%s",contactlist[i].nom);
        printf("%s",contactlist[i].phoneNum);
        printf("%s",contactlist[i].email);
    }else{
         printf("le contact %s est invalid\n",c);
    }
}
}

int main() {

do{
    int choix;
 printf("1. Ajouter un Contact\n2. Modifier un Contact\n3. Supprimer un Contact\n4. Afficher Tous les Contacts\n5. Rechercher un Contact\n0. quiter\nmerci de choisir le numero corespondent a votre choix: ");
 scanf("%d",&choix);
 switch (choix){
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
}while (1);

    return 0;
}


