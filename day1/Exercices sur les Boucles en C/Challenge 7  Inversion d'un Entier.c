#include <stdio.h>

int main(){
int n;
printf("entre un nombre: ");
scanf("%d",&n);
int inv=0;
do{
    inv=(inv*10)+(n%10);
    n=n/10;
}while(n!=0);
printf("l'invrece du nombre est: %d",inv);



return 0;
}
