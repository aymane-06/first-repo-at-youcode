#include <stdio.h>
#include <string.h>



int main(){
    char cat[100];
    char stringg[50];
    char stringe[50];
    printf("entre a string: ");
    scanf("%s",&stringg);
    printf("entre a string: ");
    scanf("%s",&stringe);
    for(int i=0;i<strlen(cat);i++){

        cat[i]=stringg[i];
        if(i==strlen(stringg)){
            cat[i]=stringe[i];
        }
    }
    printf("%s",cat);


return 0;
}
