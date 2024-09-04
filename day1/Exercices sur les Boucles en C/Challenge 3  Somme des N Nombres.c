#include <stdio.h>
int main(){
int n;
printf("entre un nombre: ");
scanf("%d",&n);
int s=0;
for(int i=1;i<=n;i++){
    s=s+i;

}
printf("la somme des n premiers nombres naturels est: %d",s);






return 0;
}
