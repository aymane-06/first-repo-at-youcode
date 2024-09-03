#include <stdio.h>
#include <math.h>

int main(){

int a,b,c,x;
float x1,x2;
printf("entre la valeur de a:");
scanf("%d",&a);
printf("entre la valeur de b:");
scanf("%d",&b);
printf("entre la valeur de c:");
scanf("%d",&c);
int delta=pow(b,2)-4*a*c;
if(delta <0){
    printf("L'équation n'a pas de solution reelle.");
}else if (delta==0){
x=-b/2*a;
 printf("L'équation a une seule solution reelle :", x);
}else{
x1=((-b)-sqrt(delta))/2*a;
x2=((-b)+sqrt(delta))/2*a;
  printf("L'équation a deux solutions reelles : x1=%f x2=%f",x1,x2);

}









return 0;
}
