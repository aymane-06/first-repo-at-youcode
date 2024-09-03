#include <stdio.h>

int main() {

int j,i,f;
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
printf("entre le facteur: ");
scanf("%d",&f);
printf("nouveau valeur du tableux: \n");
for(i=0;i<=j;i++){
    printf("%d \n",tableau[i]*f);
};













return 0;
}
