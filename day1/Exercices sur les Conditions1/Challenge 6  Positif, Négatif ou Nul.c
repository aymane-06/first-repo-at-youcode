#include <stdio.h>

int main(){
int n;
printf("entre un nombre: ");
scanf("%d",&n);
if(n<0)
    printf("le nombre %d est negetif!",n);
else if(n>0)
    printf("le nombre %d est positif!",n);
else
    printf("le nombre %d est null",n);




return 0;
}
