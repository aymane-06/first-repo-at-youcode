#include <stdio.h>
int main(){
int n=5,npc=0;
//printf("entre un nombre: ");
//scanf("%d",&n);
int i=1;

while(npc<n){

    if(i%2==0){
            npc++;
        printf(", %d",i);


    }

     i++;
}



return 0;
}
