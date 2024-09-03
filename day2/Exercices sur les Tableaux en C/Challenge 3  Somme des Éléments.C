#include <stdio.h>

int main() {

int j,i,S=0;
printf("entre le nombre des elements du tableau: ");
scanf("%d",&j);
int tableau[j];
for( i=0;i<=j;i++){
        printf("entre la valeur du l'element index %d: ",i);
    scanf("%d",&tableau[i]);


}
printf("les valeurs du tableu : \n");
for(i=0;i<=j;i++){
    printf("%d \n",tableau[i]);
}

for(i=0;i<=j;i++){
    S=S+tableau[i];

}
printf("S is : %d",S);











return 0;
}
