#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define Max_students 100
struct students
{
    int id;
    char nom[50];
    char prenom[50];
    char datenaissance[11];
    char departement[50];
    float noteg;
};
void tolowercases(char *str)
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
}
int student_conter=0;
struct students student[Max_students];
char departement[5][50]= {"phisique","informatique","economie","mathematique","svt"};

void addstudent()
{

newstudent:
    if (student_conter > Max_students)
    {
        printf("le stock est plein!!!");
        return;
    }
    printf("<==========================>\n");
    student[student_conter].id = student_conter + 1;
    printf("Entrez le nom de l etudiant: ");
    scanf("%s", student[student_conter].nom);
    tolowercases(student[student_conter].nom);
    printf("Entrez le prenom de l etudiant: ");
    scanf("%s", student[student_conter].prenom);
    printf("Entrez la date de naissance de l etudiant: ");
    scanf(" %[^\n]", student[student_conter].datenaissance);
    int valid_departement = 0;
    while (valid_departement==0)
    {
        printf("Entrez le departement de l etudiant:\n(1. mathematique / 2. phisique / 3. informatique / 4. economie / 5. SVT: ");
        scanf("%s", student[student_conter].departement);

        for(int i=0; i<5; i++)
        {
            if(strcasecmp(departement[i], student[student_conter].departement) == 0)
            {
                valid_departement = 1;
                tolowercases(student[student_conter].departement);
                break;
            }
        }

        if (valid_departement==0)
        {
            printf("merci de verifier l insertion de departement!!\n");
        }
    }
re:
    printf("Entrez la Note Generale de l Etudiant: ");
    scanf("%f", &student[student_conter].noteg);
    if(student[student_conter].noteg<0 && student[student_conter].noteg>20)
    {
        printf("Note invalide!!!!");
        goto re;
    }
    student_conter++;
    printf("Vous Voullez Ajoute un Autre etudient ?(1. oui/0.non): ");
    int c;
    scanf("%d", &c);
    if (c == 1)
    {
        goto newstudent;
    }
    else
    {
        return;
    }
}
void showstudent()
{
    if (student_conter == 0)
    {
        printf("\nAucun Etudient a Afficher!!!!\n ");
        return;
    }
    for (int i = 0; i < student_conter; i++)
    {
        printf("<==========================>\n");
        printf("etudiant Numero Uinque: %d\n", student[i].id);
        printf("etudiant Nom: %s\n", student[i].nom);
        printf("etudiant Prenom : %s\n", student[i].prenom);
        printf("etudiant Date De Naissance: %s\n", student[i].datenaissance);
        printf("etudiant Department: %s\n", student[i].departement);
        printf("etudiant Note Generale: %.2f\n", student[i].noteg);
        printf("<==========================>\n");
    }
}
void updatestudent()
{
    if (student_conter == 0)
    {
        printf("\nAucun Etudient a modifier!!!!\n ");
        return;
    }
Remodifier:
    showstudent();
    printf("Entre Le Numero Unique De L Etudiant Que Vous Voullez modifier:");
    int serchID;
    int finde=-1;
    int i;
    scanf("%d", &serchID);
    for ( i = 0; i < student_conter; i++)
    {
        if (student[i].id == serchID )
        {
            printf("Entre les nouveaux informations:\n");
            printf("Entrez le nom de l etudiant: ");
            scanf("%s", student[i].nom);
            printf("Entrez le prenom de l etudiant: ");
            scanf("%s", student[i].prenom);
            printf("Entrez la date de naissance de l etudiant: ");
            scanf("%s", student[i].datenaissance);
            int valid_departement = 0;
            while (valid_departement==0)
            {
                printf("Entrez le departement de l etudiant:\n(1. mathematique / 2. phisique / 3. informatique / 4. economie /5. SVT: ");
                scanf("%s", student[student_conter].departement);

                for(int i=0; i<4; i++)
                {
                    if(strcasecmp(departement[i], student[student_conter].departement) == 0)
                    {
                        valid_departement = 1;
                        tolowercases(student[student_conter].departement);
                        break;
                    }
                }

                if (valid_departement==0)
                {
                    printf("merci de verifier l insertion de departement!!\n");
                }
            }
            printf("Entrez la Note Generale de l Etudiant: ");
            scanf("%f", &student[i].noteg);
            finde=1;
            printf("\nLa Modification est bien fait!!\n");

        }

    }
    if(finde==-1)
    {
        printf("\nstudent Nombre Unique De L Etudient est invalide!!!!!");
        goto Remodifier;
    }

}

