#include <stdio.h>

int main() {

int j,i;
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

int min=tableau[0];
for(i=0;i<=j;i++){
if(min>tableau[i]){
    min=tableau[i];
    printf("le minimum nombre du tableau est :%d",min);

}else{
    min=tableau[0];
printf("le minimum nombre du tableau est: %d",min);
}
}










return 0;
}
