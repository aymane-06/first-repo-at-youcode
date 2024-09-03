#include <stdio.h>
#include <math.h>

int main(){
int n,a,b,c,d;
printf("entre le nobmbre du 4 chiffres: ");
scanf("%d",&n);
if(n<=1000 || n>=9999){
    printf(" le nobmbre ne contian pas du 4 chiffres");
}else{
printf(" le nobmbre contian du 4 chiffres");
}
a=n/1000;
b=(n/100)%10;
c=(n/10)%10;
d=n%10;
printf("le nombre %d en inverse est : %d%d%d%d",n,d,c,b,a);





return 0;
}