void deletstudent()
{
    if (student_conter == 0)
    {
        printf("\nAucun Etudient a supprimer!!!!\n ");
        return;
    }
re:
    showstudent();
    printf("Entre Le Numero Unique De L Etudiant Que Vous Voullez supprimer:");
    int serchID;
    scanf("%d", &serchID);
    for (int i = 0; i < student_conter; i++)
    {
        if (serchID == student[i].id)
        {
            student[i].id = student[i + 1].id;
            strcpy(student[i].nom, student[i + 1].nom);
            strcpy(student[i].prenom, student[i + 1].prenom);
            strcpy(student[i].datenaissance, student[i + 1].datenaissance);
            strcpy(student[i].departement, student[i + 1].departement);
            student[i].noteg = student[i + 1].noteg;
            printf("la suprression est bien fait!!!\n");

            student_conter--;
        }
        else
        {
            printf("\nle nombre unique est invalide!!!\n");
            goto re;
        }
    }
}
void calculler_moyeen(const char *department)
{
    float total = 0;
    int count = 0;
    for (int i = 0; i < student_conter; i++)
    {
        if (strcasecmp(student[i].departement, department) == 0)
        {
            total += student[i].noteg;
            count++;
        }
    }
    if (count > 0)
    {
        printf("la moyenne generale de %s est: %.2f\n", department, total / count);
    }
    else
    {
        printf("Aucun etudiant dans le departement %s\n", department);
    }
}
float moyeen_general_univre()
{
    float total=0;
    float moyeen_generaluni=0;
    for (int i = 0; i < student_conter; i++)
    {
        total += student[i].noteg;
        moyeen_generaluni= total / student_conter;
    }
    return moyeen_generaluni;
}
void moyeen_general()
{
    int c;
    if (student_conter == 0)
    {
        printf("\nLa moyenne Generale est 0!!!\n ");
    }


    calculler_moyeen("mathematique");
    calculler_moyeen("phisique");
    calculler_moyeen("informatique");
    calculler_moyeen("economie");
    calculler_moyeen("svt");
    printf("la moyenne generale total de l universite est: %.2f\n",moyeen_general_univre());
}


