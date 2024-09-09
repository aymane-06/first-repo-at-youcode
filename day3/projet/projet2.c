// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


char nom[50][50];
char phoneNum[50][13];
char email[50][50];
int n=0;


void AddContact(){
        addbook:
            printf("<==========================>\n");
            printf("entre le nom du contact: ");
            scanf("%s",&nom[n]);
            printf("entre le numero de telephone du contact:");
            scanf("%s",&phoneNum[n]);
            printf("entre l addresse e-mail: ");
            scanf("%s",&email[n]);
            n++;
             if(n>50)
        {
            printf("le stock est plein");}
            int c;
        printf("vous voulez ajoute un autre livre? 1.oui/0.non");
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
    if(strcmp(c,nom[i])==0){
        printf("entre le nouveau numero de telephone: ");
        scanf("%s",&phoneNum[i]);
        printf("entre le nouveau addresse e-mail: ");
        scanf("%s",&email[i]);
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
    if(strcmp(c,nom[i])==0){
        strcpy(nom[i],nom[i+1]);
        strcpy(phoneNum[i],phoneNum[i+1]);
        strcpy(email[i],email[i+1]);
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
        printf("%s\n",nom[i]);
        printf("%s\n",phoneNum[i]);
        printf("%s\n",email[i]);
    }
}
void serch(){
     char c[50];
    printf("entre le nom du conatct: ");
    scanf("%s",&c);
    for(int i=0;i<n;i++){
    if(strcmp(c,nom[i])==0){
        printf("<============>");
        printf("%s",nom[i]);
        printf("%s",phoneNum[i]);
        printf("%s",email[i]);
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


