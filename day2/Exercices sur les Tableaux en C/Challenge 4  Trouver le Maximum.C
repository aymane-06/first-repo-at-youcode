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

int max=tableau[0];
for(i=0;i<=j;i++){
if(max<tableau[i]){
    max=tableau[i];
    printf("le maximum nombre du tableau est :%d",max);

}else{
    max=tableau[0];
printf("le maximum nombre du tableau est: %d",max);
}
}










return 0;
}
