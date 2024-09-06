#include <stdio.h>
int main(){
int n;
int pair_count =0;
printf("entre un nombre: ");
scanf("%d",&n);
int i = 1;
while(pair_count<n){
    if(i%2!=0)
    {
        pair_count++;
        printf(", %d",i);
    }
    i++;
}


return 0;
}
