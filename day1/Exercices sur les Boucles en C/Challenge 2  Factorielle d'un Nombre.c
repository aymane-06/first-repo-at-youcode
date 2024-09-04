#include <stdio.h>
#include <math.h>

int main (){
int n;
printf("entre un nombre: ");
scanf("%d",&n);
if(n<0)
    printf("entre un nombre positif!!");
else if(n==0)
    printf("le factorile du nombre %d est : 1",n);
else{
int f=1;
for(int i=1;i<=n;i++){

    f=f*i;

}
printf("le factoriel du nombre %d est: %d\n",n,f);}













return 0;
}
