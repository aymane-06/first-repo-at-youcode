#include <stdio.h>

int main(){
    char stringg[50];
printf("entre a string: ");
scanf("%s",&stringg);
int conteur=0,i=0;
while(stringg[i]!='\0'){
    conteur++;
    i++;

}

printf("the lenght of the string %d",conteur);

return 0;
}
