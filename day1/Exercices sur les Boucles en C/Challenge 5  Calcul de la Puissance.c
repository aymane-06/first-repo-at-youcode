#include <stdio.h>

int main(){
int n,e;
printf("entre un nombre: ");
scanf("%d",&n);
printf("entre un exposant: ");
scanf("%d",&e);
int pow=1;
for(int i=1;i<=e;i++){
    pow=pow*n;

}

printf("%d",pow);


}
