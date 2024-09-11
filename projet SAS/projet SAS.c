#include <stdio.h>
#include <string.h>
#define Max_students 100
struct students{
int id;
char nom[50];
char prenom[50];
char datenaissance[10];
char departement[20];
float noteg;

};
int student_conter;
struct students student[Max_students];

void addstudent(){
        student_conter=0;
        newstudent:
        if(student_conter>Max_students){
            printf("le stock est plein!!!");
            return;
        }
        printf("<==========================>\n");
        student[student_conter].id=student_conter+1;
        printf("Entrez le nom de l etudiant: ");
        scanf("%s",student[student_conter].nom);
        printf("Entrez le prenom de l etudiant: ");
        scanf("%s",student[student_conter].prenom);

    departement:
        printf("Entrez le departement de l etudiant:\n(1. Mathematique / 2. Phisique / 3. Informatique / 4. Economie): ");
        int c;
        char info[10]="informatique";
        scanf("%d",&c);
        switch (c){
    case 1:
        strcpy(student[student_conter].departement,"mathematique");
        break;
    case 2:

        strcpy(student[student_conter].departement,"phisique");
        break;
    case 3:


        strcpy(student[student_conter].departement,info[10]);
        break;
    case 4:

        strcpy(student[student_conter].departement,"economie");
        break;
    default:
        printf("choisir un nombre entre 1-4");
        goto departement;
        }
        printf("Entrez la date de naissance de l etudiant: ");
        scanf("%s",student[student_conter].datenaissance);
        printf("Entrez la Note Generale de l Etudiant: ");
        scanf("%f",&student[student_conter].noteg);
        student_conter++;
        printf("Vous Voullez Ajoute un Autre etudient ?(1. oui/0.non)");
        scanf("%d",&c);
        if(c==1){
            goto newstudent;
        }
        else{
            return;
        }
}
void showstudent(){
    if(student_conter==0){
        printf("\nAucun Etudient a Afficher!!!!\n ");
    }
for(int i=0;i<student_conter;i++){
   printf("<==========================>\n");
   printf("etudiant Numero Uinque: %d\n",student[i].id);
   printf("etudiant Nom: %s\n",student[i].nom);
   printf("etudiant Prenom : %s\n",student[i].prenom);
   printf("etudiant Date De Naissance: %s\n",student[i].datenaissance);
   printf("etudiant Department: %s\n",student[i].departement);
   printf("etudiant Note Generale: %.2f\n",student[i].noteg);
   printf("<==========================>\n");
}
}
void updatestudent(){
   Remodifier:
    showstudent();
    printf("Entre Le Numero Unique De L Etudiant Que Vous Voullez modifier:");
    int serchID;
    scanf("%d",&serchID);
    for(int i=0;i<student_conter;i++){
    if(serchID==student[i].id){
        printf("Entre les nouveau information:\n");
        printf("Entrez le nom de l etudiant: ");
        scanf("%s",student[i].nom);
        printf("Entrez le prenom de l etudiant: ");
        scanf("%s",student[i].prenom);
        printf("Entrez la date de naissance de l etudiant: ");
        scanf("%s",student[i].datenaissance);
        departement:
        printf("Entrez le departement de l etudiant:\n(1. Mathematique / 2. Phisique / 3. Informatique / 4. Economie): ");
        int c;
        scanf("%d",&c);
        switch (c){
    case 1:
        strcpy(student[i].departement,"mathematique");
        break;
    case 2:

        strcpy(student[i].departement,"phisique");
        break;
    case 3:

        strcpy(student[i].departement,"informatique");
        break;
    case 4:

        strcpy(student[i].departement,"economie");
        break;
    default:
        printf("choisir un nombre entre 1-4");
        goto departement;
        }
        printf("Entrez la Note Generale de l Etudiant: ");
        scanf("%f",&student[i].noteg);
        printf("\nLa Modification est bien fait!!\n");


    }if(serchID!=student[i].id){
        printf("\nstudent Nombre Unique De L Etudient est invalide!!!!!");
        goto Remodifier;

        }

    }




}
void deletstudent(){

        showstudent();
    printf("Entre Le Numero Unique De L Etudiant Que Vous Voullez modifier:");
    int serchID;
    scanf("%d",&serchID);
    for(int i=0;i<student_conter;i++){
    if(serchID==student[i].id){
            student[i].id=student[i+1].id-1;
        strcpy(student[i].nom,student[i+1].nom);
        strcpy(student[i].prenom,student[i+1].prenom);
        strcpy(student[i].datenaissance,student[i+1].datenaissance);
        strcpy(student[i].departement,student[i+1].departement);
            student[i].noteg=student[i+1].noteg;



    }


    }

}

int main()
{
    do
    {
        int choix;
        printf("1. Ajouter un etudiant\n2. Modifier ou supprimer un etudiant\n3. Afficher les details d'un etudiant\n4. Calculer la moyenne generale\n5. Statistiques\n7. Rechercher un etudiant par\n8. Trier un etudiant par\n0. Quiter\nmerci de choisir le numero corespondent a votre choix: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            addstudent();
            break;
        case 2:
            updatestudent();
            break;
        case 3:
            showstudent();
            break;
        case 4:
            deletstudent();
            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

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



