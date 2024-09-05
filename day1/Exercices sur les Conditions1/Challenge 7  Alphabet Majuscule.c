#include <stdio.h>

int main(){
char c;
printf("entre un character: ");
scanf("%c",&c);
if(c<=90 && c>=65)
    printf("le character %c est majiscule",c);
else
    printf("le character %c est mminiscule",c);





return 0;
}