void count_student_by_department(const char *department)
{
    int count = 0;
    for (int i = 0; i < student_conter; i++)
    {
        if (strcasecmp(student[i].departement, department) == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("le nombre d etudiant de %s est: %d\n", department, count);
    }
    else
    {
        printf("Aucun etudiant dans le departement %s\n", department);
    }
}
void student_by_department()
{
    count_student_by_department("mathematique");
    count_student_by_department("phisique");
    count_student_by_department("informatique");
    count_student_by_department("economie");
    count_student_by_department("svt");
}
void sup_moyenne()
{
    if (student_conter == 0)
    {
        printf("les etudiants ayant une moyenne generale superieure a la moyenne sont: 0\n");
    }
    for (int i = 0; i < student_conter; i++)
    {
        int conunt;
        if (student[i].noteg >=moyeen_general_univre() )
        {
            printf("<==========================>\n");
            printf("etudiant Numero Uinque: %d\n", student[i].id);
            printf("etudiant Nom: %s\n", student[i].nom);
            printf("etudiant Prenom : %s\n", student[i].prenom);
            printf("etudiant Date De Naissance: %s\n", student[i].datenaissance);
            printf("etudiant Department: %s\n", student[i].departement);
            printf("etudiant Note Generale: %.2f\n", student[i].noteg);
            printf("<==========================>\n");
            ;
        }
    }
}
void top3()
{
    if (student_conter == 0)
    {
        printf("Aucun etudiant a afficher!!!\n");
        return;
    }
    float max1 = student[0].noteg;
    float max2 = student[0].noteg;
    float max3 = student[0].noteg;
    for (int i = 0; i < student_conter; i++)
    {
        if (student[i].noteg > max1)
        {
            max1 = student[i].noteg;
        }
    }
    for (int i = 0; i < student_conter; i++)
    {
        if (student[i].noteg == max1)
        {
            continue;
        }
        max2 = student[i].noteg;
    }
    for (int i = 0; i < student_conter; i++)
    {
        if (student[i].noteg == max1 || student[i].noteg == max2)
        {
            continue;
        }
        max3 = student[i].noteg;
    }
    for (int i = 0; i < student_conter; i++)
    {
        if (student[i].noteg == max1 || student[i].noteg == max2 || student[i].noteg == max3)
        {
            printf("<==========================>\n");
            printf("etudiant Numero Uinque: %d\n", student[i].id);
            printf("etudiant Nom: %s\n", student[i].nom);
            printf("etudiant Prenom : %s\n", student[i].prenom);
            printf("etudiant Date De Naissance: %s\n", student[i].datenaissance);
            printf("etudiant Department: %s\n", student[i].departement);
            printf("etudiant Note Generale: %.2f\n", student[i].noteg);
            printf("<==========================>\n");
            ;
        }
    }
}
void student_succes()
{
    int conteur = 0;
    if (student_conter == 0)
    {
        printf("Aucun etudiant a afficher!!!\n");
    }
    for (int i = 0; i < student_conter; i++)
    {
        if (student[i].noteg >= 10)
        {
            conteur++;
        }
    }
    printf("les etudiants ayant une moyenne generale superieur a 10 sont: %d\n", conteur);
}
void serch_student()
{
    char serch_name[50];
    printf("Entre le nom de l etudiant: ");
    scanf("%s", serch_name);
    for (int i = 0; i < student_conter; i++)
    {
        if (strcmp(student[i].nom, serch_name) == 0)
        {
            printf("<==========================>\n");
            printf("etudiant Numero Uinque: %d\n", student[i].id);
            printf("etudiant Nom: %s\n", student[i].nom);
            printf("etudiant Prenom : %s\n", student[i].prenom);
            printf("etudiant Date De Naissance: %s\n", student[i].datenaissance);
            printf("etudiant Department: %s\n", student[i].departement);
            printf("etudiant Note Generale: %.2f\n", student[i].noteg);
            printf("<==========================>\n");
            ;
        }
    }
}
void showbydepartment(const char *department)
{
    for (int i = 0; i < student_conter; i++)
    {
        if (strcasecmp(student[i].departement, department) == 0)
        {
            printf("<==========================>\n");
            printf("etudiant Numero Uinque: %d\n", student[i].id);
            printf("etudiant Nom: %s\n", student[i].nom);
            printf("etudiant Prenom : %s\n", student[i].prenom);
            printf("etudiant Date De Naissance: %s\n", student[i].datenaissance);
            printf("etudiant Department: %s\n", student[i].departement);
            printf("etudiant Note Generale: %.2f\n", student[i].noteg);
            printf("<==========================>\n");
        }
    }
}
void serch_department()
{
    int serch;
f:
    printf("Entre le departement de l etudiant:\n(1. Mathematique / 2. phisique / 3. Informatique / 4. Economie/5. SVT):(1-5):  ");
    scanf("%d", &serch);
    switch (serch)
    {
    case 1:
        showbydepartment("mathematique");
        break;
    case 2:
        showbydepartment("phisique");
        break;
    case 3:
        showbydepartment("informatique");
        break;
    case 4:
        showbydepartment("economie");
        break;
    case 5:
        showbydepartment("svt");
        break;
    default:
        printf("choisir un nombre entre 1-4");
        goto f;
        break;
    }
}
void bublle_sortbyname_a_to_z(struct students *student, int student_conter)
{
    for (int i = 0; i < student_conter - 1; i++)
    {
        for (int j = 0; j < student_conter - i - 1; j++)
        {
            if (strcmp(student[j].nom, student[j + 1].nom) > 0)
            {
                struct students temp;
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
}
void bublle_sortbyname_z_to_a(struct students *student, int student_conter)
{
    for (int i = 0; i < student_conter - 1; i++)
    {
        for (int j = 0; j < student_conter - i - 1; j++)
        {
            if (strcmp(student[j].nom, student[j + 1].nom) < 0)
            {
                struct students temp;
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
}
void bublle_sortbynoteg(struct students *student, int student_conter)
{
    for (int i = 0; i < student_conter - 1; i++)
    {
        for (int j = 0; j < student_conter - i - 1; j++)
        {
            if (student[j].noteg - student[j + 1].noteg < 0)
            {
                struct students temp;
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
}
void buble_sortbysucces(struct students *student, int student_conter)
{
    bublle_sortbynoteg(student, student_conter);
    for (int i = 0; i < student_conter; i++)
    {
        if (student[i].noteg >= 10)
        {

            printf("<==========================>\n");
            printf("etudiant Numero Uinque: %d\n", student[i].id);
            printf("etudiant Nom: %s\n", student[i].nom);
            printf("etudiant Prenom : %s\n", student[i].prenom);
            printf("etudiant Date De Naissance: %s\n", student[i].datenaissance);
            printf("etudiant Department: %s\n", student[i].departement);
            printf("etudiant Note Generale: %.2f\n", student[i].noteg);
            printf("<==========================>\n");
        }
    }
}
int main()
{   f:
    do
    {
        int choix;
        printf("<=============================>\n");
        printf("1. Ajouter un etudiant\n2. Modifier ou supprimer un etudiant\n3. Afficher les details d'un etudiant\n4. Calculer la moyenne generale\n5. Statistiques\n6. Rechercher un etudiant par\n7. Trier un etudiant par\n0. Quiter\nmerci de choisir le numero corespondent a votre choix: ");
        scanf("%d", &choix);
         system("cls");
        switch (choix)
        {
        case 1:
            addstudent();
            break;
        case 2:
            printf("1. Modifier un etudiant\n2. Supprimer un etudiant\n");
            scanf("%d", &choix);
            if (choix == 1)
            {
                updatestudent();
            }
            else if (choix == 2)
            {
                deletstudent();
            }

            break;
        case 3:
            showstudent();
            break;
        case 4:
            moyeen_general();
            break;
        case 5:

        do{ printf("<=============================>\n");
            printf("1. Afficher le nombre total d etudiants inscrit\n2. Afficher le nombre d Etudiants dans chaque deartement\n3. Afficher les etudiants ayant une moyenne generale superieure a la moyenne general UNI \n4. Afficher les 3 etudiants ayant les meilleures notes\n5. Afficher le nombre d etudiants ayant reussi dans chaque departement\n0.Quitter\nchoix: ");
            scanf("%d", &choix);
            switch (choix)
            {
            case 1:
                printf("le nombre total d etudiants inscrit est: %d\n", student_conter);
                break;
            case 2:
                student_by_department();
                break;
            case 3:
                sup_moyenne();
                break;
            case 4:
                top3();
                break;
            case 5:
                student_succes();
                break;
            case 0:
                goto f;
            default:
                printf("choisir un nombre entre 1-5");
                break;
            }
            }
            while(1);
        case 6:
g:
            printf("1. Rechercher un etudiant par nom\n2. Rechercher un etudiant par departement\nchoix: ");
            int choix;
            scanf("%d", &choix);
            switch (choix)
            {
            case 1:
                serch_student();
                break;
            case 2:
                serch_department();
                break;
            default:
                printf("choisir un nombre entre 1-2");
                goto g;
            }

            break;
        case 7:
b:
            printf("1. Tri alphabetique des Etudiants en fonction de leur nom de a-z\n2. Tri alphabetique des etudiants en fonction de leur nom de z-a\n3. Tri des etudiants par moyenne generale decroisant\n4. Tri des etudiants selon leur statut de reussite\n(1-4):");
            scanf("%d", &choix);
            switch (choix)
            {
            case 1:
                bublle_sortbyname_a_to_z(student, student_conter);
                break;
            case 2:
                bublle_sortbyname_z_to_a(student, student_conter);
                break;
            case 3:
                bublle_sortbynoteg(student, student_conter);
                break;
            case 4:
                buble_sortbysucces(student, student_conter);
                break;
            default:
                printf("choisir un nombre entre 1-4");
                goto b;
                break;
            }
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
